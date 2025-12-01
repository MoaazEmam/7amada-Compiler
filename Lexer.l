%{
    #include<stdio.h>
    #include<stdlib.h>
    #include <string.h>
    #include <stdbool.h>
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
"true"     { yylval.b = true; return BOOLEAN; }
"false"    { yylval.b = false; return BOOLEAN; }
"["          {return OPENSQUARE;}
"]"          {return CLOSESQUARE;}
","          {return COMMA;}
"bool"     {return BOOLTYPE;}
"int"      {return INTTYPE;}
"float"    {return FLOATTYPE;}
"walahaga"     {return VOIDTYPE;}
"string"   {return STRINGTYPE;}
"3alawad3o" {return CONST;}
[a-zA-Z_][a-zA-Z0-9_]*  {yylval.str = strdup(yytext); return IDENTIFIER;}
">"          {return GREATERTHAN;}
"<"          {return LESSTHAN;}
">="         {return GREATERTHANEQ;}
"<="         {return LESSTHANEQ;}
"=="         {return EQUALITY;}
"!="         {return NOTEQUALITY;}
"++"         {return INCREMENT;}
"--"         {return DECREMENT;}
"="         {return EQUAL;}
"-="        {return MINUSEQ;}
"+="        {return PLUSEQ;}
"*="        {return MULTIPLYEQ;}
"/="        {return DIVIDEEQ;}
"and"       {return AND;}
"or"         {return OR;}
"not"      {return NOT;}
"law"        {return IF;}
"tayeb"      {return ELSE;}
"."       {return DOT;}
"karar"     {return FOR;}
"to"        {return TO;}
"e3mel"      {return REPEAT;}
"lehad"      {return UNTIL;}
"kefaya_3aleek"      {return BREAK;}
"ely_ba3do"  {return CONTINUE;} 
"tol_ma"    {return WHILE;}
"switch"    {return SWITCH;}
"case"      {return CASE;}
"default"   {return DEFAULT;}
"raga3"     {return RETURN;}


%%

int yywrap(){
    return 1;
}