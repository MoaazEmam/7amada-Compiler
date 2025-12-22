%verbose
/* Definitions */
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include<stdbool.h>
    extern int yylineno;
    #include "symbol_table.h"
    #include "symbol.h"
    #include "param.h"
    #include "enums_def.h"
    #include "quadruple.h"
    void yyerror(const char *s);
    void report_unused(SymbolTable* table);
    int yylex(void);
    extern FILE *yyin;
    SymbolTable* current_scope;
    Symbol* current_function = NULL; 
    DATATYPE current_type;    
    KIND current_kind;
    char *current_switch_id = NULL;
    char *current_func_id = NULL;
    int return_count = 0;
    int cases[100];
    int case_count = 0;
%}

%code requires {
    #include "quadruple.h"
}
%union {
    int i;
    float f;
    char * str;
    _Bool b;
    Quadruple q;
}

%token MINUS
%token PLUS
%token MULTIPLY
%token DIVIDE
%token OPENBRACKET
%token CLOSEDBRACKET
%token <str> INTEGER
%token <str> STRING
%token <str> FLOAT
%token <str> BOOLEAN
%token OPENBRACE
%token CLOSEDBRACE
%token SEMICOLON
%token MOD
%token POWER
%token OPENSQUARE
%token CLOSESQUARE
%token COMMA   
%token BOOLTYPE
%token INTTYPE
%token FLOATTYPE
%token STRINGTYPE
%token <str> IDENTIFIER
%token GREATERTHANEQ
%token LESSTHAN
%token GREATERTHAN
%token LESSTHANEQ
%token EQUALITY
%token NOTEQUALITY
%token INCREMENT
%token DECREMENT
%token EQUAL
%token MINUSEQ
%token PLUSEQ
%token MULTIPLYEQ
%token DIVIDEEQ
%token AND
%token OR
%token NOT
%token CONST
%token IF
%token ELSE
%token DOT
%token FOR
%token TO
%token REPEAT
%token UNTIL
%token BREAK
%token CONTINUE
%token WHILE
%token SWITCH
%token CASE
%token DEFAULT
%token RETURN
%token VOIDTYPE
%type<str>  EXPR T G M condition inner_condition assignment function_call
%type <i> datatype if_start else_place repeat_start while_start iterator start_inner_case function_header
%type <q> for_loop_start

/* Production Rules */
%%
Start:S;

S: code DOT {printf("Correct Syntax\n");};

code: inner_code 
| code DOT inner_code;

inner_code: assignment
| declaration
| Ifstmt
| whileloop
| switchstmt
| function_call
| forloop
| repeat
| function
| RETURN EXPR {
    if (current_func_id) {
        emit("return",$2,"","");
        return_count++;
    } else {
        yyerror("Return used outside a function");
    }
}
| RETURN {
    if (current_func_id) {
        emit("return","","","");
        return_count++;
    } else {
        yyerror("Return used outside a function");
    }
}
| BREAK
;

datatype:
      INTTYPE     { $$ = SYM_INT; }
    | FLOATTYPE   { $$ = SYM_FLOAT; }
    | BOOLTYPE    { $$ = SYM_BOOL; }
    | STRINGTYPE  { $$ = SYM_STRING; }

;


const_type:
    datatype CONST {
        current_type = $1;
        current_kind = SYM_CONST;
    }
;



//$n in Bison means: The semantic value of the n-th symbol on the right-hand side of the rule
//datatype     IDENTIFIER
//   $1            $2
declaration:
    datatype inner_declaration  {
        current_type = $1;
        current_kind = VAR;
    } 
  | const_type inner_declaration
;


