%{
    #include<stdio.h>
    #include<stdlib.h>
    #include <string.h>
    #include <stdbool.h>
    #include "Parser.tab.h"
%}
%option yylineno
%%
[1-9]+[0-9]*|0     { yylval.str = strdup(yytext); return INTEGER; }
([1-9]+[0-9]*|0)\.[0-9]+  {yylval.str = strdup(yytext); return FLOAT;}
"true"     { yylval.str = strdup(yytext); return BOOLEAN; }
"false"    { yylval.str = strdup(yytext); return BOOLEAN; }
\"[^\"]*\"    { yylval.str = yytext; return STRING;}  
">="         {return GREATERTHANEQ;}
"<="         {return LESSTHANEQ;}
"=="         {return EQUALITY;}
"!="         {return NOTEQUALITY;}
"++"         {return INCREMENT;}
"--"         {return DECREMENT;}
"-="        {return MINUSEQ;}
"+="        {return PLUSEQ;}
"*="        {return MULTIPLYEQ;}
"/="        {return DIVIDEEQ;}

"bool"     {return BOOLTYPE;}
"int"      {return INTTYPE;}
"float"    {return FLOATTYPE;}
"wala_haga"     {return VOIDTYPE;}
"string"   {return STRINGTYPE;}
"3ala_wad3o" {return CONST;}
"law"        {return IF;}
"tayeb"      {return ELSE;}
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
"and"       {return AND;}
"or"         {return OR;}
"not"      {return NOT;}

[a-zA-Z_][a-zA-Z0-9_]*  {yylval.str = strdup(yytext); return IDENTIFIER;}

"("          {return OPENBRACKET;}
")"          {return CLOSEDBRACKET;}
"{"          {return OPENBRACE;}
"}"          {return CLOSEDBRACE;}
"["          {return OPENSQUARE;}
"]"          {return CLOSESQUARE;}
";"          {return SEMICOLON;}
","          {return COMMA;}
"."       {return DOT;}
"="          {return EQUAL;}
"-"          {return MINUS;}
"+"          {return PLUS;}
"*"          {return MULTIPLY;}
"/"          {return DIVIDE;}
"^"          {return POWER;}
"%"         {return MOD;}
">"          {return GREATERTHAN;}
"<"          {return LESSTHAN;}

[\t ]+       ;      // ignore spaces and tabs
\n           ;      // newline (Flex auto increments yylineno)

%%
int yywrap(){
    return 1;
}