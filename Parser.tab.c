
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
    #include "type_checks.h"
    void yyerror(const char *s);
    int yylex(void);
    extern FILE *yyin;
    SymbolTable* current_scope;
    Symbol* current_function = NULL; 
    DATATYPE current_type;    
    KIND current_kind;
    void report_unused(SymbolTable* table);
    


/* Line 189 of yacc.c  */
#line 96 "Parser.tab.c"

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
#line 25 "Parser.y"

    #include "enums_def.h"



/* Line 209 of yacc.c  */
#line 126 "Parser.tab.c"

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
#line 28 "Parser.y"

    int i;
    float f;
    char * str;
    _Bool b;
    DATATYPE dtype;



/* Line 214 of yacc.c  */
#line 210 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 222 "Parser.tab.c"

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
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   500

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNRULES -- Number of states.  */
#define YYNSTATES  229

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
      43,    45,    47,    50,    53,    54,    58,    60,    64,    68,
      72,    76,    89,   100,   118,   130,   143,   150,   156,   167,
     170,   175,   179,   183,   193,   202,   207,   211,   213,   217,
     234,   244,   246,   249,   260,   264,   268,   271,   273,   277,
     281,   284,   288,   292,   296,   300,   304,   308,   312,   316,
     320,   324,   328,   332,   335,   338,   342,   346,   350,   354,
     358,   362,   364,   368,   372,   376,   378,   382,   384,   388,
     391,   393,   395,   397,   399,   400
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    61,    45,    -1,    62,    -1,
      61,    45,    62,    -1,    83,    -1,    65,    -1,    68,    -1,
      72,    -1,    78,    -1,    76,    -1,    70,    -1,    69,    -1,
      75,    -1,    56,    84,    -1,    56,    -1,    50,    -1,    22,
      -1,    23,    -1,    21,    -1,    24,    -1,    63,    42,    -1,
      63,    67,    -1,    -1,    64,    66,    67,    -1,    25,    -1,
      25,    34,    84,    -1,    25,    34,    12,    -1,    25,    34,
      10,    -1,    25,    34,    81,    -1,    43,     7,    81,     8,
      13,    88,    61,    45,    14,    89,    44,    68,    -1,    43,
       7,    81,     8,    13,    88,    61,    45,    14,    89,    -1,
      43,     7,    81,     8,    13,    88,    61,    45,    14,    89,
      44,    13,    88,    61,    45,    14,    89,    -1,    48,    13,
      88,    61,    45,    14,    89,    49,     7,    81,     8,    -1,
      46,     7,    88,    71,    20,    83,     8,    13,    61,    45,
      14,    89,    -1,    22,    25,    34,    84,    47,    84,    -1,
      25,    34,    84,    47,    84,    -1,    52,     7,    81,     8,
      13,    88,    61,    45,    14,    89,    -1,    63,    25,    -1,
      63,    25,    20,    73,    -1,    63,    25,     7,    -1,    57,
      25,     7,    -1,    74,    88,    73,     8,    13,    61,    45,
      14,    89,    -1,    74,     8,    13,    88,    61,    45,    14,
      89,    -1,    25,     7,    77,     8,    -1,    25,     7,     8,
      -1,    84,    -1,    84,    20,    77,    -1,    53,     7,    25,
       8,    13,    88,    79,    55,    13,    88,    61,    45,    14,
      89,    14,    89,    -1,    53,     7,    25,     8,    13,    88,
      79,    14,    89,    -1,    80,    -1,    80,    79,    -1,    54,
       7,     9,     8,    13,    88,    61,    45,    14,    89,    -1,
      81,    39,    82,    -1,    81,    40,    82,    -1,    41,    82,
      -1,    82,    -1,    81,    39,    84,    -1,    81,    40,    84,
      -1,    41,    84,    -1,     7,    81,     8,    -1,    84,    28,
      84,    -1,    84,    26,    84,    -1,    84,    27,    84,    -1,
      84,    29,    84,    -1,    84,    30,    12,    -1,    84,    30,
      84,    -1,    84,    31,    12,    -1,    84,    31,    84,    -1,
      25,    34,    84,    -1,    25,    34,    10,    -1,    25,    34,
      81,    -1,    25,    32,    -1,    25,    33,    -1,    25,    36,
      84,    -1,    25,    35,    84,    -1,    25,    37,    84,    -1,
      25,    38,    84,    -1,    84,     4,    85,    -1,    84,     3,
      85,    -1,    85,    -1,    85,     5,    86,    -1,    85,     6,
      86,    -1,    85,    16,    86,    -1,    86,    -1,    87,    17,
      86,    -1,    87,    -1,     7,    84,     8,    -1,     3,    87,
      -1,     9,    -1,    11,    -1,    25,    -1,    76,    -1,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    99,    99,   101,   103,   104,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   131,   141,   145,   146,
     147,   148,   154,   166,   172,   172,   177,   186,   200,   213,
     227,   243,   248,   252,   263,   270,   276,   291,   310,   318,
     329,   342,   353,   365,   371,   378,   388,   404,   404,   407,
     425,   443,   443,   446,   452,   462,   472,   481,   486,   499,
     512,   524,   525,   535,   545,   555,   565,   574,   584,   593,
     606,   629,   651,   674,   688,   702,   719,   735,   750,   766,
     780,   794,   797,   811,   827,   843,   846,   858,   860,   861,
     872,   873,   874,   896,   908,   914
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
  "declaration", "$@1", "inner_declaration", "Ifstmt", "repeat", "forloop",
  "iterator", "whileloop", "parameters", "function_header", "function",
  "function_call", "list", "switchstmt", "case_structure", "inner_case",
  "condition", "inner_condition", "assignment", "EXPR", "T", "M", "G",
  "enter_scope", "exit_scope", 0
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
      63,    63,    64,    65,    66,    65,    67,    67,    67,    67,
      67,    68,    68,    68,    69,    70,    71,    71,    72,    73,
      73,    74,    74,    75,    75,    76,    76,    77,    77,    78,
      78,    79,    79,    80,    81,    81,    81,    81,    81,    81,
      81,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    84,
      84,    84,    85,    85,    85,    85,    86,    86,    87,    87,
      87,    87,    87,    87,    88,    89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     0,     3,     1,     3,     3,     3,
       3,    12,    10,    17,    11,    12,     6,     5,    10,     2,
       4,     3,     3,     9,     8,     4,     3,     1,     3,    16,
       9,     1,     2,    10,     3,     3,     2,     1,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     1,     3,     2,
       1,     1,     1,     1,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    20,    18,    19,    21,     0,     0,     0,     0,    17,
       0,     0,    16,     0,     0,     2,     0,     4,     0,    24,
       7,     8,    13,    12,     9,    94,    14,    11,    10,     6,
       0,    73,    74,     0,     0,     0,     0,     0,     0,    94,
      94,     0,     0,     0,     0,    90,    91,    92,    93,    15,
      81,    85,    87,     0,     1,     3,    26,    22,    23,     0,
       0,     0,    46,     0,    47,     0,    71,     0,    72,    57,
      70,    76,    75,    77,    78,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,    42,
       5,    41,     0,    26,    25,    94,     0,     0,    45,     0,
       0,     0,    56,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      80,    79,    82,    83,    84,    86,    29,    28,    30,    27,
       0,    39,     0,    48,    61,    54,    58,    55,    59,    63,
      64,    62,    65,    66,    67,    68,    69,    94,     0,     0,
       0,     0,    94,    94,     0,     0,     0,     0,     0,     0,
       0,     0,    95,     0,     0,     0,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,    95,     0,     0,
       0,    37,     0,     0,     0,     0,    95,     0,    52,    44,
      95,    95,    36,     0,     0,    95,     0,    50,    94,    43,
      32,     0,     0,    38,     0,     0,     0,    95,    34,    94,
       0,    94,    31,    35,     0,     0,     0,     0,    95,     0,
       0,     0,     0,    95,    95,    95,    53,    49,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    19,    20,    59,    58,
      21,    22,    23,   115,    24,    97,    25,    26,    48,    63,
      28,   175,   176,    68,    69,    29,    76,    50,    51,    52,
      61,   172
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -173
static const yytype_int16 yypact[] =
{
     375,  -173,  -173,  -173,  -173,   403,    -3,     8,     4,  -173,
      26,    33,   472,    11,    62,  -173,    38,  -173,    29,  -173,
    -173,  -173,  -173,  -173,  -173,    59,  -173,  -173,  -173,  -173,
     124,  -173,  -173,   183,   472,   472,   472,   472,   383,  -173,
    -173,   383,    49,   472,   472,  -173,  -173,   101,  -173,    78,
     142,  -173,    68,   106,  -173,   375,    13,  -173,  -173,    96,
     115,   188,  -173,   121,    76,   383,  -173,   475,    55,  -173,
     416,    78,    78,    78,    78,    48,   416,   -14,   375,    50,
     126,  -173,   138,   472,   472,   472,   472,   472,   472,  -173,
    -173,  -173,   113,   103,  -173,  -173,   119,   145,  -173,   472,
      52,   426,  -173,   416,   475,   475,   472,   472,   472,   472,
     455,   462,   137,   130,   127,   147,   132,   156,   159,  -173,
     142,   142,  -173,  -173,  -173,  -173,  -173,  -173,    55,   416,
     375,   155,   167,  -173,  -173,  -173,   416,  -173,   416,    78,
      78,    78,    78,  -173,    78,  -173,    78,  -173,   151,   472,
     162,    20,  -173,  -173,   143,   188,   375,   375,   472,    18,
     456,   187,  -173,   375,   148,   175,  -173,   146,   158,    22,
     472,   191,   157,   168,   200,    -7,   148,  -173,   212,   224,
     472,    78,   375,   210,   261,   220,  -173,   206,  -173,  -173,
    -173,  -173,    78,   185,   383,  -173,   235,  -173,  -173,  -173,
     207,   273,    67,  -173,   231,   375,    -4,  -173,  -173,  -173,
     205,  -173,  -173,  -173,   375,   310,   375,   208,  -173,   209,
     322,   238,   359,  -173,  -173,  -173,  -173,  -173,  -173
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -173,  -173,  -173,   -46,   -39,   -58,  -173,  -173,  -173,   197,
      51,  -173,  -173,  -173,  -173,   104,  -173,  -173,     0,   164,
    -173,    85,  -173,   -28,   -55,   116,    -6,    35,   154,   228,
     -38,  -172
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      27,    77,    78,    96,    38,   189,    49,   186,   113,   211,
      75,   114,   102,    79,   197,    39,    90,    40,   199,   200,
      91,    83,    84,   203,    64,    83,    84,    70,    71,    72,
      73,    74,   116,    41,   162,   213,    53,   100,    82,     6,
      42,     1,     2,     3,     4,     5,   221,    92,   187,   135,
     137,   226,   227,   228,    56,    27,   112,   130,   117,   101,
     134,   103,    54,     6,   128,   170,     7,    60,     8,   180,
       9,    57,    10,    11,    80,   208,    12,    13,    27,    83,
      84,    83,    84,    55,   154,    88,   129,   104,   105,   104,
     105,   104,   105,    64,   104,   105,    99,    96,   136,   138,
     139,   140,   141,   142,   144,   146,   104,   105,    30,   157,
     167,   168,    90,    89,   163,   164,    43,   173,   120,   121,
      65,    93,    45,   126,    46,   127,    90,    43,    95,    98,
      27,    44,    62,    45,   118,    46,   193,    92,    47,    90,
      90,    83,    84,   159,   131,    90,   119,    85,    86,    47,
     147,    27,   169,   132,    67,   148,    27,    27,    87,   210,
     205,   149,    90,    27,   181,    27,   202,   150,   217,   152,
     219,   214,   153,   216,   192,   155,    90,   151,    27,    27,
     156,    90,    27,    90,    27,   158,    43,   160,   165,   177,
      65,   178,    45,    66,    46,   171,     1,     2,     3,     4,
       5,    27,   174,   179,   182,    27,   183,   185,    47,     1,
       2,     3,     4,   184,    27,    27,    27,   194,     6,   198,
      27,     7,    27,     8,    67,     9,   190,    10,    11,   196,
     201,    12,    13,     1,     2,     3,     4,     5,   191,   122,
     123,   124,   125,   204,   209,     1,     2,     3,     4,     5,
     215,   206,   224,   220,   222,     6,    94,   212,     7,   166,
       8,   188,     9,   133,    10,    11,   161,     6,    12,    13,
       7,    81,     8,     0,     9,   195,    10,    11,     0,     0,
      12,    13,     1,     2,     3,     4,     5,   207,     0,     0,
       0,     0,     0,     0,     1,     2,     3,     4,     5,     0,
       0,     0,     0,     0,     6,     0,     0,     7,     0,     8,
       0,     9,     0,    10,    11,     0,     6,    12,    13,     7,
       0,     8,     0,     9,   218,    10,    11,     0,     0,    12,
      13,     1,     2,     3,     4,     5,   223,     0,     0,     0,
       0,     0,     0,     1,     2,     3,     4,     5,     0,     0,
       0,     0,     0,     6,     0,     0,     7,     0,     8,     0,
       9,     0,    10,    11,     0,     6,    12,    13,     7,     0,
       8,     0,     9,   225,    10,    11,     0,     0,    12,    13,
       1,     2,     3,     4,     5,     0,    43,     0,     0,     0,
      65,     0,    45,     0,    46,     0,     1,     2,     3,     4,
       5,     0,     6,     0,     0,     7,     0,     8,    47,     9,
      30,    10,    11,     0,     0,    12,    13,     0,     6,    83,
      84,     7,     0,     8,    67,     9,     0,    10,    11,    83,
      84,    12,    13,     0,   119,    31,    32,    33,    34,    35,
      36,    37,   106,   107,   108,   109,   110,   111,     0,     0,
       0,     0,   106,   107,   108,   109,   110,   111,    43,     0,
       0,     0,    44,     0,    45,    43,    46,   143,     0,    44,
       0,    45,     0,    46,   145,    43,     0,     0,    43,    44,
      47,    45,    65,    46,    45,     0,    46,    47,    31,    32,
      33,    34,    35,    36,    37,     0,     0,    47,     0,     0,
      47
};