inner_declaration:
 IDENTIFIER { //Multiple declaration check , Symbol insertion
        if (lookup_current($1, current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n ",yylineno,$1);
        } else {
            Symbol* s = create_symbol($1, current_type, current_kind, false, NULL);
            insert(s, current_scope);
        }
    } 
|IDENTIFIER EQUAL EXPR {
        if (lookup_current($1, current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,$1);
        } else {
            Symbol* s = create_symbol($1, current_type, current_kind, true, NULL);
            insert(s, current_scope);   
            emit("=",$3,"",$1);
        }
    } 

| IDENTIFIER EQUAL BOOLEAN { 
        if (lookup_current($1, current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n ",yylineno,$1);
        } else {
            Symbol* s = create_symbol($1, current_type, current_kind, true, NULL);
            insert(s, current_scope);
            emit("=",$3,"",$1);
        }
    } 
| IDENTIFIER EQUAL STRING { 
        if (lookup_current($1, current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,$1);
        } else {
            Symbol* s = create_symbol($1, current_type, current_kind, true, NULL);
            insert(s, current_scope);
            emit("=",$3,"",$1);
        }
    } 
| IDENTIFIER EQUAL condition { //Multiple declaration check , Symbol insertion
        if (lookup_current($1, current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,$1);
        } else {
            Symbol* s = create_symbol($1, current_type, current_kind, true, NULL);
            insert(s, current_scope);
            emit("=",$3,"",$1);
        }
    } 
;

if_start: IF OPENBRACKET condition CLOSEDBRACKET 
{
    $$ = nextQuad();
    emit("IfFalse", $3, "", "");
}

Ifstmt: 
  if_start
    OPENBRACE enter_scope 
    code DOT 
    CLOSEDBRACE exit_scope 
    {
        addjump($1,nextQuad()+1); //skip the goto at the end of the if condition

    }
    else_stmt
| if_start
    OPENBRACE enter_scope
    code DOT
    CLOSEDBRACE exit_scope
    {
        addjump($1,nextQuad());
    }
;

else_place: 
{
    $$ = nextQuad();
    emit("goto", "", "", "");
}

else_stmt:
    ELSE else_place Ifstmt
    {
        addjump($2,nextQuad());
    }
| ELSE else_place OPENBRACE enter_scope
    code DOT 
    CLOSEDBRACE exit_scope
    {
        addjump($2,nextQuad());
    }
;

repeat_start: {
    $$ = nextQuad();
}

repeat:
    REPEAT OPENBRACE enter_scope repeat_start
        code DOT
    CLOSEDBRACE exit_scope
    UNTIL OPENBRACKET condition CLOSEDBRACKET {
        char label[20];
        sprintf(label, "%d", $4); 
        emit("IfFalse",$11,"",label);
    }
;
for_loop_start: {
    $$ = pop_last();
}
forloop:
    FOR OPENBRACKET enter_scope iterator COMMA assignment CLOSEDBRACKET for_loop_start
    OPENBRACE 
        code DOT
    CLOSEDBRACE exit_scope {
        if ($4 != -1) {
            char label[20];
            sprintf(label, "%d", $4);
            addQuad($8);
            emit("goto","","",label);
            addjump($4+1,nextQuad());
        }
    }
;

iterator: INTTYPE IDENTIFIER EQUAL EXPR TO EXPR
    {
        if (lookup_current($2, current_scope)) {
            fprintf(stderr,"Line %d:iterator %s has been declared before \n",yylineno,$2);
            $$ = -1;
        } else {
            Symbol* s = create_symbol($2, SYM_INT, VAR, true, NULL);
            insert(s, current_scope);
            s->used=true;
            emit("=",$2,"",$4);
            $$ = nextQuad();
            char *t = newTemp();
            emit(">",$2,$6,t);
            emit("IfTrue",t,"","");
        }
    }
| IDENTIFIER EQUAL EXPR TO EXPR 
{
    Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,$1);
            $$ = -1;
        } else {
            s->initialized = true;
            s->used=true;
            emit("=",$1,"",$3);
            $$ = nextQuad();
            char *t = newTemp();
            emit(">",$1,$5,t);
            emit("IfTrue",t,"","");
        }
}
;

while_start: WHILE OPENBRACKET condition CLOSEDBRACKET {
    $$ = nextQuad();
    emit("IfFalse",$3,"","");
}

whileloop:
    while_start
    OPENBRACE enter_scope
        code DOT
    CLOSEDBRACE exit_scope {
        char label[20];
        sprintf(label, "%d", $1); 
        emit("goto","","",label);
        addjump($1,nextQuad());
    }
;


parameters:
    datatype IDENTIFIER {
        current_type = $1;
        if (lookup_current($2, current_scope)) 
        {
            fprintf(stderr,"Line %d:Duplicate parameter name %s\n",yylineno, $2);
        } else {
            Symbol* p = create_symbol($2, current_type, VAR, true, NULL);           
            insert(p, current_scope);
            append_param($2, current_function->params);
        }
    }
