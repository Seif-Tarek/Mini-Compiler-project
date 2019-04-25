
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
#line 1 "calc.y"

void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
int symbols[52];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);


/* Line 189 of yacc.c  */
#line 85 "y.tab.c"

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
     exit_command = 258,
     Rakam = 259,
     TOKEN_Hroof = 260,
     TOKEN_3ashry = 261,
     TOKEN_Harf = 262,
     TOKEN_Boolean = 263,
     CONSTANT_TOKEN = 264,
     LONG_INTEGER = 265,
     DOUBE_FLOATING_POINT = 266,
     STRING_VALUE = 267,
     CHARACTER_VALUE = 268,
     TrueFalse = 269,
     SCOPE_START_TOKEN = 270,
     SCOPE_END_TOKEN = 271,
     STATEMENT_TERMINATOR_TOKEN = 272,
     IF_STATEMENT_TOKEN = 273,
     ELSE_STATEMENT_TOKEN = 274,
     SWITCH_CASE_BEGINNING_TOKEN = 275,
     SWITCH_CASE_START_CASES_TOKEN = 276,
     SWITCH_CASE_END_CASES_TOKEN = 277,
     SWITCH_DEFAULT_CASE_BEGINNING_TOKEN = 278,
     FOR_LOOP_STATMENT_TOKEN = 279,
     WHILE_LOOP_STATEMENT_TOKEN = 280,
     DO_STATEMENT_TOKEN = 281,
     IDENTIFIER_TOKEN = 282,
     OR = 283,
     AND = 284,
     NOT = 285,
     SHIFT_LEFT = 286,
     SHIFT_RIGHT = 287,
     GREATER_THAN_EQUAL = 288,
     LESS_THAN_EQUAL = 289,
     EQUAL_EQUAL = 290,
     NOT_EQUAL = 291
   };
#endif
/* Tokens.  */
#define exit_command 258
#define Rakam 259
#define TOKEN_Hroof 260
#define TOKEN_3ashry 261
#define TOKEN_Harf 262
#define TOKEN_Boolean 263
#define CONSTANT_TOKEN 264
#define LONG_INTEGER 265
#define DOUBE_FLOATING_POINT 266
#define STRING_VALUE 267
#define CHARACTER_VALUE 268
#define TrueFalse 269
#define SCOPE_START_TOKEN 270
#define SCOPE_END_TOKEN 271
#define STATEMENT_TERMINATOR_TOKEN 272
#define IF_STATEMENT_TOKEN 273
#define ELSE_STATEMENT_TOKEN 274
#define SWITCH_CASE_BEGINNING_TOKEN 275
#define SWITCH_CASE_START_CASES_TOKEN 276
#define SWITCH_CASE_END_CASES_TOKEN 277
#define SWITCH_DEFAULT_CASE_BEGINNING_TOKEN 278
#define FOR_LOOP_STATMENT_TOKEN 279
#define WHILE_LOOP_STATEMENT_TOKEN 280
#define DO_STATEMENT_TOKEN 281
#define IDENTIFIER_TOKEN 282
#define OR 283
#define AND 284
#define NOT 285
#define SHIFT_LEFT 286
#define SHIFT_RIGHT 287
#define GREATER_THAN_EQUAL 288
#define LESS_THAN_EQUAL 289
#define EQUAL_EQUAL 290
#define NOT_EQUAL 291




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 12 "calc.y"

	long NUM; 
	int BOOOL;
	char* VARIABLE;
	double DOOBLE;
	char LETTER;



