%verbose
/* Definitions */
%{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
extern int yylineno;
#include "symbol_table.h"
#include "symbol.h"
#include "param.h"
#include "enums_def.h"
#include "type_checks.h"
#include "quadruple.h"
void yyerror(const char *s);
void report_unused(SymbolTable* table);
int yylex(void);
extern FILE *yyin;
SymbolTable *current_scope;
Symbol *current_function = NULL;
Param *current_param = NULL;
int arg_count = 0;
bool param_error = false;
DATATYPE current_type;
KIND current_kind;
char *current_switch_id = NULL;
char *current_func_id = NULL;
int return_count = 0;
int cases[100];
int case_count = 0;
#define MAX_SCOPES 1000
SymbolTable* all_scopes[MAX_SCOPES];
int scope_count=0;
%}

%code requires {
    #include "quadruple.h"
    #include "enums_def.h"
    typedef struct {
        DATATYPE type; 
        char* place;     
        //int quad_idx;    
    } ExprInfo;
}
%union {
    int i;
    float f;
    char *str;
    _Bool b;
    DATATYPE dtype;
    Quadruple q;
    ExprInfo info;
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
%type <dtype> datatype
%type<info>  EXPR T G M condition inner_condition assignment function_call
%type <i> if_start else_place repeat_start while_start iterator start_inner_case function_header
%type <q> for_loop_start
%type <b> list
%type <info> item

/* Production Rules */
%%
Start : S;

S : code DOT { printf("Correct Syntax\n"); };

code : inner_code | code DOT inner_code;

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
        if (!type_compatible(current_function->type, $2.type)) {
            fprintf(stderr, "Line %d: Return type mismatch. Function %s returns %s, but returning %s\n",
                    yylineno, current_func_id, type_name(current_function->type), type_name($2.type));
        }

        emit("return", $2.place, "", "");
        return_count++;
    } else {
        yyerror("Return used outside a function");
    }
}
| RETURN {
    if (current_func_id) {
        if (current_function->type != SYM_VOID) {
            fprintf(stderr, "Line %d: Function '%s' should return %s, but returned nothing\n",
                    yylineno, current_func_id, type_name(current_function->type));
        }

        emit("return", "", "", "");
        return_count++;
    } else {
        yyerror("Return used outside a function");
    }
}
;

datatype:
      INTTYPE     { $$ = SYM_INT;    current_type = SYM_INT;    current_kind = VAR; }
    | FLOATTYPE   { $$ = SYM_FLOAT;  current_type = SYM_FLOAT;  current_kind = VAR; }
    | BOOLTYPE    { $$ = SYM_BOOL;   current_type = SYM_BOOL;   current_kind = VAR; }
    | STRINGTYPE  { $$ = SYM_STRING; current_type = SYM_STRING; current_kind = VAR; }
;


const_type:
    datatype CONST {
        current_type = $1;
        current_kind = SYM_CONST; 
    }
;



declaration:
    datatype inner_declaration  {
        current_type = $1;
        current_kind = VAR;
    } 
  | const_type inner_declaration
;


inner_declaration:
 IDENTIFIER { 
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
            if (!type_compatible(current_type, $3.type)) {
                 fprintf(stderr, "Line %d: Type mismatch in declaration. Expected %s, got %s\n", 
                         yylineno, type_name(current_type), type_name($3.type));
            }
            emit("=",$3.place,"",$1);
        }
    } 

