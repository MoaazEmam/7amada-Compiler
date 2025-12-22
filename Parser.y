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
#define MAX_SCOPES 1000;
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
%type<f>  EXPR T G M
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
| RETURN
| BREAK
;
datatype: BOOLTYPE
|INTTYPE
|FLOATTYPE
|STRINGTYPE
;

const_type: datatype CONST;
declaration: datatype inner_declaration 
| const_type inner_declaration
;

inner_declaration: IDENTIFIER 
| IDENTIFIER EQUAL EXPR
| IDENTIFIER EQUAL BOOLEAN
| IDENTIFIER EQUAL STRING
| IDENTIFIER EQUAL condition
;

Ifstmt: IF OPENBRACKET condition CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE ELSE Ifstmt
| IF OPENBRACKET condition CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE
| IF OPENBRACKET condition CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE ELSE OPENBRACE code DOT CLOSEDBRACE
;
repeat: REPEAT OPENBRACE code DOT CLOSEDBRACE UNTIL OPENBRACKET condition CLOSEDBRACKET;

forloop: FOR OPENBRACKET iterator COMMA assignment CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE;
iterator: INTTYPE IDENTIFIER EQUAL EXPR TO EXPR
| IDENTIFIER EQUAL EXPR TO EXPR
;

whileloop: WHILE OPENBRACKET condition CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE;

parameters: datatype IDENTIFIER
| datatype IDENTIFIER COMMA parameters
;

function: datatype IDENTIFIER OPENBRACKET parameters CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE
| VOIDTYPE IDENTIFIER OPENBRACKET parameters CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE
| datatype IDENTIFIER OPENBRACKET  CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE
| VOIDTYPE IDENTIFIER OPENBRACKET  CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE
;

function_call: IDENTIFIER OPENBRACKET list CLOSEDBRACKET | IDENTIFIER OPENBRACKET CLOSEDBRACKET;
list: EXPR | EXPR COMMA list;
switchstmt: SWITCH OPENBRACKET IDENTIFIER CLOSEDBRACKET OPENBRACE case_structure DEFAULT OPENBRACE code DOT CLOSEDBRACE CLOSEDBRACE
| SWITCH OPENBRACKET IDENTIFIER CLOSEDBRACKET OPENBRACE case_structure CLOSEDBRACE;
case_structure: inner_case | inner_case case_structure;
inner_case: CASE OPENBRACKET INTEGER CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE
;

condition: condition AND inner_condition 
| condition OR inner_condition
| NOT inner_condition
| inner_condition
| condition AND EXPR
| condition OR EXPR
| NOT EXPR
;

inner_condition: OPENBRACKET condition CLOSEDBRACKET
| EXPR GREATERTHAN EXPR
| EXPR GREATERTHANEQ EXPR
| EXPR LESSTHAN EXPR
| EXPR LESSTHANEQ EXPR
| EXPR EQUALITY BOOLEAN
| EXPR EQUALITY EXPR
| EXPR NOTEQUALITY BOOLEAN
| EXPR NOTEQUALITY EXPR
;
assignment:IDENTIFIER EQUAL EXPR
|IDENTIFIER EQUAL STRING
|IDENTIFIER EQUAL condition
|IDENTIFIER INCREMENT
|IDENTIFIER DECREMENT
|IDENTIFIER PLUSEQ EXPR
|IDENTIFIER MINUSEQ EXPR
|IDENTIFIER MULTIPLYEQ EXPR
|IDENTIFIER DIVIDEEQ EXPR
;
EXPR: EXPR PLUS T {$$=$1+$3;}
| EXPR MINUS T {$$=$1-$3;}
| T {$$=$1;}
;
T:T MULTIPLY M {$$=$1*$3;}
| T DIVIDE M    {if($3==0){yyerror("Division By zero");}else $$=$1/$3;}
| T MOD M      {if((int)$3==0){yyerror("Modulo By zero");}else $$=(int)$1 % (int)$3;}
| M {$$=$1;}
;
M: G POWER M {$$=pow($1,$3);}
|  G   {$$=$1;}
;

G: OPENBRACKET EXPR CLOSEDBRACKET { 
    /* Pass through both Type and Place from the inner expression */
    $$ = $2; 
}
| MINUS G {
    /* --- YOUR LOGIC: Type Checking --- */
    if ($2.type == SYM_ERROR) {
        $$.type = SYM_ERROR;
        $$.place = NULL;
    }
    else if ($2.type == SYM_INT || $2.type == SYM_FLOAT) {
        /* Valid numeric type, propagate the type up */
        $$.type = $2.type;
        
        /* --- HER LOGIC: Code Generation --- */
        char *t = newTemp();
        emit("negative", $2.place, "", t);
        $$.place = t;
    }
    else {
        fprintf(stderr, "Line %d: Unary minus applied to non-numeric type %s\n", 
                yylineno, type_name($2.type));
        $$.type = SYM_ERROR;
        $$.place = NULL;
    }
}
| INTEGER { 
    $$.type = SYM_INT;    // For your Type Checking
    $$.place = $1;        // For her Code Gen (The string value "5", "10", etc.)
}
| FLOAT { 
    $$.type = SYM_FLOAT;  // For your Type Checking
    $$.place = $1;        // For her Code Gen (The string value "3.14", etc.)
}
| IDENTIFIER { 
    Symbol* s = lookup($1, current_scope);
    
    /* --- YOUR LOGIC: Type Checking --- */
    if (!s) {
        fprintf(stderr,"Line %d:Variable %s not declared\n", yylineno, $1);
        $$.type = SYM_ERROR;
        $$.place = NULL;
    }
    else if (s->type != SYM_INT && s->type != SYM_FLOAT && s->type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Unsupported type in expression: %s\n", yylineno, $1);
        $$.type = SYM_ERROR;
        $$.place = NULL;
    }
    else {
        if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable %s used before initialization\n", yylineno, $1);
            // Note: We flag the error but usually continue to avoid cascading errors, 
            // or you can set SYM_ERROR here if you want to stop compilation.
            // For now, I will allow it to proceed with code gen to catch other errors:
        }
        
        s->used = true;
        
        /* --- MERGED OUTPUT --- */
        $$.type = s->type;  // Pass the type up
        $$.place = $1;      // Pass the variable name ("x", "count") up
    }
}
| function_call {
    /* --- YOUR LOGIC: Type Checking --- */
    if ($1.type == SYM_VOID) {
        fprintf(stderr, "Line %d: Void function used in expression\n", yylineno);
        $$.type = SYM_ERROR;
        $$.place = NULL;
    }
    else {
        /* Pass through the result from function_call */
        $$.type = $1.type;
        $$.place = $1.place;
    }
}
;
enter_scope:
{
    current_scope = create_table(211, current_scope);
    all_scopes[scope_count++]=current_scope;
};

exit_scope:
    {
        SymbolTable* old = current_scope;
        //print_table(current_scope);
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
    fprintf(stderr, "Syntax error at '%s': %s\n", yytext, s);
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
         printf("\n===== unused =====\n");
        report_unused(current_scope);
        //print_table(current_scope);
        printf("\n===== SYMBOL TABLE =====\n");
        print_all_scopes(stdout);

        printf("\n===== QUADRUPLES =====\n");
        printQuadruples();
       
        free_all_tables();
        return 0;
    }
    return 1;
}