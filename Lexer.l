%{
    #include<stdio.h>
    #include<stdlib.h>
    #include "Parser.tab.h"
%}
/* Regex Rules*/
%%
[0-9]+      {yylval.i = atoi(yytext); return INTEGER;}
"("          {return OPENBRACKET;}
")"          {return CLOSEDBRACKET;}
"{"          {return OPENBRACE;}
"}"          {return CLOSEDBRACE;}
";"          {return SEMICOLON;}
"="          {return ASSIGN;}
"-"          {return MINUS;}
"+"          {return PLUS;}
"*"          {return MULTIPLY;}
"/"          {return DIVIDE;}
[\t\n ]      {/* ignore comments*/}
%%

int yywrap(){
    return 1;
}