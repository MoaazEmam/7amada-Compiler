/* Definitions */
%{
    #include <stdio.h>
    #include <stdlib.h>

    void yyerror(const char *s);
    int yylex(void);
    //extern FILE *yyin;
%}

%union {
    int i;
}
%token <i> NUMBER
%token <str> STRING




/* Production Rules */
%%

%%

/* Subroutines */
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
int main(void) {
    return yyparse();
}