/* Definitions */
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include<stdbool.h>
    void yyerror(const char *s);
    int yylex(void);
    
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
%token ASSIGN
%token OPENSQUARE
%token CLOSESQUARE
%token COMMA   
%token BOOLTYPE
%token INTTYPE
%token FLOATTYPE
%token STRINGTYPE
%token IDENTIFIER
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
Start:code;
code: inner_code | inner_code DOT code ;
inner_code: assignment
| declaration
| Ifstmt
|whileloop
|switchstmt
|function_call
;
datatype: BOOLTYPE
|INTTYPE
|FLOATTYPE
|VOIDTYPE
|STRINGTYPE
;

const_value:INTEGER|BOOLEAN|FLOAT|STRING;
const_type: datatype CONST;
declaration: datatype inner_declaration 
| const_type inner_declaration
;

Ifstmt: IF OPENBRACKET condition CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE ELSE IF OPENBRACE code DOT CLOSEDBRACE ELSE OPENBRACE code DOT CLOSEDBRACE
| IF OPENBRACKET condition CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE
| IF OPENBRACKET condition CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE ELSE IF OPENBRACKET condition CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE
| IF OPENBRACKET condition CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE ELSE OPENBRACE code DOT CLOSEDBRACE
;
repeat: REPEAT OPENBRACE inner_loop CLOSEDBRACE UNTIL OPENBRACKET condition CLOSEDBRACKET;
inner_loop:code DOT  BREAK DOT code DOT|
code DOT
;
forloop: FOR OPENBRACKET iterator COMMA assignment CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE;
iterator: INTTYPE IDENTIFIER EQUAL EXPR TO EXPR
| IDENTIFIER EQUAL EXPR TO EXPR
;
inner_declaration: IDENTIFIER 
| IDENTIFIER  EQUAL IDENTIFIER
| IDENTIFIER EQUAL EXPR
| IDENTIFIER EQUAL const_value
;
whileloop: WHILE OPENBRACKET EXPR CLOSEDBRACKET OPENBRACE inner_loop CLOSEDBRACE;

parameters: datatype IDENTIFIER
| datatype IDENTIFIER COMMA parameters
;

function: datatype IDENTIFIER OPENBRACKET parameters CLOSEDBRACKET OPENBRACE code DOT RETURN EXPR DOT | RETURN EXPR DOT code DOT | code DOT RETURN EXPR DOT code DOT
CLOSEDBRACE
|
VOIDTYPE IDENTIFIER OPENBRACKET parameters CLOSEDBRACKET OPENBRACE code DOT RETURN  DOT | RETURN  DOT code DOT | code DOT RETURN DOT code DOT CLOSEDBRACE
;

function_call: IDENTIFIER OPENBRACKET list CLOSEDBRACKET;
list: EXPR | EXPR COMMA list;
switchstmt: SWITCH OPENBRACKET IDENTIFIER CLOSEDBRACKET OPENBRACE case_structure DEFAULT OPENBRACE code DOT CLOSEDBRACE CLOSEDBRACE;
case_structure: inner_case | inner_case DOT case_structure
inner_case: CASE OPENBRACKET const_value CLOSEDBRACKET OPENBRACE code DOT CLOSEDBRACE
condition: condition AND inner_condition 
| condition OR inner_condition
| NOT inner_condition|inner_condition
;

inner_condition: OPENBRACKET condition CLOSEDBRACKET
| EXPR GREATERTHAN EXPR
| EXPR GREATERTHANEQ EXPR
| EXPR LESSTHAN EXPR
| EXPR LESSTHANEQ EXPR
| EXPR EQUALITY EXPR
| EXPR NOTEQUALITY EXPR
|function_call
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
|IDENTIFIER EQUAL function_call
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
%%

/* Subroutines */
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
int main(void) {
    return yyparse();
}