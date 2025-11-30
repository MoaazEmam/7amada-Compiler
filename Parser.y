/* Definitions */
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    void yyerror(const char *s);
    int yylex(void);
    
%}

%union {
    int i;
    float f;
    char c;
    char * str;
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
%token OPENBRACE
%token CLOSEDBRACE
%token SEMICOLON
%token MOD
%token POWER
%token ASSIGN   
%token <c> CHAR
%type<f> S MATHEXPR T G M
/* Production Rules */
%%
S: MATHEXPR { printf("Result: %.2f\n", $1); }
   ;
MATHEXPR: MATHEXPR PLUS T {$$=$1+$3;}
| MATHEXPR MINUS T {$$=$1-$3;}
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
G: OPENBRACKET MATHEXPR CLOSEDBRACKET {$$=$2;}
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