| datatype IDENTIFIER COMMA parameters {
        current_type = $1;
        if (lookup_current($2, current_scope)) {
            fprintf(stderr,"Line %d:Duplicate parameter name  %s\n",yylineno,$2);
        } else {
            Symbol* p = create_symbol($2, current_type, VAR, true, NULL);
            insert(p, current_scope);
            append_param($2, current_function->params);  
        }
    }
;

function_header: 
    datatype IDENTIFIER OPENBRACKET{
          
            if (lookup_current($2, current_scope))
                fprintf(stderr,"Line %d:Function  %s redeclared \n",yylineno,$2);
            else {
                ParamList* plist = create_param_list();   
                Symbol* f = create_symbol($2, $1, FUNC, true, plist);
                insert(f, current_scope);
                current_function = f;    
                $$ = nextQuad();
                emit("goto","","",""); 
                emit("func",$2,"","");   
                if (!current_func_id) {
                    current_func_id = $2;
                } else {
                    yyerror("Nested functions are not allowed");
                } 
            }
        } 
    |  VOIDTYPE IDENTIFIER OPENBRACKET {
        if (lookup_current($2, current_scope))
            fprintf(stderr,"Line %d:Function  %s redeclared \n",yylineno,$2);
        else {
            ParamList* plist = create_param_list();   
            Symbol* f = create_symbol($2, SYM_VOID, FUNC, true, plist);
            insert(f, current_scope);
            current_function = f;   
            $$ = nextQuad();
            emit("goto","","",""); 
            emit("func",$2,"","");   
            if (!current_func_id) {
                current_func_id = $2;
                return_count++;
            } else {
                yyerror("Nested functions are not allowed");
            } 
        }
    } ;

function: 
    function_header enter_scope parameters CLOSEDBRACKET 
    OPENBRACE  
    code DOT 
    CLOSEDBRACE exit_scope
    {
        if (return_count == 0){
            fprintf( stderr,"Line %d:Function %s has no return \n",yylineno,current_func_id);
        } else {
            emit("endFunc",current_func_id, "","");
            addjump($1,nextQuad());
            current_func_id = NULL;
            return_count = 0;
        }
    }

|   function_header CLOSEDBRACKET
    OPENBRACE enter_scope
    code DOT 
    CLOSEDBRACE exit_scope
    {
        if (return_count == 0){
            fprintf( stderr,"Line %d:Function %s has no return \n",yylineno,current_func_id);
        } else {
            emit("endFunc",current_func_id, "","");
            addjump($1,nextQuad());
            current_func_id = NULL;
            return_count = 0;
        }
    }
;

function_call: 
    IDENTIFIER OPENBRACKET list CLOSEDBRACKET {
        Symbol* f = lookup($1, current_scope);
        if (!f)
            fprintf( stderr,"Line %d:Function %s not defined \n",yylineno,$1);
        else if (f->kind != FUNC)
            fprintf(stderr,"Line %d:Identifier %s is not a function\n",yylineno,$1);
        else {
            f->used=true;
            char string_count[20];
            sprintf(string_count, "%d", f->params->count); 
            if (f->type == SYM_VOID) {
                emit("call", $1, string_count, "");
                $$ = "";
            }
            else {
                char *t = newTemp();
                emit("call", $1, string_count, t);
                $$ = t;
            }
        }
    }
  | IDENTIFIER OPENBRACKET CLOSEDBRACKET {
        Symbol* f = lookup($1, current_scope);
        if (!f)
            fprintf( stderr,"Line %d:Function %s not defined \n",yylineno,$1);
        else if (f->kind != FUNC)
            fprintf(stderr,"Line %d:Identifier %s is not a function\n",yylineno,$1);
        else {
            f->used=true;
            if (f->type == SYM_VOID) {
                emit("call", $1, "0", "");
                $$ = "";
            }
            else {
                char *t = newTemp();
                emit("call", $1, "0", t);
                $$ = t;
            }
        }
    }
;


list: EXPR {
    emit("param", $1, "", "");
}| EXPR COMMA list {
    emit("param", $1, "", "");
}; //list checking -->> type