| IDENTIFIER EQUAL BOOLEAN { 
        if (lookup_current($1, current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n ",yylineno,$1);
        } else {
            if(!type_compatible(current_type, SYM_BOOL)) {
                 fprintf(stderr, "Line %d: Type mismatch in declaration. Expected %s, got boolean\n", 
                         yylineno, type_name(current_type));
            }
            Symbol* s = create_symbol($1, current_type, current_kind, true, NULL);
            insert(s, current_scope);
            emit("=",$3,"",$1);
        }
    } 
| IDENTIFIER EQUAL STRING { 
        if (lookup_current($1, current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,$1);
        } else {
            if(!type_compatible(current_type, SYM_STRING)) {
                 fprintf(stderr, "Line %d: Type mismatch in declaration. Expected %s, got STRING\n", 
                         yylineno, type_name(current_type));
            }
            Symbol* s = create_symbol($1, current_type, current_kind, true, NULL);
            insert(s, current_scope);
            emit("=",$3,"",$1);
        }
    } 
| IDENTIFIER EQUAL condition { 
        if (lookup_current($1, current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,$1);
        } else {
            if (!type_compatible(current_type, $3.type)) {
                 fprintf(stderr, "Line %d: Type mismatch in declaration. Expected %s, got %s\n", 
                         yylineno, type_name(current_type), type_name($3.type));
            }
            Symbol* s = create_symbol($1, current_type, current_kind, true, NULL);
            insert(s, current_scope);
            emit("=",$3.place,"",$1);
        }
    } 
;

if_start: IF OPENBRACKET condition CLOSEDBRACKET 
{
    if ($3.type != SYM_BOOL) {
         fprintf(stderr, "Line %d: If condition must be boolean\n", yylineno);
    }

    $$ = nextQuad();
    emit("IfFalse", $3.place, "", "");
}

Ifstmt: 
  if_start
    OPENBRACE enter_scope 
    code DOT 
    CLOSEDBRACE exit_scope 
    {
        addjump($1,nextQuad()+1);
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
        if ($11.type != SYM_BOOL) {
             fprintf(stderr, "Line %d: Until condition must be boolean\n", yylineno);
        }
        char label[20];
        sprintf(label, "%d", $4); 
        emit("IfFalse",$11.place,"",label);
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
    if ($4.type != SYM_INT || $6.type != SYM_INT) {
        fprintf(stderr, "Line %d: For loop range must be Integers\n", yylineno);
    }

    if (lookup_current($2, current_scope)) {
        fprintf(stderr,"Line %d:iterator %s has been declared before \n",yylineno,$2);
        $$ = -1;
    } else {
        Symbol* s = create_symbol($2, SYM_INT, VAR, true, NULL);
        insert(s, current_scope);
        s->used=true;
        emit("=",$2,"",$4.place); 
        $$ = nextQuad();
        char *t = newTemp();
        emit(">",$2,$6.place,t); 
        emit("IfTrue",t,"","");
    }
}
| IDENTIFIER EQUAL EXPR TO EXPR 
{
    if ($3.type != SYM_INT || $5.type != SYM_INT) {
        fprintf(stderr, "Line %d: For loop range must be Integers\n", yylineno);
    }

    Symbol* s = lookup($1, current_scope);
    if (!s) {
        fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,$1);
        $$ = -1;
    } else {
        s->initialized = true;
        s->used=true;
        emit("=",$1,"",$3.place);
        $$ = nextQuad();
        char *t = newTemp();
        emit(">",$1,$5.place,t); 
        emit("IfTrue",t,"","");
    }
}
;

