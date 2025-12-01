
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MINUS = 258,
     PLUS = 259,
     MULTIPLY = 260,
     DIVIDE = 261,
     OPENBRACKET = 262,
     CLOSEDBRACKET = 263,
     INTEGER = 264,
     STRING = 265,
     FLOAT = 266,
     BOOLEAN = 267,
     OPENBRACE = 268,
     CLOSEDBRACE = 269,
     SEMICOLON = 270,
     MOD = 271,
     POWER = 272,
     ASSIGN = 273,
     OPENSQUARE = 274,
     CLOSESQUARE = 275,
     COMMA = 276,
     BOOLTYPE = 277,
     INTTYPE = 278,
     FLOATTYPE = 279,
     STRINGTYPE = 280,
     IDENTIFIER = 281,
     GREATERTHANEQ = 282,
     LESSTHAN = 283,
     GREATERTHAN = 284,
     LESSTHANEQ = 285,
     EQUALITY = 286,
     NOTEQUALITY = 287,
     INCREMENT = 288,
     DECREMENT = 289,
     EQUAL = 290,
     MINUSEQ = 291,
     PLUSEQ = 292,
     MULTIPLYEQ = 293,
     DIVIDEEQ = 294,
     AND = 295,
     OR = 296,
     NOT = 297,
     CONST = 298,
     IF = 299,
     ELSE = 300,
     DOT = 301,
     FOR = 302,
     TO = 303,
     REPEAT = 304,
     UNTIL = 305,
     BREAK = 306,
     CONTINUE = 307,
     WHILE = 308,
     SWITCH = 309,
     CASE = 310,
     DEFAULT = 311,
     RETURN = 312,
     VOIDTYPE = 313
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 12 "Parser.y"

    int i;
    float f;
    char * str;
    _Bool b;



/* Line 1676 of yacc.c  */
#line 119 "Parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


