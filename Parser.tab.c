
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "Parser.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include<stdbool.h>
    extern int yylineno;
    #include "symbol_table.h"
    #include "symbol.h"
    #include "param.h"
    #include "enums_def.h"
    #include "quadruple.h"
    void yyerror(const char *s);
    void report_unused(SymbolTable* table);
    int yylex(void);
    extern FILE *yyin;
    SymbolTable* current_scope;
    Symbol* current_function = NULL; 
    DATATYPE current_type;    
    KIND current_kind;


/* Line 189 of yacc.c  */
#line 95 "Parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* "%code requires" blocks.  */

/* Line 209 of yacc.c  */
#line 24 "Parser.y"

    #include "quadruple.h"



/* Line 209 of yacc.c  */
#line 125 "Parser.tab.c"

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
     OPENSQUARE = 273,
     CLOSESQUARE = 274,
     COMMA = 275,
     BOOLTYPE = 276,
     INTTYPE = 277,
     FLOATTYPE = 278,
     STRINGTYPE = 279,
     IDENTIFIER = 280,
     GREATERTHANEQ = 281,
     LESSTHAN = 282,
     GREATERTHAN = 283,
     LESSTHANEQ = 284,
     EQUALITY = 285,
     NOTEQUALITY = 286,
     INCREMENT = 287,
     DECREMENT = 288,
     EQUAL = 289,
     MINUSEQ = 290,
     PLUSEQ = 291,
     MULTIPLYEQ = 292,
     DIVIDEEQ = 293,
     AND = 294,
     OR = 295,
     NOT = 296,
     CONST = 297,
     IF = 298,
     ELSE = 299,
     DOT = 300,
     FOR = 301,
     TO = 302,
     REPEAT = 303,
     UNTIL = 304,
     BREAK = 305,
     CONTINUE = 306,
     WHILE = 307,
     SWITCH = 308,
     CASE = 309,
     DEFAULT = 310,
     RETURN = 311,
     VOIDTYPE = 312
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 27 "Parser.y"

    int i;
    float f;
    char * str;
    _Bool b;
    Quadruple q;



