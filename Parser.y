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
    #include "type_checks.h"
    void yyerror(const char *s);
    int yylex(void);
    extern FILE *yyin;
    SymbolTable* current_scope;
    Symbol* current_function = NULL; 
    DATATYPE current_type;    
    KIND current_kind;
    
%}

%union {
    int i;
    float f;
    char * str;
    _Bool b;
}

%token MINUS
%token PLUS
%token MULTIPLY
%token DIVIDE
%token OPENBRACKET
%token CLOSEDBRACKET
%token <i> INTEGER
%token <str> STRING
%token <f> FLOAT
%token <b> BOOLEAN
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
%type<i>  EXPR T G M 
%type <i> condition inner_condition
%type <i> datatype


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
| RETURN EXPR
{
    if(!current_function )
    {
        fprintf(stderr,"Line %d:Return Statement not inside a function\n",yylineno)
    }
    else if(!type_compatible(current_function->type,$2))
    {
        fprintf("Line %d: Return type mismatch. Function %s returns %s, but returning %s\n",
        yylineno,
        current_function->name,
        type_name(current_function->type),
        type_name($2)
        );
    }
}
| RETURN
{
    if (!current_function) {
        fprintf(stderr, "Line %d: Return statement not inside a function\n", yylineno);
    } else if (current_function->type != SYM_VOID) {
        fprintf(stderr, "Line %d: Function '%s' should return %s\n",
                yylineno, current_function->name,
                type_name(current_function->type));
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
        } 
        else {
            Symbol* s = create_symbol($1, current_type, current_kind, false, NULL);
            insert(s, current_scope);
        }
    } 
|IDENTIFIER EQUAL EXPR {
        if (lookup_current($1, current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,$1);
        } 
        else if (!type_compatible(current_type,$3))
        {
            fprintf(stderr,"Line %d:Type mismatch: cannot assign %s to %s\n",yylineno,type_name($3),type_name(current_type));
        }
        else {
            Symbol* s = create_symbol($1, current_type, current_kind, true, NULL);
            insert(s, current_scope);   
        }
    } 

| IDENTIFIER EQUAL BOOLEAN { 
        if (lookup_current($1, current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n ",yylineno,$1);
        } 
        else if (!type_compatible(current_type,$3))
        {
            fprintf(stderr,"Line %d:Type mismatch: cannot assign %s to %s\n",yylineno,type_name($3),type_name(current_type));
        }
        else {
            Symbol* s = create_symbol($1, current_type, current_kind, true, NULL);
            insert(s, current_scope);
        }
    } 
| IDENTIFIER EQUAL STRING { 
        if (lookup_current($1, current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,$1);
        } 
        else if (!type_compatible(current_type,$3))
        {
            fprintf(stderr,"Line %d:Type mismatch: cannot assign %s to %s\n",yylineno,type_name($3),type_name(current_type));
        }
        else {
            Symbol* s = create_symbol($1, current_type, current_kind, true, NULL);
            insert(s, current_scope);
        }
    } 
| IDENTIFIER EQUAL condition { //Multiple declaration check , Symbol insertion
        if (lookup_current($1, current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,$1);
        } 
        else if (!type_compatible(current_type,$3))
        {
            fprintf(stderr,"Line %d:Type mismatch: cannot assign %s to %s\n",yylineno,type_name($3),type_name(current_type));
        }
        else {
            Symbol* s = create_symbol($1, current_type, current_kind, true, NULL);
            insert(s, current_scope);
        }
    } 
;

Ifstmt: 
  IF OPENBRACKET condition CLOSEDBRACKET 
  OPENBRACE enter_scope 
  code DOT 
  CLOSEDBRACE exit_scope 
  ELSE Ifstmt
| IF OPENBRACKET condition CLOSEDBRACKET 
  OPENBRACE enter_scope
  code DOT
  CLOSEDBRACE exit_scope
| IF OPENBRACKET condition CLOSEDBRACKET 
  OPENBRACE enter_scope 
  code DOT 
  CLOSEDBRACE exit_scope 
  ELSE 
  OPENBRACE enter_scope
  code DOT 
  CLOSEDBRACE exit_scope
;

repeat:
    REPEAT OPENBRACE enter_scope
        code DOT
    CLOSEDBRACE exit_scope
    UNTIL OPENBRACKET condition CLOSEDBRACKET
;

forloop:
    FOR OPENBRACKET enter_scope iterator COMMA assignment CLOSEDBRACKET
    OPENBRACE 
        code DOT
    CLOSEDBRACE exit_scope
;

iterator: INTTYPE IDENTIFIER EQUAL EXPR TO EXPR
    {
        if (lookup_current($2, current_scope)) {
            fprintf(stderr,"Line %d:iterator %s has been declared before \n",yylineno,$2);
        } else {
            Symbol* s = create_symbol($2, SYM_INT, VAR, true, NULL);
            insert(s, current_scope);
            s->used=true;
        }
    }
| IDENTIFIER EQUAL EXPR TO EXPR 
{
    Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,$1);
        } else {
            s->initialized = true;
            s->used=true;
        }
}

