/* Definitions */
%{
    #include <stdio.h>
    #include <stdlib.h>

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
%token ASSIGN   
%token <c> CHAR
%type<i> S E T G
/* Production Rules */
%%
S: E { printf("Result: %d\n", $1); }
   ;
E: E PLUS T {$$=$1+$3;}
| E MINUS T {$$=$1-$3;}
| T {$$=$1;}
;
T: T MULTIPLY G {$$=$1*$3;}
| T DIVIDE G    {if($3==0){yyerror("Division By zero");}$$=$1/$3;}
| G {$$=$1;}
;
G: OPENBRACKET E CLOSEDBRACKET {$$=$2;}
|  MINUS G  {$$=-$2;}
|  INTEGER {$$=$1;}
%%

/* Subroutines */
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
int main(void) {
    return yyparse();
}