while_start: WHILE OPENBRACKET condition CLOSEDBRACKET {
    if ($3.type != SYM_BOOL) {
         fprintf(stderr, "Line %d: While condition must be boolean\n", yylineno);
    }
    $$ = nextQuad();
    emit("IfFalse",$3.place,"","");
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

parameters : datatype IDENTIFIER
{
    current_type = $1;
    if (lookup_current($2, current_scope))
    {
        fprintf(stderr, "Line %d:Duplicate parameter name %s\n", yylineno, $2);
    }
    else
    {
        Symbol *p = create_symbol($2, current_type, VAR, true, NULL);
        insert(p, current_scope);
        append_param($2, $1, current_function->params);
    }
}
| datatype IDENTIFIER COMMA parameters
{
    current_type = $1;
    if (lookup_current($2, current_scope))
    {
        fprintf(stderr, "Line %d:Duplicate parameter name %s\n", yylineno, $2);
    }
    else
    {
        Symbol *p = create_symbol($2, current_type, VAR, true, NULL);
        insert(p, current_scope);
        append_param($2, $1, current_function->params);
    }
};

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
    IDENTIFIER OPENBRACKET {
        Symbol *f = lookup($1, current_scope);
        if (!f) fprintf(stderr, "Line %d:Function %s not defined \n", yylineno, $1);
        else if (f->kind != FUNC) fprintf(stderr, "Line %d:Identifier %s is not a function\n", yylineno, $1);
        else {
            current_function = f; 
            current_param = f->params->head; 
            arg_count = 0; 
            param_error = false;
        }
    }
    list CLOSEDBRACKET {
        if (!param_error && current_param != NULL) {
             fprintf(stderr, "Line %d: Too few arguments for function %s\n", yylineno, $1);
             param_error = true;
        }
        
        Symbol* f = lookup($1, current_scope); 
        if (f) {
            f->used=true;
            char string_count[20];
            sprintf(string_count, "%d", f->params->count); 
            
            if (f->type == SYM_VOID) {
                emit("call", $1, string_count, "");
                $$.type = SYM_VOID;
                $$.place = "";
            } else {
                char *t = newTemp();
                emit("call", $1, string_count, t);
                $$.type = f->type;
                $$.place = t;
            }
        } else {
             $$.type = SYM_ERROR;
             $$.place = NULL;
        }
    }
    
  | IDENTIFIER OPENBRACKET CLOSEDBRACKET {
       Symbol* f = lookup($1, current_scope);
       if (!f) fprintf( stderr,"Line %d:Function %s not defined \n",yylineno,$1);
       else if (f->kind != FUNC) fprintf(stderr,"Line %d:Identifier %s is not a function\n",yylineno,$1);
       else {
           if (f->params->count > 0) fprintf(stderr, "Line %d: Function %s expects arguments\n", yylineno, $1);
           
           f->used=true;
           if (f->type == SYM_VOID) {
               emit("call", $1, "0", "");
               $$.type = SYM_VOID;
               $$.place = "";
           } else {
               char *t = newTemp();
               emit("call", $1, "0", t);
               $$.type = f->type;
               $$.place = t;
           }
       }
    }
;


list: item {
    arg_count++;
    if (!current_param && !param_error) {
        fprintf(stderr, "Line %d: Too many arguments for function %s\n", yylineno, current_function->name);
        param_error = true;
    } 
    else if (current_param && !type_compatible($1.type, current_param->type)) {
        if (!param_error) {
            fprintf(stderr, "Line %d: Parameter %d mismatch. Expected %s, got %s\n", 
                    yylineno, arg_count, type_name(current_param->type), type_name($1.type));
            param_error = true;
        }
    } else {
        if (current_param) current_param = current_param->next;
        if ($1.place && !param_error)
        emit("param", $1.place, "", "");
        $$ = !param_error;
    }
}
| list COMMA item {
    
    arg_count++;

    if (!current_param && !param_error) {
         fprintf(stderr, "Line %d: Too many arguments\n", yylineno);
         param_error = true;
    } 
    else if (current_param && !type_compatible($3.type, current_param->type)) {
         if (!param_error) {
             fprintf(stderr, "Line %d: Parameter mismatch\n", yylineno);
             param_error = true;
         }
    } else {
        if (current_param) current_param = current_param->next;
        if ($3.place && !param_error)
        emit("param", $3.place, "", "");
        $$ = !param_error;
    }
};

item : IDENTIFIER {
    Symbol* s = lookup($1, current_scope);
    if (!s) {
        fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,$1);
        $$.type = SYM_ERROR;
        $$.place = "error";
    } 
    else {
       if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable %s used before initialization\n", yylineno, $1);
        }
        
        s->used = true;
        
        $$.type = s->type;  
        $$.place = $1;      
    }
} 
| INTEGER {
    $$.type = SYM_INT;
    $$.place = $1;
} 
| FLOAT {
    $$.type = SYM_FLOAT;
    $$.place = $1;
}  
| STRING {
    $$.type = SYM_STRING;
    $$.place = $1;
} 
| BOOLEAN {
    $$.type = SYM_BOOL;
    $$.place = $1;
};

