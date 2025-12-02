
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
    void yyerror(const char *s);
    int yylex(void);
    extern FILE *yyin;
    


/* Line 189 of yacc.c  */
#line 85 "Parser.tab.c"

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
#line 14 "Parser.y"

    int i;
    float f;
    char * str;
    _Bool b;



/* Line 214 of yacc.c  */
#line 187 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 199 "Parser.tab.c"

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
#define YYFINAL  41
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   538

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNRULES -- Number of states.  */
#define YYNSTATES  241

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
      22,    24,    26,    28,    30,    32,    34,    36,    38,    40,
      43,    46,    49,    69,    78,    96,   110,   119,   126,   131,
     134,   145,   152,   158,   160,   164,   168,   172,   176,   184,
     187,   192,   205,   217,   222,   224,   228,   241,   243,   247,
     256,   265,   274,   283,   287,   291,   294,   296,   300,   304,
     308,   312,   316,   320,   324,   326,   330,   334,   338,   341,
     344,   348,   352,   356,   360,   364,   368,   370,   374,   378,
     382,   384,   388,   390,   394,   397,   399
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    61,    45,    -1,    62,    -1,
      61,    45,    62,    -1,    82,    -1,    65,    -1,    66,    -1,
      72,    -1,    77,    -1,    75,    -1,    69,    -1,    67,    -1,
      74,    -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,
      63,    42,    -1,    63,    71,    -1,    64,    71,    -1,    43,
       7,    80,     8,    13,    61,    45,    14,    44,    43,    13,
      61,    45,    14,    44,    13,    61,    45,    14,    -1,    43,
       7,    80,     8,    13,    61,    45,    14,    -1,    43,     7,
      80,     8,    13,    61,    45,    14,    44,    43,     7,    80,
       8,    13,    61,    45,    14,    -1,    43,     7,    80,     8,
      13,    61,    45,    14,    44,    13,    61,    45,    14,    -1,
      48,    13,    68,    14,    49,     7,    80,     8,    -1,    61,
      45,    50,    45,    61,    45,    -1,    61,    45,    50,    45,
      -1,    61,    45,    -1,    46,     7,    70,    20,    82,     8,
      13,    61,    45,    14,    -1,    22,    25,    34,    83,    47,
      83,    -1,    25,    34,    83,    47,    83,    -1,    25,    -1,
      25,    34,    25,    -1,    25,    34,    83,    -1,    25,    34,
      12,    -1,    25,    34,    10,    -1,    52,     7,    83,     8,
      13,    68,    14,    -1,    63,    25,    -1,    63,    25,    20,
      73,    -1,    63,    25,     7,    73,     8,    13,    61,    45,
      56,    83,    45,    14,    -1,    57,    25,     7,    73,     8,
      13,    61,    45,    56,    45,    14,    -1,    25,     7,    76,
       8,    -1,    83,    -1,    83,    20,    76,    -1,    53,     7,
      25,     8,    13,    78,    55,    13,    61,    45,    14,    14,
      -1,    79,    -1,    79,    45,    78,    -1,    54,     7,    12,
       8,    13,    61,    45,    14,    -1,    54,     7,     9,     8,
      13,    61,    45,    14,    -1,    54,     7,    10,     8,    13,
      61,    45,    14,    -1,    54,     7,    11,     8,    13,    61,
      45,    14,    -1,    80,    39,    81,    -1,    80,    40,    81,
      -1,    41,    81,    -1,    81,    -1,     7,    80,     8,    -1,
      83,    28,    83,    -1,    83,    26,    83,    -1,    83,    27,
      83,    -1,    83,    29,    83,    -1,    83,    30,    83,    -1,
      83,    31,    83,    -1,    75,    -1,    25,    34,    83,    -1,
      25,    34,    10,    -1,    25,    34,    80,    -1,    25,    32,
      -1,    25,    33,    -1,    25,    36,    83,    -1,    25,    35,
      83,    -1,    25,    37,    83,    -1,    25,    38,    83,    -1,
      83,     4,    84,    -1,    83,     3,    84,    -1,    84,    -1,
      84,     5,    85,    -1,    84,     6,    85,    -1,    84,    16,
      85,    -1,    85,    -1,    86,    17,    85,    -1,    86,    -1,
       7,    83,     8,    -1,     3,    86,    -1,     9,    -1,    11,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    79,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    93,    94,    95,    96,    99,
     100,   101,   104,   105,   106,   107,   109,   110,   111,   112,
     115,   116,   117,   119,   120,   121,   122,   123,   125,   127,
     128,   131,   132,   135,   136,   136,   137,   138,   138,   139,
     140,   141,   142,   145,   146,   147,   147,   150,   151,   152,
     153,   154,   155,   156,   157,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   169,   170,   171,   173,   174,   175,
     176,   178,   179,   181,   182,   183,   184
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
  "declaration", "Ifstmt", "repeat", "inner_loop", "forloop", "iterator",
  "inner_declaration", "whileloop", "parameters", "function",
  "function_call", "list", "switchstmt", "case_structure", "inner_case",
  "condition", "inner_condition", "assignment", "EXPR", "T", "M", "G", 0
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
      62,    62,    62,    62,    62,    63,    63,    63,    63,    64,
      65,    65,    66,    66,    66,    66,    67,    68,    68,    68,
      69,    70,    70,    71,    71,    71,    71,    71,    72,    73,
      73,    74,    74,    75,    76,    76,    77,    78,    78,    79,
      79,    79,    79,    80,    80,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    84,    84,    84,
      84,    85,    85,    86,    86,    86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,    19,     8,    17,    13,     8,     6,     4,     2,
      10,     6,     5,     1,     3,     3,     3,     3,     7,     2,
       4,    12,    11,     4,     1,     3,    12,     1,     3,     8,
       8,     8,     8,     3,     3,     2,     1,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       1,     3,     1,     3,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    15,    16,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     4,     0,     0,     7,     8,
      13,    12,     9,    14,    11,    10,     6,     0,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     3,    33,    19,    20,    33,    21,     0,     0,
      85,    86,     0,    44,    76,    80,    82,     0,    66,     0,
       0,    64,    67,    56,    65,    71,    70,    72,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,     0,    84,     0,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,    37,    36,    34,    35,    83,    75,
      74,    45,    77,    78,    79,    81,    57,    53,    54,    59,
      60,    58,    61,    62,    63,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,    32,     0,     0,     0,    38,     0,     0,     0,
      40,     0,     0,    23,    31,     0,    27,    26,     0,     0,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    42,     0,     0,     0,     0,     0,     0,
       0,     0,    46,    41,    25,     0,     0,    50,    51,    52,
      49,     0,     0,     0,     0,     0,     0,    24,     0,     0,
      22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,    74,    15,    16,    17,    18,    19,    20,
      75,    21,    73,    45,    22,   112,    23,    24,    52,    25,
     155,   156,    62,    63,    26,    70,    54,    55,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -78