;

whileloop:
    WHILE OPENBRACKET condition CLOSEDBRACKET 
    OPENBRACE enter_scope
        code DOT
    CLOSEDBRACE exit_scope
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
        }
    } ;

function: 
    function_header enter_scope parameters CLOSEDBRACKET 
    OPENBRACE  
    code DOT 
    CLOSEDBRACE exit_scope
    

|  function_header CLOSEDBRACKET
    OPENBRACE enter_scope
    code DOT 
    CLOSEDBRACE exit_scope
;

function_call: 
    IDENTIFIER OPENBRACKET list CLOSEDBRACKET {
        Symbol* f = lookup($1, current_scope);
        if (!f)
            fprintf( stderr,"Line %d:Function %s not defined \n",yylineno,$1);
        else if (f->kind != FUNC)
            fprintf(stderr,"Line %d:Identifier %s is not a function\n",yylineno,$1);
        else 
           f->used=true;
        }
  | IDENTIFIER OPENBRACKET CLOSEDBRACKET {
        Symbol* f = lookup($1, current_scope);
        if (!f)
            fprintf( stderr,"Line %d:Function %s not defined \n",yylineno,$1);
        else if (f->kind != FUNC)
            fprintf(stderr,"Line %d:Identifier %s is not a function\n",yylineno,$1);
        else 
           f->used=true;
    }
;


list: EXPR | EXPR COMMA list; //list checking -->> type

switchstmt: 
    SWITCH OPENBRACKET IDENTIFIER  CLOSEDBRACKET 
    OPENBRACE enter_scope case_structure 
    DEFAULT OPENBRACE enter_scope
    code DOT 
    CLOSEDBRACE exit_scope
    CLOSEDBRACE exit_scope  { //net2aked en identifier of type int 3lshan manensash
        Symbol* s= lookup($3, current_scope);
        if(!s){
            fprintf(stderr,"Line %d:%s is not declared\n",yylineno,$3);
        } else {
            s->used=true;
        }
    }
| SWITCH OPENBRACKET IDENTIFIER  CLOSEDBRACKET 
  OPENBRACE enter_scope 
  case_structure 
  CLOSEDBRACE exit_scope {
        Symbol* s= lookup($3, current_scope);
        if(!s){
            fprintf(stderr,"Line %d:%s is not declared\n",yylineno, $3);
        } else {
            s->used=true;
        }
  }
;

case_structure: inner_case | inner_case case_structure;

inner_case:
    CASE OPENBRACKET INTEGER CLOSEDBRACKET
    OPENBRACE enter_scope
        code DOT
    CLOSEDBRACE exit_scope
;

condition: condition AND inner_condition 
{
    if($1 != SYM_BOOL || $3 !=SYM_BOOL)
        fprintf(stderr,"Line %d: %s is not a boolean operand\n",yylineno,$1);
    
    $$= SYM_BOOL;
        
}
| condition OR inner_condition
{
    if($1 != SYM_BOOL || $3!=SYM_BOOL)
        fprintf(stderr,"Line %d: %s is not a boolean operand\n",yylineno,$1);
    $$= SYM_BOOL;
        
}
| NOT inner_condition
{
    if($2 != SYM_BOOL)
        fprintf(stderr,"Line %d: %s is not a boolean operand\n",yylineno,$2);
    $$= SYM_BOOL  ; 
}
| inner_condition 
{
    $$=SYM_BOOL;
}

| condition AND EXPR
| condition OR EXPR
| NOT EXPR
;

inner_condition: OPENBRACKET condition CLOSEDBRACKET {$$=SYM_BOOL}
| EXPR GREATERTHAN EXPR {$$ =SYM_BOOL;}
| EXPR GREATERTHANEQ EXPR {$$ =SYM_BOOL;}
| EXPR LESSTHAN EXPR {$$ =SYM_BOOL;}
| EXPR LESSTHANEQ EXPR {$$ =SYM_BOOL;}
// | EXPR EQUALITY BOOLEAN {$$ =SYM_BOOL;}
| EXPR EQUALITY EXPR {$$ =SYM_BOOL;}
// | EXPR NOTEQUALITY BOOLEAN {$$ =SYM_BOOL;}
| EXPR NOTEQUALITY EXPR {$$ =SYM_BOOL;}
;