switch_start: SWITCH OPENBRACKET IDENTIFIER CLOSEDBRACKET {
    Symbol* s= lookup($3, current_scope);
    if(!s){
        fprintf(stderr,"Line %d:%s is not declared\n",yylineno, $3);
    } 
    else if (!s->initialized) {
        fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, $3);
    }
    else if (s->type != SYM_INT) {
        fprintf(stderr, "Line %d: Switch variable %s must be integer\n", yylineno, $3);
    }

    if (!current_switch_id) {
        current_switch_id = $3;
        if(s) s->used=true;
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
    CLOSEDBRACE exit_scope  {
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

condition: 
condition AND inner_condition {
    if ($1.type != SYM_BOOL || $3.type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. AND operator requires boolean operands.\n", yylineno);
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else {
        $$.type = SYM_BOOL;
        
        char *t = newTemp();
        emit("and", $1.place, $3.place, t);
        $$.place = t;
    }
}
| condition OR inner_condition {
    if ($1.type != SYM_BOOL || $3.type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. OR operator requires boolean operands.\n", yylineno);
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else {
        $$.type = SYM_BOOL;
        
        char *t = newTemp();
        emit("or", $1.place, $3.place, t);
        $$.place = t;
    }
}
| NOT inner_condition {
    if ($2.type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. NOT operator requires boolean operand.\n", yylineno);
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else {
        $$.type = SYM_BOOL;
        
        char *t = newTemp();
        emit("not", $2.place, "", t);
        $$.place = t;
    }
}
| inner_condition
{
   $$.type = $1.type;
   $$.place = $1.place;
}
| condition AND EXPR {
    if ($1.type == SYM_ERROR || $3.type == SYM_ERROR) {
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else if ($1.type != SYM_BOOL || $3.type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. AND operator requires boolean operands.\n", yylineno);
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else {
        $$.type = SYM_BOOL;
        char *t = newTemp();
        emit("and", $1.place, $3.place, t);
        $$.place = t;
    }
}
| condition OR EXPR {
    if ($1.type == SYM_ERROR || $3.type == SYM_ERROR) {
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else if ($1.type != SYM_BOOL || $3.type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. OR operator requires boolean operands.\n", yylineno);
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else {
        $$.type = SYM_BOOL;
        char *t = newTemp();
        emit("or", $1.place, $3.place, t);
        $$.place = t;
    }
}
| NOT EXPR {
    if ($2.type == SYM_ERROR) {
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else if ($2.type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. NOT operator requires boolean operand.\n", yylineno);
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else {
        $$.type = SYM_BOOL;
        char *t = newTemp();
        emit("not", $2.place, "", t);
        $$.place = t;
    }
}
;

inner_condition: OPENBRACKET condition CLOSEDBRACKET {$$=$2;}
| EXPR GREATERTHAN EXPR {
    if (($1.type == SYM_INT || $1.type == SYM_FLOAT) && 
        ($3.type == SYM_INT || $3.type == SYM_FLOAT)) {
            
        $$.type = SYM_BOOL;
        
        char *t = newTemp();
        emit(">", $1.place, $3.place, t);
        $$.place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to %s\n", 
                yylineno, type_name($1.type), type_name($3.type));
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
}
| EXPR GREATERTHANEQ EXPR {
    if (($1.type == SYM_INT || $1.type == SYM_FLOAT) && 
        ($3.type == SYM_INT || $3.type == SYM_FLOAT)) {
            
        $$.type = SYM_BOOL;
        
        char *t = newTemp();
        emit(">=", $1.place, $3.place, t);
        $$.place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to %s\n", 
                yylineno, type_name($1.type), type_name($3.type));
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
}
| EXPR LESSTHAN EXPR {
    if (($1.type == SYM_INT || $1.type == SYM_FLOAT) && 
        ($3.type == SYM_INT || $3.type == SYM_FLOAT)) {
            
        $$.type = SYM_BOOL;
        
        char *t = newTemp();
        emit("<", $1.place, $3.place, t);
        $$.place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to %s\n", 
                yylineno, type_name($1.type), type_name($3.type));
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
}
| EXPR LESSTHANEQ EXPR {
    if (($1.type == SYM_INT || $1.type == SYM_FLOAT) && 
        ($3.type == SYM_INT || $3.type == SYM_FLOAT)) {
            
        $$.type = SYM_BOOL;
        
        char *t = newTemp();
        emit("<=", $1.place, $3.place, t);
        $$.place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to %s\n", 
                yylineno, type_name($1.type), type_name($3.type));
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
}
| EXPR EQUALITY BOOLEAN {
    if ($1.type == SYM_BOOL) {
        $$.type = SYM_BOOL;
        
        char *t = newTemp();
        emit("==", $1.place, ($3 ? "true" : "false"), t); 
        $$.place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to boolean\n", 
                yylineno, type_name($1.type));
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
}
| EXPR EQUALITY EXPR {
    if ( (($1.type == SYM_INT || $1.type == SYM_FLOAT) && ($3.type == SYM_INT || $3.type == SYM_FLOAT)) ||
         ($1.type == SYM_BOOL && $3.type == SYM_BOOL) ) {
             
        $$.type = SYM_BOOL;
        
        char *t = newTemp();
        emit("==", $1.place, $3.place, t);
        $$.place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to %s\n", 
                yylineno, type_name($1.type), type_name($3.type));
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
}
| EXPR NOTEQUALITY BOOLEAN {
    if ($1.type == SYM_BOOL) {
        $$.type = SYM_BOOL;
        char *t = newTemp();
        emit("!=", $1.place, ($3 ? "true" : "false"), t);
        $$.place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to boolean\n", 
                yylineno, type_name($1.type));
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
}

| EXPR NOTEQUALITY EXPR {
    if ( (($1.type == SYM_INT || $1.type == SYM_FLOAT) && ($3.type == SYM_INT || $3.type == SYM_FLOAT)) ||
         ($1.type == SYM_BOOL && $3.type == SYM_BOOL) ) {
             
        $$.type = SYM_BOOL;
        char *t = newTemp();
        emit("!=", $1.place, $3.place, t);
        $$.place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to %s\n", 
                yylineno, type_name($1.type), type_name($3.type));
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
}
;

assignment:
    IDENTIFIER EQUAL EXPR {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,$1);
            $$.type = SYM_ERROR;
            $$.place = "error";
        } 
        else if (s->kind == SYM_CONST) {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, $1);
            $$.type = SYM_ERROR;
            $$.place = "error";
        }
        else if (!type_compatible(s->type, $3.type)) {
            fprintf(stderr, "Line %d:Type mismatch: cannot assign %s to %s\n", 
                    yylineno, type_name($3.type), type_name(s->type));
            $$.type = SYM_ERROR;
            $$.place = "error";
        } 
        else {
            s->initialized = true;
            
            emit("=", $3.place, "", $1); 
            
            $$.type = s->type;
            $$.place = $1;
        }
    }

  | IDENTIFIER EQUAL STRING {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,$1);
            $$.type = SYM_ERROR;
        } 
        else if (s->kind == SYM_CONST) {
             fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, $1);
             $$.type = SYM_ERROR;
        }
        else if (!type_compatible(s->type, SYM_STRING)) {
            fprintf(stderr, "Line %d:Type mismatch: cannot assign string to %s\n", 
                    yylineno, type_name(s->type));
            $$.type = SYM_ERROR;
        } 
        else {
            s->initialized = true;
            emit("=", $3, "", $1);
            $$.type = s->type;
            $$.place = $1;
        }
    }

  | IDENTIFIER EQUAL condition {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  used before declaration\n",yylineno,$1);
            $$.type = SYM_ERROR;
            $$.place = "error";
        }
        else if (!type_compatible(s->type, $3.type)) {
            fprintf(stderr, "Line %d:Type mismatch: cannot assign %s to %s\n", 
                    yylineno, type_name($3.type), type_name(s->type));
            $$.type = SYM_ERROR;
            $$.place = "error";
        } 
        else {
            s->initialized = true;
            emit("=", $3.place, "", $1);
            $$.place = $1;
        }
    }

  | IDENTIFIER INCREMENT {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
             fprintf(stderr,"Line %d:Variable %s not declared\n",yylineno, $1);
             $$.type = SYM_ERROR;
        }
        else if (!s->initialized) {
             fprintf(stderr,"Line %d:Variable %s used before initialization\n",yylineno, $1);
             $$.type = SYM_ERROR;
        }
        else if (s->kind == SYM_CONST) {
             fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, $1);
             $$.type = SYM_ERROR;
        }
        else if (s->type != SYM_INT && s->type != SYM_FLOAT) {
             fprintf(stderr, "Line %d: Increment applied to non-numeric type %s\n", 
                     yylineno, type_name(s->type));
             $$.type = SYM_ERROR;
        }
        else {
             emit("++", $1, "", $1);
             $$.type = s->type;
             $$.place = $1;
        }
    }

  | IDENTIFIER DECREMENT {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
             fprintf(stderr,"Line %d:Variable %s not declared\n",yylineno, $1);
             $$.type = SYM_ERROR;
        }
        else if (!s->initialized) {
             fprintf(stderr,"Line %d:Variable %s used before initialization\n",yylineno, $1);
             $$.type = SYM_ERROR;
        }
        else if (s->kind == SYM_CONST) {
             fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, $1);
             $$.type = SYM_ERROR;
        }
        else if (s->type != SYM_INT && s->type != SYM_FLOAT) {
             fprintf(stderr, "Line %d: Decrement applied to non-numeric type %s\n", 
                     yylineno, type_name(s->type));
             $$.type = SYM_ERROR;
        }
        else {
             emit("--", $1, "", $1);
             $$.type = s->type;
             $$.place = $1;
        }
    }

  | IDENTIFIER PLUSEQ EXPR {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,$1);
            $$.type = SYM_ERROR;
            $$.place = "error";
        } 
        else if (s->kind == SYM_CONST) {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, $1);
            $$.type = SYM_ERROR;
            $$.place = "error";
        }
        else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ($3.type != SYM_INT && $3.type != SYM_FLOAT)) {
             fprintf(stderr, "Line %d: Addition applied to non-numeric type %s",yylineno, type_name(s->type));
            $$.type = SYM_ERROR;
            $$.place = "error";
        } 
        else {
            emit("+", $1, $3.place, $1); 
            $$.type = s->type;
            $$.place = $1;
        }
       
    }

  | IDENTIFIER MINUSEQ EXPR {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,$1);
            $$.type = SYM_ERROR;
            $$.place = "error";
        } 
        else if (s->kind == SYM_CONST) {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, $1);
            $$.type = SYM_ERROR;
            $$.place = "error";
        }
        else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ($3.type != SYM_INT && $3.type != SYM_FLOAT)) {
             fprintf(stderr, "Line %d: Addition applied to non-numeric type %s",yylineno, type_name(s->type));
            $$.type = SYM_ERROR;
            $$.place = "error";
        } 
        else {
            emit("-", $1, $3.place, $1); 
            $$.type = s->type;
            $$.place = $1;
        }
       
    }

  | IDENTIFIER MULTIPLYEQ EXPR {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,$1);
            $$.type = SYM_ERROR;
            $$.place = "error";
        } 
        else if (s->kind == SYM_CONST) {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, $1);
            $$.type = SYM_ERROR;
            $$.place = "error";
        }
        else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ($3.type != SYM_INT && $3.type != SYM_FLOAT)) {
             fprintf(stderr, "Line %d: Addition applied to non-numeric type %s",yylineno, type_name(s->type));
            $$.type = SYM_ERROR;
            $$.place = "error";
        } 
        else {
            emit("*", $1, $3.place, $1); 
            $$.type = s->type;
            $$.place = $1;
        }
   
    }

  | IDENTIFIER DIVIDEEQ EXPR {
        Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,$1);
            $$.type = SYM_ERROR;
            $$.place = "error";
        } 
        else if (s->kind == SYM_CONST) {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, $1);
            $$.type = SYM_ERROR;
            $$.place = "error";
        }
        else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ($3.type != SYM_INT && $3.type != SYM_FLOAT)) {
             fprintf(stderr, "Line %d: Addition applied to non-numeric type %s",yylineno, type_name(s->type));
            $$.type = SYM_ERROR;
            $$.place = "error";
        } 
        else {
            emit("/", $1, $3.place, $1); 
            $$.type = s->type;
            $$.place = $1;
        }
    }
