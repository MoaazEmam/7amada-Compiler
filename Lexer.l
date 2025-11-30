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
"^"          {return POWER;}
"%"         {return MOD;}
[\t\n ]      {/* ignore comments*/}
([1-9]+[0-9]*|0)\.[0-9]+  {yylval.f = atof(yytext); return FLOAT;}
%%

int yywrap(){
    return 1;
}