assignment:
    IDENTIFIER EQUAL EXPR {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,$1);
            $$=SYM_ERROR;
        } else {
            if(!type_compatible(s->type,$3))
            {
                fprintf(stderr,"Line %d: Type mismatch: cannot assign %s to %s \n",yylineno,type_name($3),type_name(s->type));
            }
            else
            {
                s->initialized = true;
                $$=s->type;
            }
        }
    }

  | IDENTIFIER EQUAL STRING {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,$1);
            $$=SYM_ERROR;
        } else {
            if(!type_compatible(s->type,$3))
            {
                fprintf(stderr,"Line %d: Type mismatch: cannot assign string to %s \n",yylineno,type_name(s->type));
            }
            else
            {
                s->initialized = true;
                $$=s->type;
            }
        }
    }

  | IDENTIFIER EQUAL condition {
        Symbol* s = lookup($1, current_scope);
        //Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,$1);
            $$=SYM_ERROR;
        } else {
            if(!type_compatible(s->type,$3))
            {
                fprintf(stderr,"Line %d: Type mismatch: cannot assign Boolean to %s \n",yylineno,type_name(s->type));
            }
            else
            {
                s->initialized = true;
                $$=s->type;
            }
        }
    }

  | IDENTIFIER INCREMENT {
        Symbol* s = lookup($1, current_scope);
        if (!s)
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, $1);
        else if (!s->initialized)
            fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, $1);
        else if (s->type!=SYM_INT && s->type!= SYM_FLOAT)
            fprintf("Line %d: Increment applied to non-numeric type %s",type_name(s->type));
    }

  | IDENTIFIER DECREMENT {
        Symbol* s = lookup($1, current_scope);
        if (!s)
             fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, $1);
        else if (!s->initialized)
            fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, $1);
        else if (s->type!=SYM_INT && s->type != SYM_FLOAT)
            fprintf("Line %d: Increment applied to non-numeric type %s",type_name(s->type));
    }

  | IDENTIFIER PLUSEQ EXPR {
        Symbol* s = lookup($1, current_scope);
        if (!s)
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, $1);
        else if (!s->initialized)
           fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, $1);
        else if (s->type!=SYM_INT && s->type!= SYM_FLOAT)
            fprintf("Line %d: Addition applied to non-numeric type %s",type_name(s->type));

    }

  | IDENTIFIER MINUSEQ EXPR {
         Symbol* s = lookup($1, current_scope);
        if (!s)
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, $1);
        else if (!s->initialized)
           fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, $1);
        else if (s->type!=SYM_INT && s->type!= SYM_FLOAT)
            fprintf("Line %d: Subtraction applied to non-numeric type %s",type_name(s->type));

    }

  | IDENTIFIER MULTIPLYEQ EXPR {
         Symbol* s = lookup($1, current_scope);
        if (!s)
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, $1);
        else if (!s->initialized)
           fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, $1);
        else if (s->type!=SYM_INT && s->type!= SYM_FLOAT)
            fprintf("Line %d: Multiplication applied to non-numeric type %s",type_name(s->type));

    }

  | IDENTIFIER DIVIDEEQ EXPR {
        Symbol* s = lookup($1, current_scope);
        if (!s)
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, $1);
        else if (!s->initialized)
           fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, $1);
        else if (s->type!=SYM_INT && s->type!= SYM_FLOAT)
            fprintf("Line %d: Division applied to non-numeric type %s",type_name(s->type));

    }
;

EXPR: EXPR PLUS T 
{
    if($1==SYM_ERROR || $3 ==SYM_ERROR)
        $$=SYM_ERROR;
    else if ($1 == SYM_FLOAT || $3 == SYM_FLOAT)
        $$=SYM_FLOAT;
    else if ($1 ==SYM_INT && $3 ==SYM_INT)
        $$=SYM_INT;
    else
    {
        fprintf(stderr, "Line %d: Cannot add non-numeric types\n", yylineno);
        $$ = SYM_ERROR;
    }
}
| EXPR MINUS T
{
    if($1==SYM_ERROR || $3 ==SYM_ERROR)
        $$=SYM_ERROR;
    else if ($1 == SYM_FLOAT || $3 == SYM_FLOAT)
        $$=SYM_FLOAT;
    else if ($1 ==SYM_INT && $3 ==SYM_INT)
        $$=SYM_INT;
    else
    {
        fprintf(stderr, "Line %d: Cannot add non-numeric types\n", yylineno);
        $$ = SYM_ERROR;
    }
}
| T {$$=$1;}
;