static const yytype_int16 yypact[] =
{
     450,   -78,   -78,   -78,   -78,   133,     2,    18,    10,    28,
      48,    25,    57,   -78,    24,   -78,     4,    50,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   153,   -78,   -78,
      29,   153,   153,   153,   153,    49,    12,   450,   153,    63,
      87,   -78,   450,    42,   -78,   -78,    76,   -78,   153,   153,
     -78,   -78,    89,    88,    93,   -78,   104,    49,   -78,   117,
     172,   -78,    33,   -78,   190,   114,   114,   114,   114,     5,
     190,   101,   107,   118,    97,   135,   103,   139,   244,   -78,
     244,   513,   -78,   225,   -78,   153,   153,   153,   153,   153,
     153,   153,    22,   484,   -78,   172,   172,   153,   153,   153,
     153,   153,   153,   137,   119,   153,   127,   393,   112,   161,
     163,   155,   176,   178,   -78,   -78,   -78,   114,   -78,    93,
      93,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   114,
     114,   114,   114,   114,   114,   450,   153,     1,   432,   179,
     147,   195,   450,   150,   186,   214,   217,   193,    16,   153,
     221,   450,    49,   194,   232,   185,   198,   244,   450,   450,
      79,   153,   114,   450,   200,    39,   -78,   267,   235,   150,
     -78,   205,   206,   211,   114,   212,   450,   -78,   248,   261,
     262,   272,   450,   -78,   401,   438,     8,    91,   269,   270,
     274,   275,   240,   247,   153,   450,    46,   -78,   450,   450,
     450,   450,   189,   280,    23,   252,    49,   450,   254,   255,
     259,   260,   292,   -78,   304,   201,    56,   281,   238,   250,
     287,   299,   -78,   -78,   -78,   276,   336,   -78,   -78,   -78,
     -78,   450,   283,   284,   306,   348,   450,   -78,   286,   385,
     -78
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -78,   -78,   -78,     0,   -30,   -70,   -78,   -78,   -78,   -78,
     183,   -78,   -78,   311,   -78,   -77,   -78,   -29,   245,   -78,
     165,   -78,   -33,   -53,   230,   -16,    43,   226,   289
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      14,    61,    69,   113,    85,    86,    61,    94,   111,    35,
     111,    53,    79,   103,    64,    65,    66,    67,    68,    85,
      86,   195,    76,    37,    92,    36,    85,    86,    61,    43,
     126,    61,    48,    83,    71,    38,    57,    72,    50,    58,
      51,    93,   127,   128,    95,    96,    44,   177,   149,    80,
      40,   196,    48,   206,    59,    39,    57,    41,    50,   207,
      51,    95,    96,   161,   225,   117,    61,    61,   214,    42,
      60,    53,    95,    96,    59,    46,    81,    79,    95,    96,
     170,   129,   130,   131,   132,   133,   134,   111,    77,   137,
      60,    85,    86,   173,    78,    95,    96,    84,    88,    89,
       1,     2,     3,     4,     5,   197,    85,    86,    87,    90,
      81,   109,     1,     2,     3,     4,     5,    85,    86,   165,
     148,    91,     6,    61,    27,     7,   104,     8,   119,   120,
      79,     9,    10,   162,     6,   147,    11,     7,   106,     8,
      27,   105,   107,     9,    10,   174,    79,   110,    11,   108,
     135,   164,   138,   136,    79,    79,    48,    79,   171,   172,
      49,   141,    50,   175,    51,    28,    29,    30,    31,    32,
      33,    34,    79,   216,   142,    48,   143,    61,   204,    57,
     144,    50,   192,    51,   145,    79,   146,   150,    79,    79,
      79,    79,   151,    85,    86,   205,    79,    59,   208,   209,
     210,   211,   152,   212,   154,    79,   157,   217,   166,    79,
       1,     2,     3,     4,     5,   224,    97,    98,    99,   100,
     101,   102,     1,     2,     3,     4,     5,   158,    85,    86,
     159,   233,     6,   118,   163,     7,   238,     8,   160,   167,
     168,     9,    10,   169,     6,   176,    11,     7,   182,     8,
     184,   185,   227,     9,    10,   186,   188,   187,    11,     1,
       2,     3,     4,     5,   228,     1,     2,     3,     4,   189,
     190,     1,     2,     3,     4,     5,   178,   179,   180,   181,
     191,     6,   198,   199,     7,   202,     8,   200,   201,   231,
       9,    10,   203,     6,   213,    11,     7,   215,     8,   218,
     219,   229,     9,    10,   220,   221,   222,    11,     1,     2,
       3,     4,     5,   230,   122,   123,   124,   125,   223,   236,
       1,     2,     3,     4,     5,   153,   226,   234,    47,   235,
       6,   239,   121,     7,   183,     8,   139,    82,     0,     9,
      10,     0,     6,     0,    11,     7,     0,     8,     0,     0,
     232,     9,    10,     0,     0,     0,    11,     1,     2,     3,
       4,     5,   237,     0,     0,     0,     0,     0,     0,     1,
       2,     3,     4,     5,     0,     0,     0,     0,     0,     6,
       0,     0,     7,     0,     8,     0,     0,     0,     9,    10,
       0,     6,     0,    11,     7,     0,     8,     0,     0,   240,
       9,    10,     0,     0,     0,    11,     1,     2,     3,     4,
       5,     0,     0,     0,     1,     2,     3,     4,     5,     0,
       0,     0,     1,     2,     3,     4,     5,     0,     6,     0,
       0,     7,     0,     8,     0,     0,     6,     9,    10,     7,
       0,     8,    11,   140,     6,     9,    10,     7,     0,     8,
      11,     0,     0,     9,    10,     0,     0,   193,    11,     1,
       2,     3,     4,     5,    28,    29,    30,    31,    32,    33,
      34,     1,     2,     3,     4,     5,     0,     0,     0,     0,
       0,     6,     0,     0,     7,     0,     8,    85,    86,     0,
       9,    10,   118,     6,   194,    11,     7,     0,     8,     0,
       0,     0,     9,    10,     0,     0,     0,    11,     0,     0,
      97,    98,    99,   100,   101,   102,    48,     0,     0,     0,
      49,     0,    50,   114,    51,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   116
};