;

EXPR: EXPR PLUS T {
    /* --- YOUR LOGIC: Type Checking --- */
    if ($1.type == SYM_ERROR || $3.type == SYM_ERROR) {
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else if (($1.type != SYM_INT && $1.type != SYM_FLOAT) || 
             ($3.type != SYM_INT && $3.type != SYM_FLOAT)) {
        fprintf(stderr, "Line %d: Cannot add non-numeric types\n", yylineno);
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else {
        /* Determine Result Type (Float takes precedence) */
        if ($1.type == SYM_FLOAT || $3.type == SYM_FLOAT) 
            $$.type = SYM_FLOAT;
        else 
            $$.type = SYM_INT;

        /* --- HER LOGIC: Code Generation --- */
        char *t = newTemp();
        emit("+", $1.place, $3.place, t);
        $$.place = t;
    }
}
| EXPR MINUS T {
    /* --- YOUR LOGIC: Type Checking --- */
    if ($1.type == SYM_ERROR || $3.type == SYM_ERROR) {
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else if (($1.type != SYM_INT && $1.type != SYM_FLOAT) || 
             ($3.type != SYM_INT && $3.type != SYM_FLOAT)) {
        fprintf(stderr, "Line %d: Cannot subtract non-numeric types\n", yylineno);
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else {
        /* Determine Result Type (Float takes precedence) */
        if ($1.type == SYM_FLOAT || $3.type == SYM_FLOAT) 
            $$.type = SYM_FLOAT;
        else 
            $$.type = SYM_INT;

        /* --- HER LOGIC: Code Generation --- */
        char *t = newTemp();
        emit("-", $1.place, $3.place, t);
        $$.place = t;
    }
}
| T { 
    /* Pass through both fields */
    $$.type = $1.type;
    $$.place = $1.place;
}
;

T:T MULTIPLY M {
    if ($1.type == SYM_ERROR || $3.type == SYM_ERROR) {
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else if (($1.type != SYM_INT && $1.type != SYM_FLOAT) || 
             ($3.type != SYM_INT && $3.type != SYM_FLOAT)) {
        fprintf(stderr, "Line %d: Cannot multiply non-numeric types\n", yylineno);
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else {
        if ($1.type == SYM_FLOAT || $3.type == SYM_FLOAT) 
            $$.type = SYM_FLOAT;
        else 
            $$.type = SYM_INT;

        char *t = newTemp();
        emit("*", $1.place, $3.place, t);
        $$.place = t;
    }
}
|T DIVIDE M {
    if ($1.type == SYM_ERROR || $3.type == SYM_ERROR) {
        $$.type = SYM_ERROR; 
        $$.place = "error";
    }
    else {
        if ($1.type == SYM_FLOAT || $3.type == SYM_FLOAT) 
            $$.type = SYM_FLOAT;
        else 
            $$.type = SYM_INT;

        char *t = newTemp();
        emit("/", $1.place, $3.place, t);
        $$.place = t;
    }
}
| T MOD M      {
    if ($1.type == SYM_ERROR || $3.type == SYM_ERROR) {
        $$.type = SYM_ERROR; 
        $$.place = "error";
    }
    else {
        if ($1.type == SYM_FLOAT || $3.type == SYM_FLOAT) 
            $$.type = SYM_FLOAT;
        else 
            $$.type = SYM_INT;

        char *t = newTemp();
        emit("%%", $1.place, $3.place, t);
        $$.place = t;
    }
}
| M { $$.type = $1.type;
    $$.place = $1.place;}
;

M: G POWER M {
    if ($1.type == SYM_ERROR || $3.type == SYM_ERROR) {
        $$.type = SYM_ERROR; 
        $$.place = "error";
    }
    else {
        if ($1.type == SYM_FLOAT || $3.type == SYM_FLOAT) 
            $$.type = SYM_FLOAT;
        else 
            $$.type = SYM_INT;

        char *t = newTemp();
        emit("^", $1.place, $3.place, t);
        $$.place = t;
    }
}
|  G   { $$.type = $1.type;
    $$.place = $1.place;}
;

G: OPENBRACKET EXPR CLOSEDBRACKET { 
    $$ = $2; 
}
| MINUS G {
    if ($2.type == SYM_ERROR) {
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else if ($2.type == SYM_INT || $2.type == SYM_FLOAT) {
    
        $$.type = $2.type;
        
        char *t = newTemp();
        emit("negative", $2.place, "", t);
        $$.place = t;
    }
    else {
        fprintf(stderr, "Line %d: Unary minus applied to non-numeric type %s\n", 
                yylineno, type_name($2.type));
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
}
| INTEGER { 
    $$.type = SYM_INT;    
    $$.place = $1;        
}
| FLOAT { 
    $$.type = SYM_FLOAT; 
    $$.place = $1;        
}
| IDENTIFIER { 
    Symbol* s = lookup($1, current_scope);
    
    if (!s) {
        fprintf(stderr,"Line %d:Variable %s not declared\n", yylineno, $1);
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    // else if (s->type != SYM_INT && s->type != SYM_FLOAT && s->type != SYM_BOOL) {
    //     fprintf(stderr, "Line %d: Unsupported type in expression: %s\n", yylineno, $1);
    //     $$.type = SYM_ERROR;
    //     $$.place = "error";
    // }
    else {
        if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable %s used before initialization\n", yylineno, $1);
        }
        
        s->used = true;
        
        $$.type = s->type;  
        $$.place = $1;      
    }
}
| function_call {
    if ($1.type == SYM_VOID) {
        fprintf(stderr, "Line %d: Void function used in expression\n", yylineno);
        $$.type = SYM_ERROR;
        $$.place = "error";
    }
    else {
        $$.type = $1.type;
        $$.place = $1.place;
    }
}
;
enter_scope:
{
    current_scope = create_table(211, current_scope);
    all_scopes[scope_count++]= current_scope;
};

exit_scope:
    {
        // SymbolTable* old = current_scope;
        // print_table(current_scope);
        report_unused(current_scope);
        // printf("_____________________________ \n");
        current_scope = current_scope->parent;
        //free_table(old);
    }
;

%%

    /* Subroutines */
    void yyerror(const char *s)
{
    extern char *yytext; // Current token text
    fprintf(stderr, "Line %d:Syntax error at '%s': %s\n", yylineno, yytext, s);
}
void report_unused(SymbolTable *table)
{
    for (int i = 0; i < table->size; i++)
    {
        Symbol *s = table->table[i];
        while (s)
        {
            if (!s->used && s->kind == VAR)
            {
                printf("Warning: variable '%s' declared but not used\n", s->name);
            }
            s = s->next;
        }
    }
}
const char* type_to_string(DATATYPE t) {
    switch(t) {
        case SYM_INT: return "int";
        case SYM_FLOAT: return "float";
        case SYM_BOOL: return "bool";
        case SYM_STRING: return "string";
        case SYM_VOID: return "void";
        default: return "unknown";
    }
}

const char* kind_to_string(KIND k) {
    switch(k) {
        case VAR: return "VAR";
        case FUNC: return "FUNC";
        case SYM_CONST: return "CONST";
        default: return "unknown";
    }
}

void print_all_scopes(FILE* out) {
    for (int s = 0; s < scope_count; s++) {
        SymbolTable* table = all_scopes[s];

        fprintf(out, "\nSCOPE %d\n", s);
        fprintf(out, "--------------------------------\n");
        fprintf(out, "Name\tKind\tType\tInit\tUsed\n");

        for (int i = 0; i < table->size; i++) {
            Symbol* sym = table->table[i];
            while (sym) {
                fprintf(out, "%s\t%s\t%s\t%s\t%s\n",
                    sym->name,
                    kind_to_string(sym->kind),
                    type_to_string(sym->type),
                    sym->initialized ? "yes" : "no",
                    sym->used ? "yes" : "no"
                );
                sym = sym->next;
            }
        }
    }
}

void free_all_tables() {
    for (int i = 0; i < scope_count; i++) {
        free_table(all_scopes[i]);
    }
}

int main(int argc, char **argv)
{
    current_scope = create_table(211, NULL);
    all_scopes[scope_count++] = current_scope;
    initQuadTable();

    if (argc < 2) {
        fprintf(stderr, "No input file provided\n");
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Error opening file");
        return 1;
    }

    if (yyparse() == 0) {
        printf("===== SYMBOL TABLE =====\n");
        print_all_scopes(stdout);

        printf("===== QUADRUPLES =====\n");
        printQuadruples();
        return 0;
    }

    fclose(yyin);
    free_all_tables();
    return 1;
}