T:T MULTIPLY M
{
    if($1==SYM_ERROR || $3 ==SYM_ERROR)
        $$=SYM_ERROR;
    else if ($1 == SYM_FLOAT || $3 == SYM_FLOAT)
        $$=SYM_FLOAT;
    else if ($1 ==SYM_INT && $3 ==SYM_INT)
        $$=SYM_INT;
    else
    {
        fprintf(stderr, "Line %d: Cannot add non-numeric types\n", yylineno);
        $$ = SYM_ERROR;
    }
}
| T DIVIDE M   
{
    if($1==SYM_ERROR || $3 ==SYM_ERROR)
        $$=SYM_ERROR;
    else if ($1 == SYM_FLOAT || $3 == SYM_FLOAT)
        $$=SYM_FLOAT;
    else if ($1 ==SYM_INT && $3 ==SYM_INT)
        $$=SYM_INT;
    else
    {
        fprintf(stderr, "Line %d: Cannot add non-numeric types\n", yylineno);
        $$ = SYM_ERROR;
    }
    if($3==0){yyerror("Division By zero"); $$=SYM_ERROR}
    // else $$=$1/$3;
}
| T MOD M 
{
    if((int)$3==0){yyerror("Modulo By zero");}
    //else $$=(int)$1 % (int)$3;
    if($1==SYM_ERROR || $3 ==SYM_ERROR)
        $$=SYM_ERROR;
    else if ($1 == SYM_FLOAT || $3 == SYM_FLOAT)
        $$=SYM_FLOAT;
    else if ($1 ==SYM_INT && $3 ==SYM_INT)
        $$=SYM_INT;
    else
    {
        fprintf(stderr, "Line %d: Cannot add non-numeric types\n", yylineno);
        $$ = SYM_ERROR;
    }
}
| M {$$=$1;}
;

M: G POWER M {
        if ($1 == SYM_ERROR || $3 == SYM_ERROR)
            $$ = SYM_ERROR;
        else if ($1 == SYM_FLOAT || $3 == SYM_FLOAT)
            $$ = SYM_FLOAT;
        else if ($1 == SYM_INT && $3 == SYM_INT)
            $$ = SYM_INT;
        else {
            fprintf(stderr, "Line %d: Cannot apply power to non-numeric types\n", yylineno);
            $$ = SYM_ERROR;
        }
    }
 | G { $$ = $1; };

G: OPENBRACKET EXPR CLOSEDBRACKET {$$=$2;}
|  MINUS G  
{
       if ($2 == SYM_ERROR)
           $$ = SYM_ERROR;
       else if ($2 == SYM_INT || $2 == SYM_FLOAT)
           $$ = $2;
       else {
           fprintf(stderr, "Line %d: Unary minus applied to non-numeric type\n", yylineno);
           $$ = SYM_ERROR;
       }
   }
|  INTEGER {$$=SYM_INT;}
|  FLOAT {$$=SYM_FLOAT;}
|   IDENTIFIER { //handles use before init.
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, $1);
            $$=SYM_ERROR;
        }
        else if(s->type !=SYM_INT && s->type !=SYM_FLOAT)
        {
            fprintf(stderr,"Line %d:Variable %s is not numeric\n",yylineno,$1);
            $$=SYM_ERROR;
        }
        else
        {
            if (!s->initialized) {
           fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, $1);
            } else {
                s->used = true;
                $$=s->type;
            }
        }
        
    }
| function_call {
    Symbol* f = lookup($1, current_scope);
    if (!f) {
        fprintf(stderr, "Line %d: Function %s not defined\n", yylineno, $1);
        $$ = SYM_ERROR;
    } else if (f->kind != FUNC) {
        fprintf(stderr, "Line %d: Identifier %s is not a function\n", yylineno, $1);
        $$ = SYM_ERROR;
    } else if (f->type ==SYM_VOID) {
        fprintf(stderr, "Line %d: Void function %s cannot be used in an expression\n", yylineno, $1);
        $$ = SYM_ERROR;
    } else {
        f->used = true;
        $$ = f->type;
    }
};

;

enter_scope:
    {
        current_scope = create_table(211, current_scope);
    }
;

exit_scope:
    {
        SymbolTable* old = current_scope;
        current_scope = current_scope->parent;
        report_unused(current_scope);
        //print_table(current_scope);
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
    
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("Error opening file");
            return 1;
        }
    }

    if (yyparse() == 0) {
        //report_unused(current_scope);
        free_table(current_scope);
        return 0;
    }
    
    return 1;
}