/* Line 214 of yacc.c  */
#line 203 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 215 "y.tab.c"

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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   622

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNRULES -- Number of states.  */
#define YYNSTATES  200

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,     2,
      38,    39,    46,    44,     2,    45,     2,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,     2,
      50,    37,    49,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    41,     2,    48,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    16,    20,    23,    25,
      28,    30,    33,    35,    38,    40,    43,    45,    49,    51,
      55,    58,    61,    65,    67,    69,    71,    73,    75,    79,
      83,    85,    87,    89,    91,    99,   105,   116,   124,   131,
     133,   135,   147,   155,   163,   167,   171,   175,   177,   179,
     183,   187,   189,   192,   194,   198,   202,   204,   208,   212,
     216,   220,   222,   226,   230,   232,   236,   239,   242,   244,
     248,   250,   252,   254,   256,   258,   260,   264,   268,   272,
     276,   280,   284,   288,   292,   296,   300,   304,   308,   312,
     314,   318,   320,   324,   327
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    55,    17,    -1,     3,    17,    -1,    53,
      17,    -1,    52,    53,    17,    -1,    52,    55,    17,    -1,
      52,    62,    -1,    62,    -1,    52,    58,    -1,    58,    -1,
      52,    59,    -1,    59,    -1,    52,    63,    -1,    63,    -1,
      52,    64,    -1,    64,    -1,    52,     3,    17,    -1,    17,
      -1,    52,    65,    17,    -1,    54,    27,    -1,    54,    55,
      -1,     9,    54,    55,    -1,     4,    -1,     6,    -1,     8,
      -1,     7,    -1,     5,    -1,    27,    37,    56,    -1,    27,
      37,    57,    -1,    65,    -1,    67,    -1,    77,    -1,    12,
      -1,    18,    38,    76,    39,    15,    52,    16,    -1,    58,
      19,    15,    52,    16,    -1,    20,    38,    27,    39,    21,
      40,    60,    23,    52,    22,    -1,    60,    38,    74,    39,
      15,    52,    16,    -1,    38,    74,    39,    15,    52,    16,
      -1,    55,    -1,    53,    -1,    24,    38,    61,    17,    77,
      17,    55,    39,    15,    52,    16,    -1,    25,    38,    77,
      39,    15,    52,    16,    -1,    26,    52,    25,    38,    77,
      39,    17,    -1,    65,    41,    66,    -1,    65,    42,    66,
      -1,    65,    43,    66,    -1,    66,    -1,    68,    -1,    66,
      31,    68,    -1,    66,    32,    68,    -1,    69,    -1,    67,
      69,    -1,    70,    -1,    68,    44,    70,    -1,    68,    45,
      70,    -1,    71,    -1,    69,    44,    71,    -1,    69,    45,
      71,    -1,    70,    46,    72,    -1,    70,    47,    72,    -1,
      72,    -1,    71,    46,    73,    -1,    71,    47,    73,    -1,
      73,    -1,    38,    65,    39,    -1,    45,    72,    -1,    48,
      72,    -1,    74,    -1,    38,    67,    39,    -1,    75,    -1,
      10,    -1,    13,    -1,    14,    -1,    27,    -1,    11,    -1,
      66,    49,    66,    -1,    66,    33,    66,    -1,    66,    50,
      66,    -1,    66,    34,    66,    -1,    66,    35,    66,    -1,
      66,    36,    66,    -1,    67,    49,    67,    -1,    67,    33,
      67,    -1,    67,    50,    67,    -1,    67,    34,    67,    -1,
      67,    35,    67,    -1,    67,    36,    67,    -1,    77,    28,
      78,    -1,    78,    -1,    78,    29,    79,    -1,    79,    -1,
      38,    77,    39,    -1,    30,    79,    -1,    76,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    91,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     112,   113,   114,   117,   118,   119,   120,   121,   124,   125,
     128,   129,   130,   133,   143,   144,   148,   151,   151,   154,
     155,   159,   163,   166,   169,   170,   171,   172,   175,   176,
     177,   180,   181,   184,   185,   186,   189,   190,   191,   194,
     195,   196,   199,   200,   201,   204,   205,   206,   207,   210,
     211,   214,   215,   216,   217,   225,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   243,   244,
     247,   248,   251,   252,   253
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "exit_command", "Rakam", "TOKEN_Hroof",
  "TOKEN_3ashry", "TOKEN_Harf", "TOKEN_Boolean", "CONSTANT_TOKEN",
  "LONG_INTEGER", "DOUBE_FLOATING_POINT", "STRING_VALUE",
  "CHARACTER_VALUE", "TrueFalse", "SCOPE_START_TOKEN", "SCOPE_END_TOKEN",
  "STATEMENT_TERMINATOR_TOKEN", "IF_STATEMENT_TOKEN",
  "ELSE_STATEMENT_TOKEN", "SWITCH_CASE_BEGINNING_TOKEN",
  "SWITCH_CASE_START_CASES_TOKEN", "SWITCH_CASE_END_CASES_TOKEN",
  "SWITCH_DEFAULT_CASE_BEGINNING_TOKEN", "FOR_LOOP_STATMENT_TOKEN",
  "WHILE_LOOP_STATEMENT_TOKEN", "DO_STATEMENT_TOKEN", "IDENTIFIER_TOKEN",
  "OR", "AND", "NOT", "SHIFT_LEFT", "SHIFT_RIGHT", "GREATER_THAN_EQUAL",
  "LESS_THAN_EQUAL", "EQUAL_EQUAL", "NOT_EQUAL", "'='", "'('", "')'",
  "':'", "'|'", "'&'", "'^'", "'+'", "'-'", "'*'", "'/'", "'~'", "'>'",
  "'<'", "$accept", "line", "declaration", "data_type", "assignment",
  "assingment_value", "string_value_assignment", "if_statement",
  "switch_statement", "case_statement", "for_iterator", "for_statement",
  "while_statement", "repeat_statement", "expbitwise", "exp",
  "double_value_exp", "expAddSubtract", "double_value_expAddSubtract",
  "component", "double_value_component", "factor", "double_value_factor",
  "term", "double_value_term", "Bexp", "Bexp1", "Bexpand", "Bexpbracket", 0
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
     285,   286,   287,   288,   289,   290,   291,    61,    40,    41,
      58,   124,    38,    94,    43,    45,    42,    47,   126,    62,
      60
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      53,    53,    53,    54,    54,    54,    54,    54,    55,    55,
      56,    56,    56,    57,    58,    58,    59,    60,    60,    61,
      61,    62,    63,    64,    65,    65,    65,    65,    66,    66,
      66,    67,    67,    68,    68,    68,    69,    69,    69,    70,
      70,    70,    71,    71,    71,    72,    72,    72,    72,    73,
      73,    74,    74,    74,    74,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    77,    77,
      78,    78,    79,    79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     3,     3,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     3,     1,     3,
       2,     2,     3,     1,     1,     1,     1,     1,     3,     3,
       1,     1,     1,     1,     7,     5,    10,     7,     6,     1,
       1,    11,     7,     7,     3,     3,     3,     1,     1,     3,
       3,     1,     2,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     2,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     1,     3,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    23,    27,    24,    26,    25,     0,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      12,     8,    14,    16,     3,     0,     0,     0,     0,     0,
       0,     0,     1,     0,    71,    72,    73,    74,     0,     0,
       0,     0,     0,     9,    11,     7,    13,    15,     0,    47,
      48,    53,    61,    68,     4,    20,    21,     2,     0,    22,
      75,    74,     0,     0,     0,    51,    56,    64,    70,     0,
       0,    40,    39,     0,     0,     0,    94,     0,    89,    91,
       0,    33,    28,    29,    30,    47,    31,    32,    17,     0,
      66,    67,     5,     6,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,    65,    44,    45,    46,    49,    50,
      54,    55,    59,    60,     0,    69,    77,    79,    80,    81,
      76,    78,    83,    85,    86,    87,    82,    84,    57,    58,
      62,    63,     0,     0,     0,    92,    88,     0,    90,     0,
      35,     0,     0,     0,     0,     0,    34,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,     0,     0,     0,    41,    38,     0,    37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    82,    83,    19,    20,   178,
      73,    21,    22,    23,    48,    49,    64,    50,    65,    51,
      66,    52,    67,    53,    68,    76,    77,    78,    79
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -156
static const yytype_int16 yypact[] =
{
     595,    24,  -156,  -156,  -156,  -156,  -156,    58,  -156,   -11,
      14,    35,    47,   595,    -1,   255,    65,    70,    87,    74,
    -156,  -156,  -156,  -156,  -156,    84,    88,   103,   143,   544,
     503,   522,  -156,    97,  -156,  -156,  -156,    -1,   549,   549,
     549,   126,   136,    74,  -156,  -156,  -156,  -156,    29,    16,
      90,   114,  -156,  -156,  -156,    -1,  -156,  -156,   140,  -156,
    -156,  -156,    88,   263,    89,   121,   122,  -156,  -156,   123,
     138,  -156,  -156,   165,   544,   544,  -156,    -9,   128,  -156,
     147,  -156,  -156,  -156,    99,   263,    89,   164,  -156,    66,
    -156,  -156,  -156,  -156,  -156,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   595,     5,   549,   549,   549,   549,
     549,   549,     1,     1,     1,     1,     1,     1,     1,   121,
       1,     1,     1,     1,   179,   178,   544,  -156,    45,    -8,
     544,   196,   544,   544,  -156,    16,    16,    16,    90,    90,
     114,   114,  -156,  -156,   301,  -156,    16,    16,    16,    16,
      16,    16,     1,     1,     1,     1,     1,     1,   122,   122,
    -156,  -156,   595,   176,     7,  -156,   128,   595,  -156,    -2,
    -156,   327,   181,    84,   353,    43,  -156,   118,    -5,   183,
    -156,  -156,   185,   595,   118,   213,   219,   399,   200,   595,
     595,  -156,   225,   425,   451,   595,  -156,  -156,   477,  -156
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,    40,    -7,   234,   -15,  -156,  -156,     2,    10,  -156,
    -156,    19,    27,    44,   -24,   -20,   174,    76,   -36,   109,
     106,   -35,   110,  -155,  -156,   217,   -30,   115,   -71
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      42,    87,    56,   127,    90,    91,    63,    84,    41,    63,
      59,    85,    60,    72,    89,    42,    60,    43,   183,   130,
     130,    71,   182,    41,   173,    44,   130,    26,   119,   188,
     131,   165,    43,   184,    45,   130,    31,   175,    89,   116,
      44,    24,    46,   116,   145,   129,    94,    98,    99,    45,
     119,    89,    27,    30,    63,    85,    60,    46,   167,    47,
     181,   168,     2,     3,     4,     5,     6,   142,   143,   119,
      95,    96,    97,    28,    47,   135,   136,   137,   112,   113,
     114,   115,    54,   116,   145,    29,   146,   147,   148,   149,
     150,   151,   119,    58,   117,   118,   164,    55,    34,    60,
      60,    35,    36,   169,    57,   134,    63,    95,    96,    97,
      63,    14,    63,    63,    88,    61,   119,   119,   119,   119,
     119,   119,   112,   113,   114,   115,    62,   116,    34,    42,
      70,    35,    36,    39,   100,   101,    40,    41,   117,   118,
      95,    96,    97,    92,   144,    61,    43,     2,     3,     4,
       5,     6,     7,    93,    44,   104,    42,   132,   179,    42,
     102,   103,   124,    45,    41,   120,   121,    41,   122,   123,
      14,    46,    42,    43,   138,   139,    43,   125,    42,    42,
      41,    44,   126,    42,    44,   133,    41,    41,    47,    43,
      45,    41,   130,    45,   162,    43,    43,    44,    46,   163,
      43,    46,   171,    44,    44,    86,    45,   174,    44,   140,
     141,   167,    45,    45,    46,    47,   172,    45,    47,   177,
      46,    46,   185,   187,   186,    46,   158,   159,   189,   193,
     194,    47,   160,   161,   190,   198,   105,    47,    47,   192,
     195,    25,    47,    69,     0,   166,     0,     0,     0,   128,
       0,     0,     0,     0,     0,    32,     0,     0,    33,     2,
       3,     4,     5,     6,     7,    34,     0,     0,    35,    36,
       0,     0,     0,     9,     0,    10,     0,     0,     0,    11,
      12,    13,    37,     0,     0,     0,   152,   153,   154,   155,
     105,   156,   157,    38,    98,    99,   106,   107,   108,   109,
      39,     0,     0,    40,    33,     2,     3,     4,     5,     6,
       7,    34,   110,   111,    35,    36,     0,   170,     0,     9,
       0,    10,     0,     0,     0,    11,    12,    13,    37,     0,
      33,     2,     3,     4,     5,     6,     7,    34,     0,    38,
      35,    36,     0,   176,     0,     9,    39,    10,     0,    40,
       0,    11,    12,    13,    37,     0,    33,     2,     3,     4,
       5,     6,     7,    34,     0,    38,    35,    36,     0,   180,
       0,     9,    39,    10,     0,    40,     0,    11,    12,    13,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,     0,
       0,    40,    33,     2,     3,     4,     5,     6,     7,    34,
       0,     0,    35,    36,     0,     0,     0,     9,     0,    10,
       0,   191,     0,    11,    12,    13,    37,     0,    33,     2,
       3,     4,     5,     6,     7,    34,     0,    38,    35,    36,
       0,   196,     0,     9,    39,    10,     0,    40,     0,    11,
      12,    13,    37,     0,    33,     2,     3,     4,     5,     6,
       7,    34,     0,    38,    35,    36,     0,   197,     0,     9,
      39,    10,     0,    40,     0,    11,    12,    13,    37,     0,
      33,     2,     3,     4,     5,     6,     7,    34,     0,    38,
      35,    36,     0,   199,     0,     9,    39,    10,     0,    40,
       0,    11,    12,    13,    37,     0,    33,     2,     3,     4,
       5,     6,     7,    34,     0,    38,    35,    36,     0,     0,
       0,     9,    39,    10,     0,    40,     0,    11,    80,    13,
      37,     0,    34,    60,    81,    35,    36,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,    61,
       0,    40,    74,     0,    34,    60,     0,    35,    36,    34,
      75,     0,    35,    36,     0,     0,     0,    39,     0,     0,
      40,    61,     0,     0,    74,     0,    61,     0,     0,     0,
       0,     0,    75,     0,     0,     0,     0,    38,     0,    39,
       0,     0,    40,     0,    39,     0,     0,    40,     1,     2,
       3,     4,     5,     6,     7,     0,     0,     0,     0,     0,
       0,     0,     8,     9,     0,    10,     0,     0,     0,    11,
      12,    13,    14
};