/* Line 214 of yacc.c  */
#line 209 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 221 "Parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   514

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNRULES -- Number of states.  */
#define YYNSTATES  235

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    14,    16,    18,    20,
      22,    24,    26,    28,    30,    32,    35,    37,    39,    41,
      43,    45,    47,    50,    53,    56,    58,    62,    66,    70,
      74,    79,    80,    90,    98,    99,   103,   112,   113,   126,
     127,   141,   148,   154,   159,   167,   170,   175,   179,   183,
     193,   202,   207,   211,   213,   217,   234,   244,   246,   249,
     260,   264,   268,   271,   273,   277,   281,   284,   288,   292,
     296,   300,   304,   308,   312,   316,   320,   324,   328,   332,
     335,   338,   342,   346,   350,   354,   358,   362,   364,   368,
     372,   376,   378,   382,   384,   388,   391,   393,   395,   397,
     399,   400
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    61,    45,    -1,    62,    -1,
      61,    45,    62,    -1,    89,    -1,    65,    -1,    68,    -1,
      78,    -1,    84,    -1,    82,    -1,    75,    -1,    73,    -1,
      81,    -1,    56,    90,    -1,    56,    -1,    50,    -1,    22,
      -1,    23,    -1,    21,    -1,    24,    -1,    63,    42,    -1,
      63,    66,    -1,    64,    66,    -1,    25,    -1,    25,    34,
      90,    -1,    25,    34,    12,    -1,    25,    34,    10,    -1,
      25,    34,    87,    -1,    43,     7,    87,     8,    -1,    -1,
      67,    13,    94,    61,    45,    14,    95,    69,    71,    -1,
      67,    13,    94,    61,    45,    14,    95,    -1,    -1,    44,
      70,    68,    -1,    44,    70,    13,    94,    61,    45,    14,
      95,    -1,    -1,    48,    13,    94,    72,    61,    45,    14,
      95,    49,     7,    87,     8,    -1,    -1,    46,     7,    94,
      76,    20,    89,     8,    74,    13,    61,    45,    14,    95,
      -1,    22,    25,    34,    90,    47,    90,    -1,    25,    34,
      90,    47,    90,    -1,    52,     7,    87,     8,    -1,    77,
      13,    94,    61,    45,    14,    95,    -1,    63,    25,    -1,
      63,    25,    20,    79,    -1,    63,    25,     7,    -1,    57,
      25,     7,    -1,    80,    94,    79,     8,    13,    61,    45,
      14,    95,    -1,    80,     8,    13,    94,    61,    45,    14,
      95,    -1,    25,     7,    83,     8,    -1,    25,     7,     8,
      -1,    90,    -1,    90,    20,    83,    -1,    53,     7,    25,
       8,    13,    94,    85,    55,    13,    94,    61,    45,    14,
      95,    14,    95,    -1,    53,     7,    25,     8,    13,    94,
      85,    14,    95,    -1,    86,    -1,    86,    85,    -1,    54,
       7,     9,     8,    13,    94,    61,    45,    14,    95,    -1,
      87,    39,    88,    -1,    87,    40,    88,    -1,    41,    88,
      -1,    88,    -1,    87,    39,    90,    -1,    87,    40,    90,
      -1,    41,    90,    -1,     7,    87,     8,    -1,    90,    28,
      90,    -1,    90,    26,    90,    -1,    90,    27,    90,    -1,
      90,    29,    90,    -1,    90,    30,    12,    -1,    90,    30,
      90,    -1,    90,    31,    12,    -1,    90,    31,    90,    -1,
      25,    34,    90,    -1,    25,    34,    10,    -1,    25,    34,
      87,    -1,    25,    32,    -1,    25,    33,    -1,    25,    36,
      90,    -1,    25,    35,    90,    -1,    25,    37,    90,    -1,
      25,    38,    90,    -1,    90,     4,    91,    -1,    90,     3,
      91,    -1,    91,    -1,    91,     5,    92,    -1,    91,     6,
      92,    -1,    91,    16,    92,    -1,    92,    -1,    93,    17,
      92,    -1,    93,    -1,     7,    90,     8,    -1,     3,    93,
      -1,     9,    -1,    11,    -1,    25,    -1,    82,    -1,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,    98,   100,   101,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   118,   119,
     120,   121,   127,   139,   143,   148,   156,   166,   175,   184,
     195,   206,   202,   211,   221,   227,   231,   239,   244,   253,
     257,   271,   287,   305,   311,   324,   335,   348,   359,   371,
     377,   384,   405,   427,   429,   434,   447,   460,   460,   463,
     469,   475,   481,   487,   491,   497,   503,   511,   512,   518,
     524,   530,   536,   542,   548,   554,   563,   575,   587,   599,
     615,   631,   648,   665,   682,   699,   704,   709,   712,   717,
     722,   727,   730,   735,   738,   739,   744,   745,   746,   760,
     764,   770
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MINUS", "PLUS", "MULTIPLY", "DIVIDE",
  "OPENBRACKET", "CLOSEDBRACKET", "INTEGER", "STRING", "FLOAT", "BOOLEAN",
  "OPENBRACE", "CLOSEDBRACE", "SEMICOLON", "MOD", "POWER", "OPENSQUARE",
  "CLOSESQUARE", "COMMA", "BOOLTYPE", "INTTYPE", "FLOATTYPE", "STRINGTYPE",
  "IDENTIFIER", "GREATERTHANEQ", "LESSTHAN", "GREATERTHAN", "LESSTHANEQ",
  "EQUALITY", "NOTEQUALITY", "INCREMENT", "DECREMENT", "EQUAL", "MINUSEQ",
  "PLUSEQ", "MULTIPLYEQ", "DIVIDEEQ", "AND", "OR", "NOT", "CONST", "IF",
  "ELSE", "DOT", "FOR", "TO", "REPEAT", "UNTIL", "BREAK", "CONTINUE",
  "WHILE", "SWITCH", "CASE", "DEFAULT", "RETURN", "VOIDTYPE", "$accept",
  "Start", "S", "code", "inner_code", "datatype", "const_type",
  "declaration", "inner_declaration", "if_start", "Ifstmt", "$@1",
  "else_place", "else_stmt", "repeat_start", "repeat", "for_loop_start",
  "forloop", "iterator", "while_start", "whileloop", "parameters",
  "function_header", "function", "function_call", "list", "switchstmt",
  "case_structure", "inner_case", "condition", "inner_condition",
  "assignment", "EXPR", "T", "M", "G", "enter_scope", "exit_scope", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    63,    64,    65,    65,    66,    66,    66,    66,    66,
      67,    69,    68,    68,    70,    71,    71,    72,    73,    74,
      75,    76,    76,    77,    78,    79,    79,    80,    80,    81,
      81,    82,    82,    83,    83,    84,    84,    85,    85,    86,
      87,    87,    87,    87,    87,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    90,    91,    91,
      91,    91,    92,    92,    93,    93,    93,    93,    93,    93,
      94,    95
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     3,     3,     3,     3,
       4,     0,     9,     7,     0,     3,     8,     0,    12,     0,
      13,     6,     5,     4,     7,     2,     4,     3,     3,     9,
       8,     4,     3,     1,     3,    16,     9,     1,     2,    10,
       3,     3,     2,     1,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     1,     3,     1,     3,     2,     1,     1,     1,     1,
       0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    20,    18,    19,    21,     0,     0,     0,     0,    17,
       0,     0,    16,     0,     0,     2,     0,     4,     0,     0,
       7,     0,     8,    13,    12,     0,     9,   100,    14,    11,
      10,     6,     0,    79,    80,     0,     0,     0,     0,     0,
       0,   100,   100,     0,     0,     0,     0,    96,    97,    98,
      99,    15,    87,    91,    93,     0,     1,     3,    25,    22,
      23,    25,    24,   100,   100,     0,     0,    52,     0,    53,
       0,    77,     0,    78,    63,    76,    82,    81,    83,    84,
       0,     0,     0,    37,     0,     0,    95,     0,     0,     0,
       0,     0,     0,     0,    48,     5,    47,     0,     0,     0,
     100,     0,     0,    51,     0,     0,     0,    62,    66,     0,
       0,     0,     0,     0,     0,     0,     0,    30,     0,     0,
       0,     0,    43,     0,    94,    86,    85,    88,    89,    90,
      92,    28,    27,    29,    26,     0,     0,     0,    45,     0,
      54,    67,    60,    64,    61,    65,    69,    70,    68,    71,
      72,    73,    74,    75,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   101,     0,    46,     0,     0,     0,    39,   101,     0,
       0,    57,    31,    44,   101,     0,     0,    42,     0,     0,
       0,   101,     0,    58,     0,    50,   101,    41,     0,     0,
       0,    56,   100,    34,    32,    49,     0,     0,     0,     0,
       0,     0,     0,   100,     0,   100,    35,   101,    38,     0,
       0,     0,    40,     0,   101,     0,     0,     0,     0,   101,
     101,   101,    59,    55,    36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    19,    20,    60,    21,
      22,   194,   210,   204,   121,    23,   188,    24,   120,    25,
      26,   102,    27,    28,    50,    68,    30,   180,   181,    73,
      74,    31,    81,    52,    53,    54,    66,   182
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -139
static const yytype_int16 yypact[] =
{
     391,  -139,  -139,  -139,  -139,   115,     4,    14,    32,  -139,
      40,    44,   479,    42,    82,  -139,    51,  -139,   -17,    60,
    -139,    74,  -139,  -139,  -139,    96,  -139,   110,  -139,  -139,
    -139,  -139,   455,  -139,  -139,   399,   479,   479,   479,   479,
      13,  -139,  -139,    13,    90,   479,   479,  -139,  -139,   116,
    -139,    77,    78,  -139,   108,   122,  -139,   391,    28,  -139,
    -139,    97,  -139,  -139,  -139,   120,   168,  -139,   130,   107,
      13,  -139,   482,    50,  -139,   426,    77,    77,    77,    77,
      26,   426,    52,  -139,    31,   146,  -139,    56,   479,   479,
     479,   479,   479,   479,  -139,  -139,  -139,   132,   391,   391,
    -139,   131,   150,  -139,   479,    33,   442,  -139,   426,   482,
     482,   479,   479,   479,   479,   105,   472,  -139,   139,   106,
     145,   391,  -139,   153,  -139,    78,    78,  -139,  -139,  -139,
    -139,  -139,  -139,    50,   426,   124,   129,   391,   155,   163,
    -139,  -139,  -139,   426,  -139,   426,    77,    77,    77,    77,
    -139,    77,  -139,    77,   144,   479,   157,   142,  -139,   179,
     191,   154,   168,   391,   479,     1,   476,   176,   228,   152,
    -139,  -139,   240,  -139,   162,     3,   479,  -139,  -139,   201,
     -12,   152,   165,  -139,  -139,   277,   479,    77,   204,   169,
     214,  -139,   211,  -139,   186,  -139,  -139,    77,   391,   226,
     230,  -139,  -139,  -139,  -139,  -139,   195,    13,   232,   391,
       6,   289,    36,  -139,   210,  -139,  -139,  -139,  -139,   391,
     326,   391,  -139,   212,  -139,   213,   338,   242,   375,  -139,
    -139,  -139,  -139,  -139,  -139
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,  -139,   -85,   -40,   -65,  -139,  -139,   227,  -139,
      49,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,    98,  -139,  -139,     0,   164,  -139,    85,  -139,   -28,
     -54,   111,    -9,    73,   104,   224,   -32,  -138
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -34
static const yytype_int16 yytable[] =
{
      29,   101,   191,    51,    88,    89,    88,    89,    58,    82,
      83,    40,    80,   135,   136,    84,    45,    95,   107,   215,
      70,    41,    47,    69,    48,    59,    75,    76,    77,    78,
      79,    98,    99,   183,   117,    96,   157,    87,    49,   122,
     189,   141,   105,   192,   218,    42,   195,    43,   176,     6,
     186,    44,   161,   201,    72,   142,   144,    29,   205,    88,
      89,   106,    97,   108,   124,   109,   110,    55,   137,   133,
     109,   110,   109,   110,   118,   109,   110,   119,   174,   222,
      88,    89,    56,    90,    91,    61,   227,    63,   134,   109,
     110,   232,   233,   234,    92,    69,    57,   101,    29,    29,
     143,   145,   146,   147,   148,   149,   151,   153,    45,    64,
      88,    89,    46,   206,    47,    85,    48,   150,    65,    95,
      95,    29,    32,    32,   214,    93,   169,   104,    95,    94,
      49,    97,    95,   100,   223,    45,   225,    29,   103,    70,
     155,    47,   131,    48,   132,    95,   165,    33,    34,    35,
      36,    37,    38,    39,   123,   175,   138,    49,   139,    29,
      29,   125,   126,    29,   154,   156,   158,   187,    29,   159,
     209,    95,    29,    72,   160,   162,   163,   197,   164,   212,
      95,   219,   166,   221,   177,    29,    95,   168,    95,     1,
       2,     3,     4,   170,   127,   128,   129,   130,    29,   172,
       1,     2,     3,     4,     5,   171,   179,   185,   190,    29,
     -33,    29,     1,     2,     3,     4,     5,   198,   199,    29,
      29,    29,     6,   200,   202,     7,    29,     8,    29,     9,
     203,    10,    11,   207,     6,    12,    13,     7,   208,     8,
     211,     9,   178,    10,    11,   213,    62,    12,    13,     1,
       2,     3,     4,     5,   184,   220,   230,   226,   228,   216,
     173,     1,     2,     3,     4,     5,   193,   167,   140,    86,
       0,     6,     0,     0,     7,     0,     8,     0,     9,     0,
      10,    11,     0,     6,    12,    13,     7,     0,     8,     0,
       9,   196,    10,    11,     0,     0,    12,    13,     1,     2,
       3,     4,     5,   217,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     4,     5,     0,     0,     0,     0,     0,
       6,     0,     0,     7,     0,     8,     0,     9,     0,    10,
      11,     0,     6,    12,    13,     7,     0,     8,     0,     9,
     224,    10,    11,     0,     0,    12,    13,     1,     2,     3,
       4,     5,   229,     0,     0,     0,     0,     0,     0,     1,
       2,     3,     4,     5,     0,     0,     0,     0,     0,     6,
       0,     0,     7,     0,     8,     0,     9,     0,    10,    11,
       0,     6,    12,    13,     7,     0,     8,     0,     9,   231,
      10,    11,     0,     0,    12,    13,     1,     2,     3,     4,
       5,     0,    45,     0,     0,     0,    70,     0,    47,    71,
      48,     0,     1,     2,     3,     4,     5,     0,     6,     0,
       0,     7,     0,     8,    49,     9,     0,    10,    11,    88,
      89,    12,    13,     0,     6,     0,     0,     7,     0,     8,
      72,     9,     0,    10,    11,    88,    89,    12,    13,     0,
     124,     0,   111,   112,   113,   114,   115,   116,    45,     0,
       0,     0,    46,    67,    47,     0,    48,     0,   111,   112,
     113,   114,   115,   116,     0,    45,     0,     0,     0,    46,
      49,    47,    45,    48,   152,    45,    46,     0,    47,    70,
      48,    47,     0,    48,     0,     0,     0,    49,     0,     0,
       0,     0,     0,     0,    49,     0,     0,    49,    33,    34,
      35,    36,    37,    38,    39
};

static const yytype_int16 yycheck[] =
{
       0,    66,    14,    12,     3,     4,     3,     4,    25,    41,
      42,     7,    40,    98,    99,    43,     3,    57,    72,    13,
       7,     7,     9,    32,    11,    42,    35,    36,    37,    38,
      39,    63,    64,   171,     8,     7,   121,    46,    25,     8,
     178,     8,    70,    55,     8,    13,   184,     7,    47,    43,
      47,     7,   137,   191,    41,   109,   110,    57,   196,     3,
       4,    70,    34,    72,     8,    39,    40,    25,   100,    97,
      39,    40,    39,    40,    22,    39,    40,    25,   163,   217,
       3,     4,     0,     5,     6,    25,   224,    13,    97,    39,
      40,   229,   230,   231,    16,   104,    45,   162,    98,    99,
     109,   110,   111,   112,   113,   114,   115,   116,     3,    13,
       3,     4,     7,   198,     9,    25,    11,    12,     8,   159,
     160,   121,     7,     7,   209,    17,   158,    20,   168,     7,
      25,    34,   172,    13,   219,     3,   221,   137,     8,     7,
      34,     9,    10,    11,    12,   185,   155,    32,    33,    34,
      35,    36,    37,    38,     8,   164,    25,    25,     8,   159,
     160,    88,    89,   163,    25,    20,    13,   176,   168,    45,
     202,   211,   172,    41,    45,    20,    13,   186,    34,   207,
     220,   213,    25,   215,     8,   185,   226,    45,   228,    21,
      22,    23,    24,    14,    90,    91,    92,    93,   198,    45,
      21,    22,    23,    24,    25,    14,    54,    45,     7,   209,
      45,   211,    21,    22,    23,    24,    25,    13,    49,   219,
     220,   221,    43,     9,    13,    46,   226,    48,   228,    50,
      44,    52,    53,     7,    43,    56,    57,    46,     8,    48,
      45,    50,    14,    52,    53,    13,    19,    56,    57,    21,
      22,    23,    24,    25,    14,    45,    14,    45,    45,   210,
     162,    21,    22,    23,    24,    25,   181,   156,   104,    45,
      -1,    43,    -1,    -1,    46,    -1,    48,    -1,    50,    -1,
      52,    53,    -1,    43,    56,    57,    46,    -1,    48,    -1,
      50,    14,    52,    53,    -1,    -1,    56,    57,    21,    22,
      23,    24,    25,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    46,    -1,    48,    -1,    50,    -1,    52,
      53,    -1,    43,    56,    57,    46,    -1,    48,    -1,    50,
      14,    52,    53,    -1,    -1,    56,    57,    21,    22,    23,
      24,    25,    14,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,    -1,    48,    -1,    50,    -1,    52,    53,
      -1,    43,    56,    57,    46,    -1,    48,    -1,    50,    14,
      52,    53,    -1,    -1,    56,    57,    21,    22,    23,    24,
      25,    -1,     3,    -1,    -1,    -1,     7,    -1,     9,    10,
      11,    -1,    21,    22,    23,    24,    25,    -1,    43,    -1,
      -1,    46,    -1,    48,    25,    50,    -1,    52,    53,     3,
       4,    56,    57,    -1,    43,    -1,    -1,    46,    -1,    48,
      41,    50,    -1,    52,    53,     3,     4,    56,    57,    -1,
       8,    -1,    26,    27,    28,    29,    30,    31,     3,    -1,
      -1,    -1,     7,     8,     9,    -1,    11,    -1,    26,    27,
      28,    29,    30,    31,    -1,     3,    -1,    -1,    -1,     7,
      25,     9,     3,    11,    12,     3,     7,    -1,     9,     7,
      11,     9,    -1,    11,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    25,    32,    33,
      34,    35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    23,    24,    25,    43,    46,    48,    50,
      52,    53,    56,    57,    59,    60,    61,    62,    63,    64,
      65,    67,    68,    73,    75,    77,    78,    80,    81,    82,
      84,    89,     7,    32,    33,    34,    35,    36,    37,    38,
       7,     7,    13,     7,     7,     3,     7,     9,    11,    25,
      82,    90,    91,    92,    93,    25,     0,    45,    25,    42,
      66,    25,    66,    13,    13,     8,    94,     8,    83,    90,
       7,    10,    41,    87,    88,    90,    90,    90,    90,    90,
      87,    90,    94,    94,    87,    25,    93,    90,     3,     4,
       5,     6,    16,    17,     7,    62,     7,    34,    94,    94,
      13,    63,    79,     8,    20,    87,    90,    88,    90,    39,
      40,    26,    27,    28,    29,    30,    31,     8,    22,    25,
      76,    72,     8,     8,     8,    91,    91,    92,    92,    92,
      92,    10,    12,    87,    90,    61,    61,    94,    25,     8,
      83,     8,    88,    90,    88,    90,    90,    90,    90,    90,
      12,    90,    12,    90,    25,    34,    20,    61,    13,    45,
      45,    61,    20,    13,    34,    90,    25,    89,    45,    94,
      14,    14,    45,    79,    61,    90,    47,     8,    14,    54,
      85,    86,    95,    95,    14,    45,    47,    90,    74,    95,
       7,    14,    55,    85,    69,    95,    14,    90,    13,    49,
       9,    95,    13,    44,    71,    95,    61,     7,     8,    94,
      70,    45,    87,    13,    61,    13,    68,    14,     8,    94,
      45,    94,    95,    61,    14,    61,    45,    95,    45,    14,
      14,    14,    95,    95,    95
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 98 "Parser.y"
    {printf("Correct Syntax\n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 118 "Parser.y"
    { (yyval.i) = SYM_INT; ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 119 "Parser.y"
    { (yyval.i) = SYM_FLOAT; ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 120 "Parser.y"
    { (yyval.i) = SYM_BOOL; ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 121 "Parser.y"
    { (yyval.i) = SYM_STRING; ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 127 "Parser.y"
    {
        current_type = (yyvsp[(1) - (2)].i);
        current_kind = SYM_CONST;
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 139 "Parser.y"
    {
        current_type = (yyvsp[(1) - (2)].i);
        current_kind = VAR;
    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 148 "Parser.y"
    { //Multiple declaration check , Symbol insertion
        if (lookup_current((yyvsp[(1) - (1)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n ",yylineno,(yyvsp[(1) - (1)].str));
        } else {
            Symbol* s = create_symbol((yyvsp[(1) - (1)].str), current_type, current_kind, false, NULL);
            insert(s, current_scope);
        }
    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 156 "Parser.y"
    {
        if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,(yyvsp[(1) - (3)].str));
        } else {
            Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
            insert(s, current_scope);   
            emit("=",(yyvsp[(3) - (3)].str),"",(yyvsp[(1) - (3)].str));
        }
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 166 "Parser.y"
    { 
        if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n ",yylineno,(yyvsp[(1) - (3)].str));
        } else {
            Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
            insert(s, current_scope);
            emit("=",(yyvsp[(3) - (3)].str),"",(yyvsp[(1) - (3)].str));
        }
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 175 "Parser.y"
    { 
        if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,(yyvsp[(1) - (3)].str));
        } else {
            Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
            insert(s, current_scope);
            emit("=",(yyvsp[(3) - (3)].str),"",(yyvsp[(1) - (3)].str));
        }
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 184 "Parser.y"
    { //Multiple declaration check , Symbol insertion
        if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,(yyvsp[(1) - (3)].str));
        } else {
            Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
            insert(s, current_scope);
            emit("=",(yyvsp[(3) - (3)].str),"",(yyvsp[(1) - (3)].str));
        }
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 196 "Parser.y"
    {
    (yyval.i) = nextQuad();
    emit("IfFalse", (yyvsp[(3) - (4)].str), "", "");
;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 206 "Parser.y"
    {
        addjump((yyvsp[(1) - (7)].i),nextQuad()+1); //skip the goto at the end of the if condition

    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 215 "Parser.y"
    {
        addjump((yyvsp[(1) - (7)].i),nextQuad());
    ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 221 "Parser.y"
    {
    (yyval.i) = nextQuad();
    emit("goto", "", "", "");
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 228 "Parser.y"
    {
        addjump((yyvsp[(2) - (3)].i),nextQuad());
    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 234 "Parser.y"
    {
        addjump((yyvsp[(2) - (8)].i),nextQuad());
    ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 239 "Parser.y"
    {
    (yyval.i) = nextQuad();
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 247 "Parser.y"
    {
        char label[20];
        sprintf(label, "%d", (yyvsp[(4) - (12)].i)); 
        emit("IfFalse",(yyvsp[(11) - (12)].str),"",label);
    ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 253 "Parser.y"
    {
    (yyval.q) = pop_last();
;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 260 "Parser.y"
    {
        if ((yyvsp[(4) - (13)].i) != -1) {
            char label[20];
            sprintf(label, "%d", (yyvsp[(4) - (13)].i));
            addQuad((yyvsp[(8) - (13)].q));
            emit("goto","","",label);
            addjump((yyvsp[(4) - (13)].i)+1,nextQuad());
        }
    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 272 "Parser.y"
    {
        if (lookup_current((yyvsp[(2) - (6)].str), current_scope)) {
            fprintf(stderr,"Line %d:iterator %s has been declared before \n",yylineno,(yyvsp[(2) - (6)].str));
            (yyval.i) = -1;
        } else {
            Symbol* s = create_symbol((yyvsp[(2) - (6)].str), SYM_INT, VAR, true, NULL);
            insert(s, current_scope);
            s->used=true;
            emit("=",(yyvsp[(2) - (6)].str),"",(yyvsp[(4) - (6)].str));
            (yyval.i) = nextQuad();
            char *t = newTemp();
            emit(">",(yyvsp[(2) - (6)].str),(yyvsp[(6) - (6)].str),t);
            emit("IfTrue",t,"","");
        }
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 288 "Parser.y"
    {
    Symbol* s = lookup((yyvsp[(1) - (5)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (5)].str));
            (yyval.i) = -1;
        } else {
            s->initialized = true;
            s->used=true;
            emit("=",(yyvsp[(1) - (5)].str),"",(yyvsp[(3) - (5)].str));
            (yyval.i) = nextQuad();
            char *t = newTemp();
            emit(">",(yyvsp[(1) - (5)].str),(yyvsp[(5) - (5)].str),t);
            emit("IfTrue",t,"","");
        }
;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 305 "Parser.y"
    {
    (yyval.i) = nextQuad();
    emit("IfFalse",(yyvsp[(3) - (4)].str),"","");
;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 314 "Parser.y"
    {
        char label[20];
        sprintf(label, "%d", (yyvsp[(1) - (7)].i)); 
        emit("goto","","",label);
        addjump((yyvsp[(1) - (7)].i),nextQuad());
    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 324 "Parser.y"
    {
        current_type = (yyvsp[(1) - (2)].i);
        if (lookup_current((yyvsp[(2) - (2)].str), current_scope)) 
        {
            fprintf(stderr,"Line %d:Duplicate parameter name %s\n",yylineno, (yyvsp[(2) - (2)].str));
        } else {
            Symbol* p = create_symbol((yyvsp[(2) - (2)].str), current_type, VAR, true, NULL);           
            insert(p, current_scope);
            append_param((yyvsp[(2) - (2)].str), current_function->params);
        }
    ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 335 "Parser.y"
    {
        current_type = (yyvsp[(1) - (4)].i);
        if (lookup_current((yyvsp[(2) - (4)].str), current_scope)) {
            fprintf(stderr,"Line %d:Duplicate parameter name  %s\n",yylineno,(yyvsp[(2) - (4)].str));
        } else {
            Symbol* p = create_symbol((yyvsp[(2) - (4)].str), current_type, VAR, true, NULL);
            insert(p, current_scope);
            append_param((yyvsp[(2) - (4)].str), current_function->params);  
        }
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 348 "Parser.y"
    {
          
            if (lookup_current((yyvsp[(2) - (3)].str), current_scope))
                fprintf(stderr,"Line %d:Function  %s redeclared \n",yylineno,(yyvsp[(2) - (3)].str));
            else {
                ParamList* plist = create_param_list();   
                Symbol* f = create_symbol((yyvsp[(2) - (3)].str), (yyvsp[(1) - (3)].i), FUNC, true, plist);
                insert(f, current_scope);
                current_function = f;            
            }
        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 359 "Parser.y"
    {
        if (lookup_current((yyvsp[(2) - (3)].str), current_scope))
            fprintf(stderr,"Line %d:Function  %s redeclared \n",yylineno,(yyvsp[(2) - (3)].str));
        else {
            ParamList* plist = create_param_list();   
            Symbol* f = create_symbol((yyvsp[(2) - (3)].str), SYM_VOID, FUNC, true, plist);
            insert(f, current_scope);
            current_function = f;   
        }
    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 384 "Parser.y"
    {
        Symbol* f = lookup((yyvsp[(1) - (4)].str), current_scope);
        if (!f)
            fprintf( stderr,"Line %d:Function %s not defined \n",yylineno,(yyvsp[(1) - (4)].str));
        else if (f->kind != FUNC)
            fprintf(stderr,"Line %d:Identifier %s is not a function\n",yylineno,(yyvsp[(1) - (4)].str));
        else {
            f->used=true;
            char string_count[20];
            sprintf(string_count, "%d", f->params->count); 
            if (f->type == SYM_VOID) {
                emit("call", (yyvsp[(1) - (4)].str), string_count, "");
                (yyval.str) = "";
            }
            else {
                char *t = newTemp();
                emit("call", (yyvsp[(1) - (4)].str), string_count, t);
                (yyval.str) = t;
            }
        }
    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 405 "Parser.y"
    {
        Symbol* f = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!f)
            fprintf( stderr,"Line %d:Function %s not defined \n",yylineno,(yyvsp[(1) - (3)].str));
        else if (f->kind != FUNC)
            fprintf(stderr,"Line %d:Identifier %s is not a function\n",yylineno,(yyvsp[(1) - (3)].str));
        else {
            f->used=true;
            if (f->type == SYM_VOID) {
                emit("call", (yyvsp[(1) - (3)].str), "0", "");
                (yyval.str) = "";
            }
            else {
                char *t = newTemp();
                emit("call", (yyvsp[(1) - (3)].str), "0", t);
                (yyval.str) = t;
            }
        }
    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 427 "Parser.y"
    {
    emit("param", (yyvsp[(1) - (1)].str), "", "");
;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 429 "Parser.y"
    {
    emit("param", (yyvsp[(1) - (3)].str), "", "");
;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 439 "Parser.y"
    { //net2aked en identifier of type int 3lshan manensash
        Symbol* s= lookup((yyvsp[(3) - (16)].str), current_scope);
        if(!s){
            fprintf(stderr,"Line %d:%s is not declared\n",yylineno,(yyvsp[(3) - (16)].str));
        } else {
            s->used=true;
        }
    ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 450 "Parser.y"
    {
        Symbol* s= lookup((yyvsp[(3) - (9)].str), current_scope);
        if(!s){
            fprintf(stderr,"Line %d:%s is not declared\n",yylineno, (yyvsp[(3) - (9)].str));
        } else {
            s->used=true;
        }
  ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 470 "Parser.y"
    {
    char *t = newTemp();
    emit("and", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 476 "Parser.y"
    {
    char *t = newTemp();
    emit("or", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 482 "Parser.y"
    {
    char *t = newTemp();
    emit("not", (yyvsp[(2) - (2)].str), "", t);
    (yyval.str) = t;
;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 488 "Parser.y"
    {
    (yyval.str) = (yyvsp[(1) - (1)].str);
;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 492 "Parser.y"
    {
    char *t = newTemp();
    emit("and", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 498 "Parser.y"
    {
    char *t = newTemp();
    emit("or", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 504 "Parser.y"
    {
    char *t = newTemp();
    emit("not", (yyvsp[(2) - (2)].str), "", t);
    (yyval.str) = t;
;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 511 "Parser.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 513 "Parser.y"
    {
    char *t = newTemp();
    emit(">", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 519 "Parser.y"
    {
    char *t = newTemp();
    emit(">=", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 525 "Parser.y"
    {
    char *t = newTemp();
    emit("<", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 531 "Parser.y"
    {
    char *t = newTemp();
    emit("<=", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 537 "Parser.y"
    {
    char *t = newTemp();
    emit("==", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 543 "Parser.y"
    {
    char *t = newTemp();
    emit("==", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 549 "Parser.y"
    {
    char *t = newTemp();
    emit("!=", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 555 "Parser.y"
    {
    char *t = newTemp();
    emit("!=", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 563 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.str) = "error";
        } else {
            s->initialized = true;
            emit("=", (yyvsp[(3) - (3)].str), "", (yyvsp[(1) - (3)].str));
            (yyval.str) = (yyvsp[(1) - (3)].str);
        }
    ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 575 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s used before declaration\n",yylineno, (yyvsp[(1) - (3)].str));
            (yyval.str) = "error";
        } else {
            s->initialized = true;
            emit("=", (yyvsp[(3) - (3)].str), "", (yyvsp[(1) - (3)].str));
            (yyval.str) = (yyvsp[(1) - (3)].str);
        }
    ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 587 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.str) = "error";
        } else {
            s->initialized = true;
            emit("=", (yyvsp[(3) - (3)].str), "", (yyvsp[(1) - (3)].str));
            (yyval.str) = (yyvsp[(1) - (3)].str);
        }
    ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 599 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (2)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, (yyvsp[(1) - (2)].str));
            (yyval.str) = "error";
        }
        else if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, (yyvsp[(1) - (2)].str));
            (yyval.str) = "error";
        }
        else {
            emit("++", (yyvsp[(1) - (2)].str), "", (yyvsp[(1) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        }
    ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 615 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (2)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, (yyvsp[(1) - (2)].str));
            (yyval.str) = "error";
        }
        else if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, (yyvsp[(1) - (2)].str));
            (yyval.str) = "error";
        }
        else {
            emit("--", (yyvsp[(1) - (2)].str), "", (yyvsp[(1) - (2)].str));
            (yyval.str) = (yyvsp[(1) - (2)].str);
        }
    ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 631 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, (yyvsp[(1) - (3)].str));
            (yyval.str) = "error";
        }
        else if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, (yyvsp[(1) - (3)].str));
            (yyval.str) = "error";
        }
        else {
            emit("+", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));
            (yyval.str) = (yyvsp[(1) - (3)].str);
        }
       
    ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 648 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, (yyvsp[(1) - (3)].str));
            (yyval.str) = "error";
        }
        else if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, (yyvsp[(1) - (3)].str));
            (yyval.str) = "error";
        }
        else {
            emit("-", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));
            (yyval.str) = (yyvsp[(1) - (3)].str);
        }
       
    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 665 "Parser.y"
    {
         Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, (yyvsp[(1) - (3)].str));
            (yyval.str) = "error";
        }
        else if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, (yyvsp[(1) - (3)].str));
            (yyval.str) = "error";
        }
        else {
            emit("*", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));
            (yyval.str) = (yyvsp[(1) - (3)].str);
        }
   
    ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 682 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, (yyvsp[(1) - (3)].str));
            (yyval.str) = "error";
        }
        else if (!s->initialized) {
           fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, (yyvsp[(1) - (3)].str));
           (yyval.str) = "error";
        }
        else {
            emit("/", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));
            (yyval.str) = (yyvsp[(1) - (3)].str);
        }
    ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 699 "Parser.y"
    {
    char *t = newTemp();
    emit("+", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 704 "Parser.y"
    {
    char *t = newTemp();
    emit("-", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 709 "Parser.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 712 "Parser.y"
    {
    char *t = newTemp();
    emit("*", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 717 "Parser.y"
    {
    char *t = newTemp();
    emit("/", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 722 "Parser.y"
    {
    char *t = newTemp();
    emit("%%", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 727 "Parser.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 730 "Parser.y"
    {
    char *t = newTemp();
    emit("^", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str), t);
    (yyval.str) = t;
;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 735 "Parser.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 738 "Parser.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 739 "Parser.y"
    {
    char *t = newTemp();
    emit("negative", (yyvsp[(2) - (2)].str), "", t);
    (yyval.str) = t;
;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 744 "Parser.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 745 "Parser.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 746 "Parser.y"
    { //handles use before init.
        Symbol* s = lookup((yyvsp[(1) - (1)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, (yyvsp[(1) - (1)].str));
            (yyval.str) = "error";    
        }
        else if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, (yyvsp[(1) - (1)].str));
            (yyval.str) = "error";
        } else {
            s->used = true;
            (yyval.str) = (yyvsp[(1) - (1)].str);
        }
    ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 760 "Parser.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 764 "Parser.y"
    {
        current_scope = create_table(211, current_scope);
    ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 770 "Parser.y"
    {
        SymbolTable* old = current_scope;
        print_table(current_scope);
        report_unused(current_scope);
        printf("_____________________________ \n");
        current_scope = current_scope->parent;
        free_table(old);
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2657 "Parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 780 "Parser.y"


/* Subroutines */
void yyerror(const char *s) {
    extern char *yytext;  // Current token text
    fprintf(stderr, "Line %d:Syntax error at '%s': %s\n",yylineno, yytext, s);
}
void report_unused(SymbolTable* table) {
    for (int i = 0; i < table->size; i++) {
        Symbol* s = table->table[i];
        while (s) {
            if (!s->used && s->kind == VAR) {
                printf("Warning: variable '%s' declared but not used\n", s->name);
            }
            s = s->next;
        }
    }
}

int main(int argc, char **argv) {
    current_scope = create_table(211, NULL); // global scope
    initQuadTable();
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("Error opening file");
            return 1;
        }
    }

    if (yyparse() == 0) {
        print_table(current_scope);
        report_unused(current_scope);
        printQuadruples();
        free_table(current_scope);
        return 0;
    }
    
    return 1;
}
