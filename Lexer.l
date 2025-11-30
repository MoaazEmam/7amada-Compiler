%{
    #include<stdio.h>
    #include<stdlib.h>
    #include "Parser.tab.h"
%}
/* Regex Rules*/
%%
[0-9]+      {yyval.ival = atoi(yytext); return INTEGER;}
[()]    {return yytext[0];}
"-"          {return MINUS;}
"+"          {return PLUS;}
"*"          {return MULTIPLY;}
"/"          {return DIVIDE;}
[\t\n]      {/* ignore comments*/}
%%

int yywrap(){
    return 1;
}