switch_start: SWITCH OPENBRACKET IDENTIFIER CLOSEDBRACKET {
    Symbol* s= lookup($3, current_scope);
    if(!s){
        fprintf(stderr,"Line %d:%s is not declared\n",yylineno, $3);
    } 
    else if (!s->initialized) {
        fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, $3);
    } 
    if (!current_switch_id) {
        current_switch_id = $3;
        s->used=true;
    } else {
        yyerror("Nested swtiches are not allowed");
    }
}
switchstmt: 
    switch_start
    OPENBRACE enter_scope case_structure 
    DEFAULT OPENBRACE enter_scope
    code DOT 
    CLOSEDBRACE exit_scope
    CLOSEDBRACE exit_scope  { //net2aked en identifier of type int 3lshan manensash
        current_switch_id = NULL;
        int end = nextQuad();
        for (int i = 0; i < case_count; i++)
            addjump(cases[i], end);
        case_count = 0;
    }
| switch_start
  OPENBRACE enter_scope 
  case_structure 
  CLOSEDBRACE exit_scope {
    current_switch_id = NULL;
    int end = nextQuad();
    for (int i = 0; i < case_count; i++)
        addjump(cases[i], end);
    case_count = 0;
  }
;

case_structure: inner_case | inner_case case_structure;

start_inner_case: CASE OPENBRACKET INTEGER CLOSEDBRACKET{
    if (current_switch_id) {
        char *t = newTemp();
        emit("==",current_switch_id,$3,t);
        $$ = nextQuad();
        emit("IfFalse",t,"","");
    } else {
        $$ = -1;
    }
}

inner_case:
    start_inner_case
    OPENBRACE enter_scope
        code DOT
    CLOSEDBRACE exit_scope {
        if ($1 != -1) {
            cases[case_count] = nextQuad();
            case_count++;
            emit("goto", "", "", "");
            addjump($1,nextQuad());
        }
    }
;

condition: condition AND inner_condition 
{
    char *t = newTemp();
    emit("and", $1, $3, t);
    $$ = t;
}
| condition OR inner_condition
{
    char *t = newTemp();
    emit("or", $1, $3, t);
    $$ = t;
}
| NOT inner_condition
{
    char *t = newTemp();
    emit("not", $2, "", t);
    $$ = t;
}
| inner_condition
{
    $$ = $1;
}
| condition AND EXPR
{
    char *t = newTemp();
    emit("and", $1, $3, t);
    $$ = t;
}
| condition OR EXPR
{
    char *t = newTemp();
    emit("or", $1, $3, t);
    $$ = t;
}
| NOT EXPR
{
    char *t = newTemp();
    emit("not", $2, "", t);
    $$ = t;
}
;

inner_condition: OPENBRACKET condition CLOSEDBRACKET {$$=$2;}
| EXPR GREATERTHAN EXPR
{
    char *t = newTemp();
    emit(">", $1, $3, t);
    $$ = t;
}
| EXPR GREATERTHANEQ EXPR
{
    char *t = newTemp();
    emit(">=", $1, $3, t);
    $$ = t;
}
| EXPR LESSTHAN EXPR
{
    char *t = newTemp();
    emit("<", $1, $3, t);
    $$ = t;
}
| EXPR LESSTHANEQ EXPR
{
    char *t = newTemp();
    emit("<=", $1, $3, t);
    $$ = t;
}
| EXPR EQUALITY BOOLEAN
{
    char *t = newTemp();
    emit("==", $1, $3, t);
    $$ = t;
}
| EXPR EQUALITY EXPR
{
    char *t = newTemp();
    emit("==", $1, $3, t);
    $$ = t;
}
| EXPR NOTEQUALITY BOOLEAN
{
    char *t = newTemp();
    emit("!=", $1, $3, t);
    $$ = t;
}
| EXPR NOTEQUALITY EXPR
{
    char *t = newTemp();
    emit("!=", $1, $3, t);
    $$ = t;
}
;

