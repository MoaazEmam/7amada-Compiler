%verbose
/* Definitions */
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include<stdbool.h>
    void yyerror(const char *s);
    int yylex(void);
    extern FILE *yyin;
    
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
%token<b> BOOLEAN
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

Ifstmt: IF OPENBRACKET condition CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE ELSE Ifstmt
| IF OPENBRACKET condition CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE
| IF OPENBRACKET condition CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE ELSE OPENBRACE code DOT CLOSEDBRACE
;
repeat: REPEAT OPENBRACE inner_loop CLOSEDBRACE UNTIL OPENBRACKET condition CLOSEDBRACKET;
inner_loop:code DOT  BREAK DOT code DOT
| code DOT BREAK DOT
| code DOT
;

forloop: FOR OPENBRACKET iterator COMMA assignment CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE;
iterator: INTTYPE IDENTIFIER EQUAL EXPR TO EXPR
| IDENTIFIER EQUAL EXPR TO EXPR
;
inner_declaration: IDENTIFIER 
| IDENTIFIER EQUAL EXPR
| IDENTIFIER EQUAL BOOLEAN
| IDENTIFIER EQUAL STRING
| IDENTIFIER EQUAL condition
;
whileloop: WHILE OPENBRACKET condition CLOSEDBRACKET OPENBRACE inner_loop CLOSEDBRACE;

parameters: datatype IDENTIFIER
| datatype IDENTIFIER COMMA parameters
;

function: datatype IDENTIFIER OPENBRACKET parameters CLOSEDBRACKET OPENBRACE code DOT RETURN EXPR DOT CLOSEDBRACE
| VOIDTYPE IDENTIFIER OPENBRACKET parameters CLOSEDBRACKET OPENBRACE code DOT RETURN DOT CLOSEDBRACE
;

function_call: IDENTIFIER OPENBRACKET list CLOSEDBRACKET;
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
| function_call
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
G: OPENBRACKET EXPR CLOSEDBRACKET {$$=$2;}
|  MINUS G  {$$=-$2;}
|  INTEGER {$$=(float)$1;}
|  FLOAT {$$=$1;}
|  IDENTIFIER {$$=0;}  /* Placeholder for variable value */
;
%%

/* Subroutines */
void yyerror(const char *s) {
    extern char *yytext;  // Current token text
    fprintf(stderr, "Syntax error at '%s': %s\n", yytext, s);
}
int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("Error opening file");
            return 1;
        }
    }

    if (yyparse() == 0) {
        return 0;
    }
    return 1;
}