static const yytype_int16 yycheck[] =
{
       0,    39,    40,    61,     7,   177,    12,    14,    22,    13,
      38,    25,    67,    41,   186,     7,    55,    13,   190,   191,
       7,     3,     4,   195,    30,     3,     4,    33,    34,    35,
      36,    37,    78,     7,    14,   207,    25,    65,    44,    43,
       7,    21,    22,    23,    24,    25,   218,    34,    55,   104,
     105,   223,   224,   225,    25,    55,     8,    95,     8,    65,
       8,    67,     0,    43,    92,    47,    46,     8,    48,    47,
      50,    42,    52,    53,    25,     8,    56,    57,    78,     3,
       4,     3,     4,    45,   130,    17,    92,    39,    40,    39,
      40,    39,    40,    99,    39,    40,    20,   155,   104,   105,
     106,   107,   108,   109,   110,   111,    39,    40,     7,   147,
     156,   157,   151,     7,   152,   153,     3,   163,    83,    84,
       7,    25,     9,    10,    11,    12,   165,     3,    13,     8,
     130,     7,     8,     9,     8,    11,   182,    34,    25,   178,
     179,     3,     4,   149,    25,   184,     8,     5,     6,    25,
      13,   151,   158,     8,    41,    25,   156,   157,    16,   205,
     198,    34,   201,   163,   170,   165,   194,    20,   214,    13,
     216,   209,    13,   211,   180,    20,   215,    45,   178,   179,
      13,   220,   182,   222,   184,    34,     3,    25,    45,    14,
       7,    45,     9,    10,    11,     8,    21,    22,    23,    24,
      25,   201,    54,    45,    13,   205,    49,     7,    25,    21,
      22,    23,    24,    45,   214,   215,   216,     7,    43,    13,
     220,    46,   222,    48,    41,    50,    14,    52,    53,     9,
      45,    56,    57,    21,    22,    23,    24,    25,    14,    85,
      86,    87,    88,     8,    13,    21,    22,    23,    24,    25,
      45,    44,    14,    45,    45,    43,    59,   206,    46,   155,
      48,   176,    50,    99,    52,    53,   150,    43,    56,    57,
      46,    43,    48,    -1,    50,    14,    52,    53,    -1,    -1,
      56,    57,    21,    22,    23,    24,    25,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    48,
      -1,    50,    -1,    52,    53,    -1,    43,    56,    57,    46,
      -1,    48,    -1,    50,    14,    52,    53,    -1,    -1,    56,
      57,    21,    22,    23,    24,    25,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    48,    -1,
      50,    -1,    52,    53,    -1,    43,    56,    57,    46,    -1,
      48,    -1,    50,    14,    52,    53,    -1,    -1,    56,    57,
      21,    22,    23,    24,    25,    -1,     3,    -1,    -1,    -1,
       7,    -1,     9,    -1,    11,    -1,    21,    22,    23,    24,
      25,    -1,    43,    -1,    -1,    46,    -1,    48,    25,    50,
       7,    52,    53,    -1,    -1,    56,    57,    -1,    43,     3,
       4,    46,    -1,    48,    41,    50,    -1,    52,    53,     3,
       4,    56,    57,    -1,     8,    32,    33,    34,    35,    36,
      37,    38,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,     3,    -1,
      -1,    -1,     7,    -1,     9,     3,    11,    12,    -1,     7,
      -1,     9,    -1,    11,    12,     3,    -1,    -1,     3,     7,
      25,     9,     7,    11,     9,    -1,    11,    25,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    25,    -1,    -1,
      25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    23,    24,    25,    43,    46,    48,    50,
      52,    53,    56,    57,    59,    60,    61,    62,    63,    64,
      65,    68,    69,    70,    72,    74,    75,    76,    78,    83,
       7,    32,    33,    34,    35,    36,    37,    38,     7,     7,
      13,     7,     7,     3,     7,     9,    11,    25,    76,    84,
      85,    86,    87,    25,     0,    45,    25,    42,    67,    66,
       8,    88,     8,    77,    84,     7,    10,    41,    81,    82,
      84,    84,    84,    84,    84,    81,    84,    88,    88,    81,
      25,    87,    84,     3,     4,     5,     6,    16,    17,     7,
      62,     7,    34,    25,    67,    13,    63,    73,     8,    20,
      81,    84,    82,    84,    39,    40,    26,    27,    28,    29,
      30,    31,     8,    22,    25,    71,    61,     8,     8,     8,
      85,    85,    86,    86,    86,    86,    10,    12,    81,    84,
      88,    25,     8,    77,     8,    82,    84,    82,    84,    84,
      84,    84,    84,    12,    84,    12,    84,    13,    25,    34,
      20,    45,    13,    13,    61,    20,    13,    88,    34,    84,
      25,    83,    14,    88,    88,    45,    73,    61,    61,    84,
      47,     8,    89,    61,    54,    79,    80,    14,    45,    45,
      47,    84,    13,    49,    45,     7,    14,    55,    79,    89,
      14,    14,    84,    61,     7,    14,     9,    89,    13,    89,
      89,    45,    81,    89,     8,    88,    44,    14,     8,    13,
      61,    13,    68,    89,    88,    45,    88,    61,    14,    61,
      45,    89,    45,    14,    14,    14,    89,    89,    89
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
#line 101 "Parser.y"
    {printf("Correct Syntax\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 116 "Parser.y"
    {
    if(!current_function )
    {
        fprintf(stderr,"Line %d:Return Statement not inside a function\n",yylineno);
    }
    else if(!type_compatible(current_function->type,(yyvsp[(2) - (2)].dtype)))
    {
        fprintf(stderr,"Line %d: Return type mismatch. Function %s returns %s, but returning %s\n",
        yylineno,
        current_function->name,
        type_name(current_function->type),
        type_name((yyvsp[(2) - (2)].dtype))
        );
    }
;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 132 "Parser.y"
    {
    if (!current_function) {
        fprintf(stderr, "Line %d: Return statement not inside a function\n", yylineno);
    } else if (current_function->type != SYM_VOID) {
        fprintf(stderr, "Line %d: Function '%s' should return %s\n",
                yylineno, current_function->name,
                type_name(current_function->type));
    }
;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 145 "Parser.y"
    { (yyval.dtype) = SYM_INT;  current_type= SYM_INT; current_kind =VAR;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 146 "Parser.y"
    { (yyval.dtype) = SYM_FLOAT; current_type= SYM_FLOAT; current_kind =VAR; ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 147 "Parser.y"
    { (yyval.dtype) = SYM_BOOL; current_type= SYM_BOOL; current_kind =VAR; ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 148 "Parser.y"
    { (yyval.dtype) = SYM_STRING;  current_type= SYM_STRING; current_kind =VAR; ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 154 "Parser.y"
    {
        current_type = (yyvsp[(1) - (2)].dtype);
        current_kind = SYM_CONST;
    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 172 "Parser.y"
    {current_kind = SYM_CONST;;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 177 "Parser.y"
    { //Multiple declaration check , Symbol insertion
        if (lookup_current((yyvsp[(1) - (1)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n ",yylineno,(yyvsp[(1) - (1)].str));
        } 
        else {
            Symbol* s = create_symbol((yyvsp[(1) - (1)].str), current_type, current_kind, false, NULL);
            insert(s, current_scope);
        }
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 186 "Parser.y"
    {
        if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,(yyvsp[(1) - (3)].str));
        } 
        else if (!type_compatible(current_type,(yyvsp[(3) - (3)].dtype)))
        {
            fprintf(stderr,"Line %d:Type mismatch: cannot assign %s to %s\n",yylineno,type_name((yyvsp[(3) - (3)].dtype)),type_name(current_type));
        }
        else {
            Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
            insert(s, current_scope);   
        }
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 200 "Parser.y"
    { 
        if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n ",yylineno,(yyvsp[(1) - (3)].str));
        } 
        else if (!type_compatible(current_type,SYM_BOOL))
        {
            fprintf(stderr,"Line %d:Type mismatch: cannot assign %s to %s\n",yylineno,type_name((yyvsp[(3) - (3)].b)),type_name(current_type));
        }
        else {
            Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
            insert(s, current_scope);
        }
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 213 "Parser.y"
    { 
    if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
        fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,(yyvsp[(1) - (3)].str));
    } 
    else if (!type_compatible(current_type, SYM_STRING))
    {
        // ERROR WAS HERE: changed $3 to current_type
        fprintf(stderr,"Line %d:Type mismatch: cannot assign string to %s\n", yylineno, type_name(current_type));
    }
    else {
        Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
        insert(s, current_scope);
    }
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 227 "Parser.y"
    { //Multiple declaration check , Symbol insertion
        if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,(yyvsp[(1) - (3)].str));
        } 
        else if (!type_compatible(current_type,(yyvsp[(3) - (3)].dtype)))
        {
            fprintf(stderr,"Line %d:Type mismatch: cannot assign %s to %s\n",yylineno,type_name((yyvsp[(3) - (3)].dtype)),type_name(current_type));
        }
        else {
            Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
            insert(s, current_scope);
        }
    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 277 "Parser.y"
    {
        if ((yyvsp[(4) - (6)].dtype) != SYM_INT || (yyvsp[(6) - (6)].dtype) != SYM_INT) 
        {
            fprintf(stderr, "Line %d: For loop range must be Integers\n", yylineno);
        }
        if (lookup_current((yyvsp[(2) - (6)].str), current_scope)) {
            fprintf(stderr,"Line %d:iterator %s has been declared before \n",yylineno,(yyvsp[(2) - (6)].str));
        }  
        else {
            Symbol* s = create_symbol((yyvsp[(2) - (6)].str), SYM_INT, VAR, true, NULL);
            insert(s, current_scope);
            s->used=true;
        }
    ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 292 "Parser.y"
    {
    if ((yyvsp[(3) - (5)].dtype) != SYM_INT || (yyvsp[(5) - (5)].dtype) != SYM_INT) 
    {
        fprintf(stderr, "Line %d: For loop range must be Integers\n", yylineno);
    }
    Symbol* s = lookup((yyvsp[(1) - (5)].str), current_scope);
    if (!s) {
        fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (5)].str));
    }  
    else {
        s->initialized = true;
        s->used=true;
    }
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 318 "Parser.y"
    {
        current_type = (yyvsp[(1) - (2)].dtype);
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

  case 40:

/* Line 1455 of yacc.c  */
#line 329 "Parser.y"
    {
        current_type = (yyvsp[(1) - (4)].dtype);
        if (lookup_current((yyvsp[(2) - (4)].str), current_scope)) {
            fprintf(stderr,"Line %d:Duplicate parameter name  %s\n",yylineno,(yyvsp[(2) - (4)].str));
        } else {
            Symbol* p = create_symbol((yyvsp[(2) - (4)].str), current_type, VAR, true, NULL);
            insert(p, current_scope);
            append_param((yyvsp[(2) - (4)].str), current_function->params);  
        }
    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 342 "Parser.y"
    {
          
            if (lookup_current((yyvsp[(2) - (3)].str), current_scope))
                fprintf(stderr,"Line %d:Function  %s redeclared \n",yylineno,(yyvsp[(2) - (3)].str));
            else {
                ParamList* plist = create_param_list();   
                Symbol* f = create_symbol((yyvsp[(2) - (3)].str), (yyvsp[(1) - (3)].dtype), FUNC, true, plist);
                insert(f, current_scope);
                current_function = f;            
            }
        ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 353 "Parser.y"
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

  case 45:

/* Line 1455 of yacc.c  */
#line 378 "Parser.y"
    {
        Symbol* f = lookup((yyvsp[(1) - (4)].str), current_scope);
        if (!f)
            fprintf( stderr,"Line %d:Function %s not defined \n",yylineno,(yyvsp[(1) - (4)].str));
        else if (f->kind != FUNC)
            fprintf(stderr,"Line %d:Identifier %s is not a function\n",yylineno,(yyvsp[(1) - (4)].str));
        else 
           {f->used=true;
           (yyval.dtype)=f->type;}
        ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 388 "Parser.y"
    {
        Symbol* f = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!f)
            fprintf( stderr,"Line %d:Function %s not defined \n",yylineno,(yyvsp[(1) - (3)].str));
        else if (f->kind != FUNC)
            fprintf(stderr,"Line %d:Identifier %s is not a function\n",yylineno,(yyvsp[(1) - (3)].str));
        else 
           {
                f->used=true;
                (yyval.dtype)=f->type;
           }
        
    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 412 "Parser.y"
    { //net2aked en identifier of type int 3lshan manensash
        Symbol* s= lookup((yyvsp[(3) - (16)].str), current_scope);
        if(!s){
            fprintf(stderr,"Line %d:%s is not declared\n",yylineno,(yyvsp[(3) - (16)].str));
        }
        else if (s->type !=SYM_INT)
        {
            fprintf(stderr,"Line %d: Variable %s must be integer",yylineno, (yyvsp[(3) - (16)].str));
        }
        else {
            s->used=true;
        }
    ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 428 "Parser.y"
    {
        Symbol* s= lookup((yyvsp[(3) - (9)].str), current_scope);
        if(!s){
            fprintf(stderr,"Line %d:%s is not declared\n",yylineno, (yyvsp[(3) - (9)].str));
        }
        else if (s->type !=SYM_INT)
        {
            fprintf(stderr,"Line %d: Variable %s must be integer",yylineno, (yyvsp[(3) - (9)].str));
        }
        else {
            s->used=true;
        }
  ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 453 "Parser.y"
    {
     if((yyvsp[(1) - (3)].dtype) != SYM_BOOL || (yyvsp[(3) - (3)].dtype)!=SYM_BOOL)
    {
       fprintf(stderr,"Line %d: %s or %s are not boolean operands \n",yylineno,(yyvsp[(1) - (3)].dtype),(yyvsp[(3) - (3)].dtype));
        (yyval.dtype)=SYM_ERROR;
    }
    else (yyval.dtype)= SYM_BOOL;
        
;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 463 "Parser.y"
    {
    if((yyvsp[(1) - (3)].dtype) != SYM_BOOL || (yyvsp[(3) - (3)].dtype)!=SYM_BOOL)
    {
       fprintf(stderr,"Line %d: %s or %s are not boolean operands \n",yylineno,(yyvsp[(1) - (3)].dtype),(yyvsp[(3) - (3)].dtype));
        (yyval.dtype)=SYM_ERROR;
    }
    else (yyval.dtype)= SYM_BOOL;
        
;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 473 "Parser.y"
    {
     if((yyvsp[(2) - (2)].dtype) != SYM_BOOL)
    {
        fprintf(stderr,"Line %d: %s is not a boolean operand\n",yylineno,(yyvsp[(2) - (2)].dtype));
        (yyval.dtype)=SYM_ERROR;
    }
    else (yyval.dtype)= SYM_BOOL;
;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 482 "Parser.y"
    {
    (yyval.dtype)=(yyvsp[(1) - (1)].dtype);
;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 487 "Parser.y"
    {
    if((yyvsp[(1) - (3)].dtype)== SYM_ERROR || (yyvsp[(3) - (3)].dtype) == SYM_ERROR)
    {
        (yyval.dtype)=SYM_ERROR;
    }
    else if((yyvsp[(1) - (3)].dtype) != SYM_BOOL || (yyvsp[(3) - (3)].dtype)!=SYM_BOOL)
    {
        fprintf(stderr,"Line %d: %s or %s are not boolean operands \n",yylineno,(yyvsp[(1) - (3)].dtype),(yyvsp[(3) - (3)].dtype));
        (yyval.dtype)=SYM_ERROR;
    }
    else (yyval.dtype)= SYM_BOOL;
;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 500 "Parser.y"
    { 
    if((yyvsp[(1) - (3)].dtype)== SYM_ERROR || (yyvsp[(3) - (3)].dtype) == SYM_ERROR)
    {
        (yyval.dtype)=SYM_ERROR;
    }
    else if((yyvsp[(1) - (3)].dtype) != SYM_BOOL || (yyvsp[(3) - (3)].dtype)!=SYM_BOOL)
    {
        fprintf(stderr,"Line %d: %s or %s are not boolean operands \n",yylineno,(yyvsp[(1) - (3)].dtype),(yyvsp[(3) - (3)].dtype));
        (yyval.dtype)=SYM_ERROR;
    }
    else (yyval.dtype)= SYM_BOOL;
;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 513 "Parser.y"
    { 
    if((yyvsp[(2) - (2)].dtype)==SYM_ERROR) (yyval.dtype)=SYM_ERROR;
    else if((yyvsp[(2) - (2)].dtype) != SYM_BOOL)
    {
        fprintf(stderr,"Line %d: %s is not a boolean operand\n",yylineno,(yyvsp[(2) - (2)].dtype));
        (yyval.dtype)=SYM_ERROR;
    }
    else (yyval.dtype)= SYM_BOOL;
;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 524 "Parser.y"
    {(yyval.dtype)=(yyvsp[(2) - (3)].dtype);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 526 "Parser.y"
    {
    if (((yyvsp[(1) - (3)].dtype) == SYM_INT || (yyvsp[(1) - (3)].dtype) == SYM_FLOAT) &&
    ((yyvsp[(3) - (3)].dtype) == SYM_INT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT))
    (yyval.dtype) = SYM_BOOL;
else {
    fprintf(stderr,"Line %d:Invalid comparison operands. Cannot compare %s to %s",yylineno,type_name((yyvsp[(1) - (3)].dtype)),type_name((yyvsp[(3) - (3)].dtype)));
    (yyval.dtype) = SYM_ERROR;
}
;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 536 "Parser.y"
    {
    if (((yyvsp[(1) - (3)].dtype) == SYM_INT || (yyvsp[(1) - (3)].dtype) == SYM_FLOAT) &&
    ((yyvsp[(3) - (3)].dtype) == SYM_INT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT))
    (yyval.dtype) = SYM_BOOL;
else {
    fprintf(stderr,"Line %d:Invalid comparison operands. Cannot compare %s to %s",yylineno,type_name((yyvsp[(1) - (3)].dtype)),type_name((yyvsp[(3) - (3)].dtype)));
    (yyval.dtype) = SYM_ERROR;
}
;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 546 "Parser.y"
    {
    if (((yyvsp[(1) - (3)].dtype) == SYM_INT || (yyvsp[(1) - (3)].dtype) == SYM_FLOAT) &&
    ((yyvsp[(3) - (3)].dtype) == SYM_INT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT))
    (yyval.dtype) = SYM_BOOL;
else {
    fprintf(stderr,"Line %d:Invalid comparison operands. Cannot compare %s to %s",yylineno,type_name((yyvsp[(1) - (3)].dtype)),type_name((yyvsp[(3) - (3)].dtype)));
    (yyval.dtype) = SYM_ERROR;
}
;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 556 "Parser.y"
    {
    if (((yyvsp[(1) - (3)].dtype) == SYM_INT || (yyvsp[(1) - (3)].dtype) == SYM_FLOAT) &&
    ((yyvsp[(3) - (3)].dtype) == SYM_INT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT))
    (yyval.dtype) = SYM_BOOL;
else {
    fprintf(stderr,"Line %d:Invalid comparison operands. Cannot compare %s to %s",yylineno,type_name((yyvsp[(1) - (3)].dtype)),type_name((yyvsp[(3) - (3)].dtype)));
    (yyval.dtype) = SYM_ERROR;
}
;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 566 "Parser.y"
    {
    if((yyvsp[(1) - (3)].dtype) ==SYM_BOOL) (yyval.dtype)=SYM_BOOL;
    else
    {
        fprintf(stderr,"Line %d:Invalid comparison operands. Cannot %s to boolean",yylineno,type_name((yyvsp[(1) - (3)].dtype)));
        (yyval.dtype)=SYM_ERROR;
    }
;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 575 "Parser.y"
    {
    if (((yyvsp[(1) - (3)].dtype) == SYM_INT || (yyvsp[(1) - (3)].dtype) == SYM_FLOAT) &&
    ((yyvsp[(3) - (3)].dtype) == SYM_INT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT))
    (yyval.dtype) = SYM_BOOL;
else {
    fprintf(stderr,"Line %d:Invalid comparison operands. Cannot compare %s to %s",yylineno,type_name((yyvsp[(1) - (3)].dtype)),type_name((yyvsp[(3) - (3)].dtype)));
    (yyval.dtype) = SYM_ERROR;
}
;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 585 "Parser.y"
    {
    if((yyvsp[(1) - (3)].dtype) ==SYM_BOOL) (yyval.dtype)=SYM_BOOL;
    else
    {
        fprintf(stderr,"Line %d:Invalid comparison operands. Cannot %s to boolean",yylineno,type_name((yyvsp[(1) - (3)].dtype)));
        (yyval.dtype)=SYM_ERROR;
    }
;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 594 "Parser.y"
    {
    if ( ( ((yyvsp[(1) - (3)].dtype) == SYM_INT || (yyvsp[(1) - (3)].dtype) == SYM_FLOAT) && ((yyvsp[(3) - (3)].dtype) == SYM_INT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT) ) || 
     ( (yyvsp[(1) - (3)].dtype) == SYM_BOOL && (yyvsp[(3) - (3)].dtype) == SYM_BOOL ) )
     (yyval.dtype) = SYM_BOOL;
else {
    fprintf(stderr,"Line %d:Invalid comparison operands. Cannot compare %s to %s",yylineno,type_name((yyvsp[(1) - (3)].dtype)),type_name((yyvsp[(3) - (3)].dtype)));
    (yyval.dtype) = SYM_ERROR;
}
;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 606 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.dtype)=SYM_ERROR;
        } else {

            if(!type_compatible(s->type,(yyvsp[(3) - (3)].dtype)))
            {
                fprintf(stderr,"Line %d: Type mismatch: cannot assign %s to %s \n",yylineno,type_name((yyvsp[(3) - (3)].dtype)),type_name(s->type));
            }
            else if(s->kind==SYM_CONST)
            {
                fprintf(stderr,"Line %d:Cannot assign to const variable %s ",yylineno,(yyvsp[(1) - (3)].str));
            }
            else
            {
                s->initialized = true;
                (yyval.dtype)=s->type;
            }
        }
    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 629 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.dtype)=SYM_ERROR;
        } else {
            if(!type_compatible(s->type,SYM_STRING))
            {
                fprintf(stderr,"Line %d: Type mismatch: cannot assign string to %s \n",yylineno,type_name(s->type));
            }
            else if(s->kind==SYM_CONST)
            {
                fprintf(stderr,"Line %d:Cannot assign to const variable %s ",yylineno,(yyvsp[(1) - (3)].str));
            }
            else
            {
                s->initialized = true;
                (yyval.dtype)=s->type;
            }
        }
    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 651 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        //Symbol* s = lookup($1, current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.dtype)=SYM_ERROR;
        } else {
            if(!type_compatible(s->type,(yyvsp[(3) - (3)].dtype)))
            {
                fprintf(stderr,"Line %d: Type mismatch: cannot assign Boolean to %s \n",yylineno,type_name(s->type));
            }
            else if(s->kind==SYM_CONST)
            {
                fprintf(stderr,"Line %d:Cannot assign to const variable %s ",yylineno,(yyvsp[(1) - (3)].str));
            }
            else
            {
                s->initialized = true;
                (yyval.dtype)=s->type;
            }
        }
    ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 674 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (2)].str), current_scope);
        if (!s)
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, (yyvsp[(1) - (2)].str));
        else if (!s->initialized)
            fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, (yyvsp[(1) - (2)].str));
        else if(s->kind==SYM_CONST)
        {
            fprintf(stderr,"Line %d:Cannot assign to const variable %s ",yylineno,(yyvsp[(1) - (2)].str));
        }
        else if (s->type!=SYM_INT && s->type!= SYM_FLOAT)
            fprintf(stderr,"Line %d: Increment applied to non-numeric type %s",type_name(s->type));
    ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 688 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (2)].str), current_scope);
        if (!s)
             fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, (yyvsp[(1) - (2)].str));
        else if (!s->initialized)
            fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, (yyvsp[(1) - (2)].str));
        else if(s->kind==SYM_CONST)
        {
            fprintf(stderr,"Line %d:Cannot assign to const variable %s ",yylineno,(yyvsp[(1) - (2)].str));
        }
        else if (s->type!=SYM_INT && s->type != SYM_FLOAT)
            fprintf(stderr,"Line %d: Increment applied to non-numeric type %s",type_name(s->type));
    ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 702 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s)
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, (yyvsp[(1) - (3)].str));
        else if (!s->initialized)
           fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, (yyvsp[(1) - (3)].str));
        else if(s->kind==SYM_CONST)
        {
            fprintf(stderr,"Line %d:Cannot assign to const variable %s ",yylineno,(yyvsp[(1) - (3)].str));
        }
        else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ((yyvsp[(3) - (3)].dtype) != SYM_INT && (yyvsp[(3) - (3)].dtype) != SYM_FLOAT))
            {fprintf(stderr,"Line %d: Addition applied to non-numeric type %s",type_name(s->type));
            (yyval.dtype)=SYM_ERROR;}
        else (yyval.dtype)=s->type;

    ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 719 "Parser.y"
    {
         Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s)
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, (yyvsp[(1) - (3)].str));
        else if (!s->initialized)
           fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, (yyvsp[(1) - (3)].str));
        else if(s->kind==SYM_CONST)
        {
            fprintf(stderr,"Line %d:Cannot assign to const variable %s ",yylineno,(yyvsp[(1) - (3)].str));
        }
        else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ((yyvsp[(3) - (3)].dtype) != SYM_INT && (yyvsp[(3) - (3)].dtype) != SYM_FLOAT))
            {fprintf(stderr,"Line %d: Subtraction applied to non-numeric type %s",type_name(s->type));
            (yyval.dtype)=SYM_ERROR;}
        else (yyval.dtype)= s->type;
    ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 735 "Parser.y"
    {
         Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s)
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, (yyvsp[(1) - (3)].str));
        else if (!s->initialized)
           fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, (yyvsp[(1) - (3)].str));
        else if(s->kind==SYM_CONST)
        {
            fprintf(stderr,"Line %d:Cannot assign to const variable %s ",yylineno,(yyvsp[(1) - (3)].str));
        }
        else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ((yyvsp[(3) - (3)].dtype) != SYM_INT && (yyvsp[(3) - (3)].dtype) != SYM_FLOAT))
            fprintf(stderr,"Line %d: Multiplication applied to non-numeric type %s",type_name(s->type));

    ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 750 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s)
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, (yyvsp[(1) - (3)].str));
        else if (!s->initialized)
           fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, (yyvsp[(1) - (3)].str));
        else if(s->kind==SYM_CONST)
        {
            fprintf(stderr,"Line %d:Cannot assign to const variable %s ",yylineno,(yyvsp[(1) - (3)].str));
        }
        else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ((yyvsp[(3) - (3)].dtype) != SYM_INT && (yyvsp[(3) - (3)].dtype) != SYM_FLOAT))
            fprintf(stderr, "Line %d: Division applied to non-numeric type %s",type_name(s->type));

    ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 767 "Parser.y"
    {
    if((yyvsp[(1) - (3)].dtype)==SYM_ERROR || (yyvsp[(3) - (3)].dtype) ==SYM_ERROR)
        (yyval.dtype)=SYM_ERROR;
    else if ((yyvsp[(1) - (3)].dtype) == SYM_FLOAT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT)
        (yyval.dtype)=SYM_FLOAT;
    else if ((yyvsp[(1) - (3)].dtype) ==SYM_INT && (yyvsp[(3) - (3)].dtype) ==SYM_INT)
        (yyval.dtype)=SYM_INT;
    else
    {
        fprintf(stderr, "Line %d: Cannot add non-numeric types\n", yylineno);
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 781 "Parser.y"
    {
    if((yyvsp[(1) - (3)].dtype)==SYM_ERROR || (yyvsp[(3) - (3)].dtype) ==SYM_ERROR)
        (yyval.dtype)=SYM_ERROR;
    else if ((yyvsp[(1) - (3)].dtype) == SYM_FLOAT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT)
        (yyval.dtype)=SYM_FLOAT;
    else if ((yyvsp[(1) - (3)].dtype) ==SYM_INT && (yyvsp[(3) - (3)].dtype) ==SYM_INT)
        (yyval.dtype)=SYM_INT;
    else
    {
        fprintf(stderr, "Line %d: Cannot subtract non-numeric types\n", yylineno);
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 794 "Parser.y"
    {(yyval.dtype)=(yyvsp[(1) - (1)].dtype);;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 798 "Parser.y"
    {
    if((yyvsp[(1) - (3)].dtype)==SYM_ERROR || (yyvsp[(3) - (3)].dtype) ==SYM_ERROR)
        (yyval.dtype)=SYM_ERROR;
    else if ((yyvsp[(1) - (3)].dtype) == SYM_FLOAT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT)
        (yyval.dtype)=SYM_FLOAT;
    else if ((yyvsp[(1) - (3)].dtype) ==SYM_INT && (yyvsp[(3) - (3)].dtype) ==SYM_INT)
        (yyval.dtype)=SYM_INT;
    else
    {
        fprintf(stderr, "Line %d: Cannot multiply non-numeric types\n", yylineno);
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 812 "Parser.y"
    {
    if((yyvsp[(1) - (3)].dtype)==SYM_ERROR || (yyvsp[(3) - (3)].dtype) ==SYM_ERROR)
        (yyval.dtype)=SYM_ERROR;
    else if ((yyvsp[(1) - (3)].dtype) == SYM_FLOAT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT)
        (yyval.dtype)=SYM_FLOAT;
    else if ((yyvsp[(1) - (3)].dtype) ==SYM_INT && (yyvsp[(3) - (3)].dtype) ==SYM_INT)
        (yyval.dtype)=SYM_INT;
    else
    {
        fprintf(stderr, "Line %d: Cannot divide non-numeric types\n", yylineno);
        (yyval.dtype) = SYM_ERROR;
    }
    if((yyvsp[(3) - (3)].dtype)==0){yyerror("Division By zero"); (yyval.dtype)=SYM_ERROR;}
    // else $$=$1/$3;
;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 828 "Parser.y"
    {
    if((int)(yyvsp[(3) - (3)].dtype)==0){yyerror("Modulo By zero");}
    //else $$=(int)$1 % (int)$3;
    if((yyvsp[(1) - (3)].dtype)==SYM_ERROR || (yyvsp[(3) - (3)].dtype) ==SYM_ERROR)
        (yyval.dtype)=SYM_ERROR;
    // else if ($1 == SYM_FLOAT || $3 == SYM_FLOAT)
    //     $$=SYM_FLOAT;
    else if ((yyvsp[(1) - (3)].dtype) ==SYM_INT && (yyvsp[(3) - (3)].dtype) ==SYM_INT)
        (yyval.dtype)=SYM_INT;
    else
    {
        fprintf(stderr, "Line %d: Cannot mod non-numeric types\n", yylineno);
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 843 "Parser.y"
    {(yyval.dtype)=(yyvsp[(1) - (1)].dtype);;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 846 "Parser.y"
    {
        if ((yyvsp[(1) - (3)].dtype) == SYM_ERROR || (yyvsp[(3) - (3)].dtype) == SYM_ERROR)
            (yyval.dtype) = SYM_ERROR;
        else if ((yyvsp[(1) - (3)].dtype) == SYM_FLOAT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT)
            (yyval.dtype) = SYM_FLOAT;
        else if ((yyvsp[(1) - (3)].dtype) == SYM_INT && (yyvsp[(3) - (3)].dtype) == SYM_INT)
            (yyval.dtype) = SYM_INT;
        else {
            fprintf(stderr, "Line %d: Cannot apply power to non-numeric types\n", yylineno);
            (yyval.dtype) = SYM_ERROR;
        }
    ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 858 "Parser.y"
    { (yyval.dtype) = (yyvsp[(1) - (1)].dtype); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 860 "Parser.y"
    {(yyval.dtype)=(yyvsp[(2) - (3)].dtype);;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 862 "Parser.y"
    {
       if ((yyvsp[(2) - (2)].dtype) == SYM_ERROR)
           (yyval.dtype) = SYM_ERROR;
       else if ((yyvsp[(2) - (2)].dtype) == SYM_INT || (yyvsp[(2) - (2)].dtype) == SYM_FLOAT)
           (yyval.dtype) = (yyvsp[(2) - (2)].dtype);
       else {
           fprintf(stderr, "Line %d: Unary minus applied to non-numeric type\n", yylineno);
           (yyval.dtype) = SYM_ERROR;
       }
   ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 872 "Parser.y"
    {(yyval.dtype)=SYM_INT;;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 873 "Parser.y"
    {(yyval.dtype)=SYM_FLOAT;;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 874 "Parser.y"
    { //handles use before init.
        Symbol* s = lookup((yyvsp[(1) - (1)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  not declared\n",yylineno, (yyvsp[(1) - (1)].str));
            (yyval.dtype)=SYM_ERROR;
        }
        else if(s->type !=SYM_INT && s->type !=SYM_FLOAT && s->type !=SYM_BOOL)
        {
            fprintf(stderr,"Line %d: Unsupported type in expression\n",yylineno,(yyvsp[(1) - (1)].str));
            (yyval.dtype)=SYM_ERROR;
        }
        else
        {
            if (!s->initialized) {
           fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, (yyvsp[(1) - (1)].str));
            } else {
                s->used = true;
                (yyval.dtype)=s->type;
            }
        }
        
    ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 896 "Parser.y"
    {
    if ((yyvsp[(1) - (1)].dtype) == SYM_VOID) {
        fprintf(stderr,
            "Line %d: Void function used in expression\n", yylineno);
        (yyval.dtype) = SYM_ERROR;
    } else {
        (yyval.dtype) = (yyvsp[(1) - (1)].dtype);
    }
;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 908 "Parser.y"
    {
        current_scope = create_table(211, current_scope);
    ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 914 "Parser.y"
    {
        SymbolTable* old = current_scope;
        current_scope = current_scope->parent;
        report_unused(current_scope);
        //print_table(current_scope);
        free_table(old);
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2703 "Parser.tab.c"
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
#line 923 "Parser.y"


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
    
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("Error opening file");
            return 1;
        }
    }

    if (yyparse() == 0) {
        //report_unused(current_scope);
        free_table(current_scope);
        return 0;
    }
    
    return 1;
}