assignment:
    IDENTIFIER EQUAL EXPR {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,$1);
            $$ = "error";
        } else {
            s->initialized = true;
            emit("=", $3, "", $1);
            $$ = $1;
        }
    }

  | IDENTIFIER EQUAL STRING {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s used before declaration\n",yylineno, $1);
            $$ = "error";
        } else {
            s->initialized = true;
            emit("=", $3, "", $1);
            $$ = $1;
        }
    }

  | IDENTIFIER EQUAL condition {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  used before declaration\n",yylineno,$1);
            $$ = "error";
        } else {
            s->initialized = true;
            emit("=", $3, "", $1);
            $$ = $1;
        }
    }

  | IDENTIFIER INCREMENT {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, $1);
            $$ = "error";
        }
        else if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, $1);
            $$ = "error";
        }
        else {
            emit("++", $1, "", $1);
            $$ = $1;
        }
    }

  | IDENTIFIER DECREMENT {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, $1);
            $$ = "error";
        }
        else if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, $1);
            $$ = "error";
        }
        else {
            emit("--", $1, "", $1);
            $$ = $1;
        }
    }

  | IDENTIFIER PLUSEQ EXPR {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, $1);
            $$ = "error";
        }
        else if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, $1);
            $$ = "error";
        }
        else {
            emit("+", $1, $3, $1);
            $$ = $1;
        }
       
    }

  | IDENTIFIER MINUSEQ EXPR {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, $1);
            $$ = "error";
        }
        else if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, $1);
            $$ = "error";
        }
        else {
            emit("-", $1, $3, $1);
            $$ = $1;
        }
       
    }

  | IDENTIFIER MULTIPLYEQ EXPR {
         Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, $1);
            $$ = "error";
        }
        else if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, $1);
            $$ = "error";
        }
        else {
            emit("*", $1, $3, $1);
            $$ = $1;
        }
   
    }

  | IDENTIFIER DIVIDEEQ EXPR {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, $1);
            $$ = "error";
        }
        else if (!s->initialized) {
           fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, $1);
           $$ = "error";
        }
        else {
            emit("/", $1, $3, $1);
            $$ = $1;
        }
    }
;

EXPR: EXPR PLUS T {
    char *t = newTemp();
    emit("+", $1, $3, t);
    $$ = t;
}
| EXPR MINUS T {
    char *t = newTemp();
    emit("-", $1, $3, t);
    $$ = t;
}
| T {$$=$1;}
;

T:T MULTIPLY M {
    char *t = newTemp();
    emit("*", $1, $3, t);
    $$ = t;
}
| T DIVIDE M    {
    char *t = newTemp();
    emit("/", $1, $3, t);
    $$ = t;
}
| T MOD M      {
    char *t = newTemp();
    emit("%%", $1, $3, t);
    $$ = t;
}
| M {$$=$1;}
;

M: G POWER M {
    char *t = newTemp();
    emit("^", $1, $3, t);
    $$ = t;
}
|  G   {$$=$1;}
;

G: OPENBRACKET EXPR CLOSEDBRACKET {$$=$2;}
|  MINUS G  {
    char *t = newTemp();
    emit("negative", $2, "", t);
    $$ = t;
}
|  INTEGER {$$=$1;}
|  FLOAT {$$=$1;}
|   IDENTIFIER { //handles use before init.
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, $1);
            $$ = "error";    
        }
        else if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, $1);
            $$ = "error";
        } else {
            s->used = true;
            $$ = $1;
        }
    }
|  function_call {$$=$1;}
;

enter_scope:
    {
        current_scope = create_table(211, current_scope);
    }
;

exit_scope:
    {
        SymbolTable* old = current_scope;
        print_table(current_scope);
        report_unused(current_scope);
        printf("_____________________________ \n");
        current_scope = current_scope->parent;
        free_table(old);
    }
;

%%

/* Subroutines */
void yyerror(const char *s) {
    extern char *yytext;  // Current token text
    fprintf(stderr, "Line %d:Syntax error at '%s': %s\n",yylineno, yytext, s);
}
void report_unused(SymbolTable* table) {
    for (int i = 0; i < table->size; i++) {
        Symbol* s = table->table[i];
        while (s) {
            if (!s->used && s->kind == VAR) {
                printf("Warning: variable '%s' declared but not used\n", s->name);
            }
            s = s->next;
        }
    }
}

int main(int argc, char **argv) {
    current_scope = create_table(211, NULL); // global scope
    initQuadTable();
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("Error opening file");
            return 1;
        }
    }

    if (yyparse() == 0) {
        print_table(current_scope);
        report_unused(current_scope);
        printQuadruples();
        free_table(current_scope);
        return 0;
    }
    
    return 1;
}