static const yytype_int16 yycheck[] =
{
      15,    31,    17,    74,    39,    40,    26,    31,    15,    29,
      25,    31,    11,    28,    38,    30,    11,    15,    23,    28,
      28,    28,   177,    30,    17,    15,    28,    38,    64,   184,
      39,    39,    30,    38,    15,    28,    37,    39,    62,    38,
      30,    17,    15,    38,    39,    75,    17,    31,    32,    30,
      86,    75,    38,    13,    74,    75,    11,    30,    15,    15,
      17,   132,     4,     5,     6,     7,     8,   102,   103,   105,
      41,    42,    43,    38,    30,    95,    96,    97,    33,    34,
      35,    36,    17,    38,    39,    38,   106,   107,   108,   109,
     110,   111,   128,    19,    49,    50,   126,    27,    10,    11,
      11,    13,    14,   133,    17,    39,   126,    41,    42,    43,
     130,    27,   132,   133,    17,    27,   152,   153,   154,   155,
     156,   157,    33,    34,    35,    36,    38,    38,    10,   144,
      27,    13,    14,    45,    44,    45,    48,   144,    49,    50,
      41,    42,    43,    17,   104,    27,   144,     4,     5,     6,
       7,     8,     9,    17,   144,    15,   171,    29,   173,   174,
      46,    47,    39,   144,   171,    44,    45,   174,    46,    47,
      27,   144,   187,   171,    98,    99,   174,    39,   193,   194,
     187,   171,    17,   198,   174,    38,   193,   194,   144,   187,
     171,   198,    28,   174,    15,   193,   194,   187,   171,    21,
     198,   174,   162,   193,   194,    31,   187,   167,   198,   100,
     101,    15,   193,   194,   187,   171,    40,   198,   174,    38,
     193,   194,    39,   183,    39,   198,   120,   121,    15,   189,
     190,   187,   122,   123,    15,   195,    62,   193,   194,    39,
      15,     7,   198,    26,    -1,   130,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,     0,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    13,    14,
      -1,    -1,    -1,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    -1,    -1,    -1,   112,   113,   114,   115,
     116,   117,   118,    38,    31,    32,    33,    34,    35,    36,
      45,    -1,    -1,    48,     3,     4,     5,     6,     7,     8,
       9,    10,    49,    50,    13,    14,    -1,    16,    -1,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    38,
      13,    14,    -1,    16,    -1,    18,    45,    20,    -1,    48,
      -1,    24,    25,    26,    27,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    38,    13,    14,    -1,    16,
      -1,    18,    45,    20,    -1,    48,    -1,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    48,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    13,    14,    -1,    -1,    -1,    18,    -1,    20,
      -1,    22,    -1,    24,    25,    26,    27,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    38,    13,    14,
      -1,    16,    -1,    18,    45,    20,    -1,    48,    -1,    24,
      25,    26,    27,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    38,    13,    14,    -1,    16,    -1,    18,
      45,    20,    -1,    48,    -1,    24,    25,    26,    27,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    38,
      13,    14,    -1,    16,    -1,    18,    45,    20,    -1,    48,
      -1,    24,    25,    26,    27,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    38,    13,    14,    -1,    -1,
      -1,    18,    45,    20,    -1,    48,    -1,    24,    25,    26,
      27,    -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    45,    27,
      -1,    48,    30,    -1,    10,    11,    -1,    13,    14,    10,
      38,    -1,    13,    14,    -1,    -1,    -1,    45,    -1,    -1,
      48,    27,    -1,    -1,    30,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    38,    -1,    45,
      -1,    -1,    48,    -1,    45,    -1,    -1,    48,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    17,    18,
      20,    24,    25,    26,    27,    52,    53,    54,    55,    58,
      59,    62,    63,    64,    17,    54,    38,    38,    38,    38,
      52,    37,     0,     3,    10,    13,    14,    27,    38,    45,
      48,    53,    55,    58,    59,    62,    63,    64,    65,    66,
      68,    70,    72,    74,    17,    27,    55,    17,    19,    55,
      11,    27,    38,    66,    67,    69,    71,    73,    75,    76,
      27,    53,    55,    61,    30,    38,    76,    77,    78,    79,
      25,    12,    56,    57,    65,    66,    67,    77,    17,    65,
      72,    72,    17,    17,    17,    41,    42,    43,    31,    32,
      44,    45,    46,    47,    15,    67,    33,    34,    35,    36,
      49,    50,    33,    34,    35,    36,    38,    49,    50,    69,
      44,    45,    46,    47,    39,    39,    17,    79,    67,    77,
      28,    39,    29,    38,    39,    66,    66,    66,    68,    68,
      70,    70,    72,    72,    52,    39,    66,    66,    66,    66,
      66,    66,    67,    67,    67,    67,    67,    67,    71,    71,
      73,    73,    15,    21,    77,    39,    78,    15,    79,    77,
      16,    52,    40,    17,    52,    39,    16,    38,    60,    55,
      16,    17,    74,    23,    38,    39,    39,    52,    74,    15,
      15,    22,    39,    52,    52,    15,    16,    16,    52,    16
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
        case 2:

/* Line 1455 of yacc.c  */
#line 91 "calc.y"
    {printf("Matched assignment\n");}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 92 "calc.y"
    {printf("Matched fedahya\n");exit(EXIT_SUCCESS);}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 93 "calc.y"
    {printf("Matched Declarations\n");}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 94 "calc.y"
    {printf("Matched Declarations\n");}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 95 "calc.y"
    {printf("Matched assignment\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 96 "calc.y"
    {printf("Matched loop: for\n");}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 97 "calc.y"
    {printf("Matched loop: for\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 98 "calc.y"
    {printf("Matched flow control: if\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 99 "calc.y"
    {printf("Matched flow control: if\n");}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 100 "calc.y"
    {printf("Matched flow control: switch\n");}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 101 "calc.y"
    {printf("Matched flow control: switch\n");}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 102 "calc.y"
    {printf("Matched loop: while\n");}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 103 "calc.y"
    {printf("Matched loop: while\n");}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 104 "calc.y"
    {printf("Matched loop: do-while\n");}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 105 "calc.y"
    {printf("Matched loop: do-while\n");}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 106 "calc.y"
    {printf("Matched fedahya\n");exit(EXIT_SUCCESS);}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 107 "calc.y"
    {printf("Matched Empty statement\n");}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 108 "calc.y"
    {printf("Matched Expression Statement\n");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 112 "calc.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 113 "calc.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 114 "calc.y"
    {;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 117 "calc.y"
    {;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 118 "calc.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 119 "calc.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 120 "calc.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 121 "calc.y"
    {;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 124 "calc.y"
    {;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 125 "calc.y"
    { printf("string is matched %s\n",(yyvsp[(3) - (3)].VARIABLE));}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 128 "calc.y"
    {;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 129 "calc.y"
    {; printf("matched double value expression %f\n",(yyvsp[(1) - (1)].DOOBLE));}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 130 "calc.y"
    {;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 133 "calc.y"
    {
													(yyval.VARIABLE) = (yyvsp[(1) - (1)].VARIABLE);
													printf("matched string value %s\n",(yyvsp[(1) - (1)].VARIABLE)); 
												}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 143 "calc.y"
    {;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 144 "calc.y"
    {;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 148 "calc.y"
    {;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 151 "calc.y"
    {;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 154 "calc.y"
    {;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 155 "calc.y"
    {;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 159 "calc.y"
    {;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 163 "calc.y"
    {;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 166 "calc.y"
    {;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 169 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) | (yyvsp[(3) - (3)].NUM);}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 170 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) & (yyvsp[(3) - (3)].NUM);}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 171 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) ^ (yyvsp[(3) - (3)].NUM);}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 172 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 175 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 176 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) << (yyvsp[(3) - (3)].NUM);}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 177 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) >> (yyvsp[(3) - (3)].NUM);}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 180 "calc.y"
    {;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 181 "calc.y"
    {;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 184 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 185 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) + (yyvsp[(3) - (3)].NUM);}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 186 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) - (yyvsp[(3) - (3)].NUM);}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 189 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE);}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 190 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (3)].DOOBLE) + (yyvsp[(3) - (3)].DOOBLE); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 191 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (3)].DOOBLE) - (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 194 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) * (yyvsp[(3) - (3)].NUM);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 195 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) / (yyvsp[(3) - (3)].NUM);}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 196 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 199 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (3)].DOOBLE) * (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 200 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (3)].DOOBLE) / (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 201 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE);}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 204 "calc.y"
    {(yyval.NUM) = (yyvsp[(2) - (3)].NUM);}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 205 "calc.y"
    {(yyval.NUM) = -(yyvsp[(2) - (2)].NUM);}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 206 "calc.y"
    {(yyval.NUM) = ~(yyvsp[(2) - (2)].NUM);}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 207 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 210 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(2) - (3)].DOOBLE);}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 211 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE);}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 214 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM); printf("i matched integer %d\n",(yyvsp[(1) - (1)].NUM));}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 215 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].LETTER);}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 216 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 217 "calc.y"
    {;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 225 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE); printf("i matched double %f\n",(yyvsp[(1) - (1)].DOOBLE));}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 229 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) > (yyvsp[(3) - (3)].NUM);}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 230 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) >= (yyvsp[(3) - (3)].NUM);}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 231 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) < (yyvsp[(3) - (3)].NUM);}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 232 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) <= (yyvsp[(3) - (3)].NUM);}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 233 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) == (yyvsp[(3) - (3)].NUM);}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 234 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) != (yyvsp[(3) - (3)].NUM);}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 235 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) > (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 236 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) >= (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 237 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) < (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 238 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) <= (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 239 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) == (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 240 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) != (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 243 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].BOOOL) || (yyvsp[(3) - (3)].BOOOL);}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 244 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 247 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].BOOOL) && (yyvsp[(3) - (3)].BOOOL);}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 248 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 251 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(2) - (3)].BOOOL);}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 252 "calc.y"
    {(yyval.BOOOL) = !(yyvsp[(2) - (2)].BOOOL);}
    break;



/* Line 1455 of yacc.c  */
#line 2311 "y.tab.c"
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
#line 256 "calc.y"
                     /* C code */

int computeSymbolIndex(char token)
{
	int idx = -1;
	if(islower(token)) {
		idx = token - 'a' + 26;
	} else if(isupper(token)) {
		idx = token - 'A';
	}
	return idx;
} 

/* returns the value of a given symbol */
int symbolVal(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	return symbols[bucket];
}

/* updates the value of a given symbol */
void updateSymbolVal(char symbol, int val)
{
	int bucket = computeSymbolIndex(symbol);
	symbols[bucket] = val;
}

int main (void) {
	/* init symbol table */
	int i;
	for(i=0; i<52; i++) {
		symbols[i] = 0;
	}

	return yyparse ( );
}

void yyerror (char *s) { // open file in write mode, and add the error to it!
	extern int yylineno;
	FILE* f;
	f = fopen("lexerOut2.txt","w");
	fprintf(f, "%s at line %d\n", s, yylineno);
	fclose(f);
} 