static const yytype_int16 yycheck[] =
{
       0,    30,    35,    80,     3,     4,    35,    60,    78,     7,
      80,    27,    42,     8,    30,    31,    32,    33,    34,     3,
       4,    13,    38,    13,    57,     7,     3,     4,    57,    25,
       8,    60,     3,    49,    22,     7,     7,    25,     9,    10,
      11,    57,    95,    96,    39,    40,    42,     8,    47,     7,
      25,    43,     3,     7,    25,     7,     7,     0,     9,    13,
      11,    39,    40,    47,     8,    81,    95,    96,    45,    45,
      41,    87,    39,    40,    25,    25,    34,   107,    39,    40,
     157,    97,    98,    99,   100,   101,   102,   157,    25,   105,
      41,     3,     4,    14,     7,    39,    40,     8,     5,     6,
      21,    22,    23,    24,    25,    14,     3,     4,    20,    16,
      34,     8,    21,    22,    23,    24,    25,     3,     4,   152,
     136,    17,    43,   152,     7,    46,    25,    48,    85,    86,
     160,    52,    53,   149,    43,   135,    57,    46,    20,    48,
       7,    34,    45,    52,    53,   161,   176,     8,    57,    14,
      13,   151,    25,    34,   184,   185,     3,   187,   158,   159,
       7,    49,     9,   163,    11,    32,    33,    34,    35,    36,
      37,    38,   202,   206,    13,     3,    13,   206,   194,     7,
      25,     9,   182,    11,     8,   215,     8,     8,   218,   219,
     220,   221,    45,     3,     4,   195,   226,    25,   198,   199,
     200,   201,     7,    14,    54,   235,    20,   207,    14,   239,
      21,    22,    23,    24,    25,    14,    26,    27,    28,    29,
      30,    31,    21,    22,    23,    24,    25,    13,     3,     4,
      13,   231,    43,     8,    13,    46,   236,    48,    45,     7,
      55,    52,    53,    45,    43,    45,    57,    46,    13,    48,
      45,    45,    14,    52,    53,    44,     8,    45,    57,    21,
      22,    23,    24,    25,    14,    21,    22,    23,    24,     8,
       8,    21,    22,    23,    24,    25,     9,    10,    11,    12,
       8,    43,    13,    13,    46,    45,    48,    13,    13,    13,
      52,    53,    45,    43,    14,    57,    46,    45,    48,    45,
      45,    14,    52,    53,    45,    45,    14,    57,    21,    22,
      23,    24,    25,    14,    88,    89,    90,    91,    14,    13,
      21,    22,    23,    24,    25,   142,    45,    44,    17,    45,
      43,    45,    87,    46,   169,    48,   106,    48,    -1,    52,
      53,    -1,    43,    -1,    57,    46,    -1,    48,    -1,    -1,
      14,    52,    53,    -1,    -1,    -1,    57,    21,    22,    23,
      24,    25,    14,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,    -1,    48,    -1,    -1,    -1,    52,    53,
      -1,    43,    -1,    57,    46,    -1,    48,    -1,    -1,    14,
      52,    53,    -1,    -1,    -1,    57,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    -1,    43,    -1,
      -1,    46,    -1,    48,    -1,    -1,    43,    52,    53,    46,
      -1,    48,    57,    50,    43,    52,    53,    46,    -1,    48,
      57,    -1,    -1,    52,    53,    -1,    -1,    56,    57,    21,
      22,    23,    24,    25,    32,    33,    34,    35,    36,    37,
      38,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    46,    -1,    48,     3,     4,    -1,
      52,    53,     8,    43,    56,    57,    46,    -1,    48,    -1,
      -1,    -1,    52,    53,    -1,    -1,    -1,    57,    -1,    -1,
      26,    27,    28,    29,    30,    31,     3,    -1,    -1,    -1,
       7,    -1,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    23,    24,    25,    43,    46,    48,    52,
      53,    57,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    69,    72,    74,    75,    77,    82,     7,    32,    33,
      34,    35,    36,    37,    38,     7,     7,    13,     7,     7,
      25,     0,    45,    25,    42,    71,    25,    71,     3,     7,
       9,    11,    76,    83,    84,    85,    86,     7,    10,    25,
      41,    75,    80,    81,    83,    83,    83,    83,    83,    80,
      83,    22,    25,    70,    61,    68,    83,    25,     7,    62,
       7,    34,    86,    83,     8,     3,     4,    20,     5,     6,
      16,    17,    80,    83,    81,    39,    40,    26,    27,    28,
      29,    30,    31,     8,    25,    34,    20,    45,    14,     8,
       8,    63,    73,    73,    10,    12,    25,    83,     8,    84,
      84,    76,    85,    85,    85,    85,     8,    81,    81,    83,
      83,    83,    83,    83,    83,    13,    34,    83,    25,    82,
      50,    49,    13,    13,    25,     8,     8,    61,    83,    47,
       8,    45,     7,    68,    54,    78,    79,    20,    13,    13,
      45,    47,    83,    13,    61,    80,    14,     7,    55,    45,
      73,    61,    61,    14,    83,    61,    45,     8,     9,    10,
      11,    12,    13,    78,    45,    45,    44,    45,     8,     8,
       8,     8,    61,    56,    56,    13,    43,    14,    13,    13,
      13,    13,    45,    45,    83,    61,     7,    13,    61,    61,
      61,    61,    14,    14,    45,    45,    80,    61,    45,    45,
      45,    45,    14,    14,    14,     8,    45,    14,    14,    14,
      14,    13,    14,    61,    44,    45,    13,    14,    61,    45,
      14
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
#line 80 "Parser.y"
    {printf("Correct Syntax\n");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 169 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (3)].f)+(yyvsp[(3) - (3)].f);;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 170 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (3)].f)-(yyvsp[(3) - (3)].f);;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 171 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 173 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (3)].f)*(yyvsp[(3) - (3)].f);;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 174 "Parser.y"
    {if((yyvsp[(3) - (3)].f)==0){yyerror("Division By zero");}else (yyval.f)=(yyvsp[(1) - (3)].f)/(yyvsp[(3) - (3)].f);;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 175 "Parser.y"
    {if((int)(yyvsp[(3) - (3)].f)==0){yyerror("Modulo By zero");}else (yyval.f)=(int)(yyvsp[(1) - (3)].f) % (int)(yyvsp[(3) - (3)].f);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 176 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 178 "Parser.y"
    {(yyval.f)=pow((yyvsp[(1) - (3)].f),(yyvsp[(3) - (3)].f));;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 179 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 181 "Parser.y"
    {(yyval.f)=(yyvsp[(2) - (3)].f);;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 182 "Parser.y"
    {(yyval.f)=-(yyvsp[(2) - (2)].f);;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 183 "Parser.y"
    {(yyval.f)=(float)(yyvsp[(1) - (1)].i);;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 184 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;



/* Line 1455 of yacc.c  */
#line 1751 "Parser.tab.c"
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
#line 186 "Parser.y"


/* Subroutines */
void yyerror(const char *s) {
    extern char *yytext;  // Current token text
    fprintf(stderr, "Syntax error at '%s': %s\n", yytext, s);
}
int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("Error opening file");
            return 1;
        }
    }

    if (yyparse() == 0) {
        return 0;
    }
    return 1;
}
