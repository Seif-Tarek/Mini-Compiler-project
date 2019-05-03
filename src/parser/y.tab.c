
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
#include<iostream>
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
#include <unordered_map>
#include <utility>
#include <typeinfo>

#include "scope.hpp"
using namespace std;
OPERATION_RETURN insert(int type, char* name, bool isConstant, Values value, Scope *currentTable);
Scope *lookUp(char *name, Scope *currentTable);
// int symbols[52];
// int symbolVal(char symbol);
// void updateSymbolVal(char symbol, int val);

Scope* mainscope=NULL;
Scope* currentcope=NULL;




/* Line 189 of yacc.c  */
#line 99 "y.tab.c"

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
     TOKEN_Atba3 = 265,
     LONG_INTEGER = 266,
     DOUBE_FLOATING_POINT = 267,
     STRING_VALUE = 268,
     CHARACTER_VALUE = 269,
     TrueFalse = 270,
     SCOPE_START_TOKEN = 271,
     SCOPE_END_TOKEN = 272,
     STATEMENT_TERMINATOR_TOKEN = 273,
     IF_STATEMENT_TOKEN = 274,
     ELSE_STATEMENT_TOKEN = 275,
     SWITCH_CASE_BEGINNING_TOKEN = 276,
     SWITCH_CASE_START_CASES_TOKEN = 277,
     SWITCH_CASE_END_CASES_TOKEN = 278,
     SWITCH_DEFAULT_CASE_BEGINNING_TOKEN = 279,
     FOR_LOOP_STATMENT_TOKEN = 280,
     WHILE_LOOP_STATEMENT_TOKEN = 281,
     DO_STATEMENT_TOKEN = 282,
     IDENTIFIER_TOKEN = 283,
     OR = 284,
     AND = 285,
     NOT = 286,
     SHIFT_LEFT = 287,
     SHIFT_RIGHT = 288,
     GREATER_THAN_EQUAL = 289,
     LESS_THAN_EQUAL = 290,
     EQUAL_EQUAL = 291,
     NOT_EQUAL = 292
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
#define TOKEN_Atba3 265
#define LONG_INTEGER 266
#define DOUBE_FLOATING_POINT 267
#define STRING_VALUE 268
#define CHARACTER_VALUE 269
#define TrueFalse 270
#define SCOPE_START_TOKEN 271
#define SCOPE_END_TOKEN 272
#define STATEMENT_TERMINATOR_TOKEN 273
#define IF_STATEMENT_TOKEN 274
#define ELSE_STATEMENT_TOKEN 275
#define SWITCH_CASE_BEGINNING_TOKEN 276
#define SWITCH_CASE_START_CASES_TOKEN 277
#define SWITCH_CASE_END_CASES_TOKEN 278
#define SWITCH_DEFAULT_CASE_BEGINNING_TOKEN 279
#define FOR_LOOP_STATMENT_TOKEN 280
#define WHILE_LOOP_STATEMENT_TOKEN 281
#define DO_STATEMENT_TOKEN 282
#define IDENTIFIER_TOKEN 283
#define OR 284
#define AND 285
#define NOT 286
#define SHIFT_LEFT 287
#define SHIFT_RIGHT 288
#define GREATER_THAN_EQUAL 289
#define LESS_THAN_EQUAL 290
#define EQUAL_EQUAL 291
#define NOT_EQUAL 292




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 26 "calc.y"

	long NUM; 
	int BOOOL;
	char* VARIABLE;
	double DOOBLE;
	char LETTER;



/* Line 214 of yacc.c  */
#line 219 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 231 "y.tab.c"

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
#define YYLAST   632

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNRULES -- Number of states.  */
#define YYNSTATES  206

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,     2,
      39,    40,    47,    45,     2,    46,     2,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    41,     2,
      51,    38,    50,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    42,     2,    49,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    16,    20,    23,    25,
      28,    30,    33,    35,    38,    40,    43,    45,    49,    51,
      55,    58,    61,    65,    67,    69,    71,    73,    75,    79,
      83,    87,    91,    93,    95,   103,   109,   111,   113,   115,
     126,   134,   141,   143,   145,   157,   165,   173,   177,   181,
     185,   187,   189,   193,   197,   199,   202,   204,   208,   212,
     214,   218,   222,   226,   230,   232,   236,   240,   242,   246,
     249,   252,   254,   258,   260,   263,   265,   267,   269,   271,
     273,   275,   279,   283,   287,   291,   295,   299,   303,   307,
     311,   315,   319,   323,   327,   329,   333,   335,   339,   342
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    56,    18,    -1,     3,    18,    -1,    54,
      18,    -1,    53,    54,    18,    -1,    53,    56,    18,    -1,
      53,    63,    -1,    63,    -1,    53,    58,    -1,    58,    -1,
      53,    60,    -1,    60,    -1,    53,    64,    -1,    64,    -1,
      53,    65,    -1,    65,    -1,    53,     3,    18,    -1,    18,
      -1,    53,    66,    18,    -1,    55,    28,    -1,    55,    56,
      -1,     9,    55,    56,    -1,     4,    -1,     6,    -1,     8,
      -1,     7,    -1,     5,    -1,    28,    38,    66,    -1,    28,
      38,    68,    -1,    28,    38,    78,    -1,    28,    38,    57,
      -1,    13,    -1,    28,    -1,    19,    39,    77,    40,    16,
      53,    17,    -1,    58,    20,    16,    53,    17,    -1,    75,
      -1,    75,    -1,    75,    -1,    21,    39,    28,    40,    22,
      41,    61,    24,    53,    23,    -1,    61,    39,    59,    40,
      16,    53,    17,    -1,    39,    59,    40,    16,    53,    17,
      -1,    56,    -1,    54,    -1,    25,    39,    62,    18,    78,
      18,    56,    40,    16,    53,    17,    -1,    26,    39,    78,
      40,    16,    53,    17,    -1,    27,    53,    26,    39,    78,
      40,    18,    -1,    66,    42,    67,    -1,    66,    43,    67,
      -1,    66,    44,    67,    -1,    67,    -1,    69,    -1,    67,
      32,    69,    -1,    67,    33,    69,    -1,    70,    -1,    68,
      70,    -1,    71,    -1,    69,    45,    71,    -1,    69,    46,
      71,    -1,    72,    -1,    70,    45,    72,    -1,    70,    46,
      72,    -1,    71,    47,    73,    -1,    71,    48,    73,    -1,
      73,    -1,    72,    47,    74,    -1,    72,    48,    74,    -1,
      74,    -1,    39,    66,    40,    -1,    46,    73,    -1,    49,
      73,    -1,    75,    -1,    39,    68,    40,    -1,    76,    -1,
      46,    76,    -1,    11,    -1,    14,    -1,    15,    -1,    28,
      -1,    12,    -1,    28,    -1,    67,    50,    67,    -1,    67,
      34,    67,    -1,    67,    51,    67,    -1,    67,    35,    67,
      -1,    67,    36,    67,    -1,    67,    37,    67,    -1,    68,
      50,    68,    -1,    68,    34,    68,    -1,    68,    51,    68,
      -1,    68,    35,    68,    -1,    68,    36,    68,    -1,    68,
      37,    68,    -1,    78,    29,    79,    -1,    79,    -1,    79,
      30,    80,    -1,    80,    -1,    39,    78,    40,    -1,    31,
      80,    -1,    77,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     128,   129,   130,   133,   134,   135,   136,   137,   140,   141,
     145,   146,   155,   159,   166,   167,   169,   170,   171,   175,
     178,   178,   181,   182,   186,   190,   193,   196,   197,   198,
     199,   202,   203,   204,   207,   208,   211,   212,   213,   216,
     217,   218,   221,   222,   223,   226,   227,   228,   231,   232,
     233,   234,   237,   238,   239,   242,   243,   244,   245,   253,
     254,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   272,   273,   276,   277,   280,   281,   282
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "exit_command", "Rakam", "TOKEN_Hroof",
  "TOKEN_3ashry", "TOKEN_Harf", "TOKEN_Boolean", "CONSTANT_TOKEN",
  "TOKEN_Atba3", "LONG_INTEGER", "DOUBE_FLOATING_POINT", "STRING_VALUE",
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
  "string_value_assignment", "if_statement", "case_switch_opt",
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
     285,   286,   287,   288,   289,   290,   291,   292,    61,    40,
      41,    58,   124,    38,    94,    43,    45,    42,    47,   126,
      62,    60
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    54,    55,    55,    55,    55,    55,    56,    56,
      56,    56,    57,    57,    58,    58,    59,    59,    59,    60,
      61,    61,    62,    62,    63,    64,    65,    66,    66,    66,
      66,    67,    67,    67,    68,    68,    69,    69,    69,    70,
      70,    70,    71,    71,    71,    72,    72,    72,    73,    73,
      73,    73,    74,    74,    74,    75,    75,    75,    75,    76,
      76,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    78,    78,    79,    79,    80,    80,    80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     3,     3,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     3,     1,     3,
       2,     2,     3,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     1,     1,     7,     5,     1,     1,     1,    10,
       7,     6,     1,     1,    11,     7,     7,     3,     3,     3,
       1,     1,     3,     3,     1,     2,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     2,
       2,     1,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     1,     3,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    23,    27,    24,    26,    25,     0,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      12,     8,    14,    16,     3,     0,     0,     0,     0,     0,
       0,     0,     1,     0,    75,    76,    77,    78,     0,     0,
       0,     0,     0,     9,    11,     7,    13,    15,     0,    50,
      51,    56,    64,    71,     4,    20,    21,     2,     0,    22,
      79,    78,     0,     0,     0,     0,    54,    59,    67,    73,
       0,     0,    43,    42,     0,     0,     0,    99,     0,    94,
      96,     0,    32,    78,    31,    28,    50,    29,    30,    17,
      78,     0,    69,    70,     5,     6,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
       0,     0,     0,     0,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,     0,     0,     0,     0,    68,
      47,    48,    49,    52,    53,    57,    58,    62,    63,     0,
      72,    82,    84,    85,    86,    81,    83,    88,    90,    91,
      92,    87,    89,    60,    61,    65,    66,     0,     0,     0,
      97,    93,     0,    95,     0,    35,     0,     0,     0,     0,
       0,    34,     0,     0,     0,    45,    46,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,    39,     0,     0,
       0,     0,    44,    41,     0,    40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    84,    19,   187,    20,   183,
      74,    21,    22,    23,    48,    49,    65,    50,    66,    51,
      67,    52,    68,    53,    69,    77,    78,    79,    80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -164
static const yytype_int16 yypact[] =
{
     580,    -9,  -164,  -164,  -164,  -164,  -164,   227,  -164,   -17,
     -10,    -3,    20,   580,    -6,   252,    72,    75,    87,    88,
    -164,  -164,  -164,  -164,  -164,   103,   551,   105,   539,   522,
     463,   510,  -164,   102,  -164,  -164,  -164,    -6,    55,    55,
      55,   123,   126,    88,  -164,  -164,  -164,  -164,    -4,    31,
      78,    92,  -164,  -164,  -164,    -6,  -164,  -164,   119,  -164,
    -164,    16,   551,   563,   581,   120,   171,   173,  -164,  -164,
     106,   109,  -164,  -164,   133,   522,   522,  -164,    39,   128,
    -164,   114,  -164,   467,  -164,   131,   581,   120,   136,  -164,
    -164,    86,  -164,  -164,  -164,  -164,  -164,    55,    55,    55,
      55,    55,    55,    55,    55,    55,   580,    97,  -164,    55,
      55,    55,    55,    55,    55,  -164,    99,    99,    99,    99,
      99,    25,    99,    99,   171,    99,    99,    99,    99,   146,
     145,   522,  -164,   480,    52,   522,   160,   522,   522,  -164,
      31,    31,    31,    78,    78,    92,    92,  -164,  -164,   278,
    -164,    31,    31,    31,    31,    31,    31,    99,    99,    99,
      99,    99,    99,   173,   173,  -164,  -164,   580,   140,    64,
    -164,   128,   580,  -164,    62,  -164,   304,   144,   103,   330,
      40,  -164,    32,    18,   148,  -164,  -164,   151,  -164,   580,
      32,   190,   193,   359,   174,   580,   580,  -164,   206,   385,
     411,   580,  -164,  -164,   437,  -164
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -164,    41,    -7,   233,   -15,  -164,     1,    51,     3,  -164,
    -164,    11,    19,    50,   -14,   -25,    -1,   124,   -62,   125,
     113,   -28,   117,  -163,   -43,   220,   -24,   112,   -70
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -81
static const yytype_int16 yytable[] =
{
      42,    64,    56,   124,    64,   132,    86,    88,    41,    24,
      59,    92,    93,    73,    96,    42,    43,    85,    44,   188,
     108,    72,    26,    41,    91,   124,    45,   188,   -80,    27,
      87,    43,    31,    44,    46,    92,    28,    60,    97,    98,
      99,    45,   189,    34,   -80,   124,    35,    36,    91,    46,
      64,    86,   134,   115,    30,   -80,   172,   190,   186,    29,
      90,   107,    91,   100,   101,    47,    34,   173,   135,    35,
      36,   124,   140,   141,   142,   133,   147,   148,   108,   136,
      47,   135,   178,    90,   151,   152,   153,   154,   155,   156,
      54,   135,   170,   135,    38,   124,   124,   124,   124,   124,
     124,    39,   180,    55,    40,    57,    64,   169,    58,    60,
      64,    60,    64,    64,   174,   157,   158,   159,   160,   107,
      89,   161,   162,   102,   103,   115,   139,   115,    97,    98,
      99,    14,    60,    71,    42,   106,   120,   150,   120,   104,
     105,    94,    41,   121,    95,   121,   129,   149,   115,   130,
      43,   131,    44,   138,   116,   117,   118,   119,   137,   120,
      45,    42,   167,   184,    42,   135,   121,   168,    46,    41,
     122,   123,    41,    97,    98,    99,   172,    43,    42,    44,
      43,   177,    44,   182,    42,    42,    41,    45,   191,    42,
      45,   192,    41,    41,    43,    46,    44,    41,    46,    47,
      43,    43,    44,    44,    45,    43,   195,    44,   176,   196,
      45,    45,    46,   179,   198,    45,   125,   126,    46,    46,
     127,   128,   201,    46,   143,   144,    47,   145,   146,    47,
     193,     2,     3,     4,     5,     6,   199,   200,   163,   164,
      25,   194,   204,    47,   165,   166,    70,   171,     0,    47,
      47,     0,    32,     0,    47,    33,     2,     3,     4,     5,
       6,     7,     0,    34,     0,     0,    35,    36,     0,     0,
       0,     9,     0,    10,     0,     0,     0,    11,    12,    13,
      37,    33,     2,     3,     4,     5,     6,     7,     0,    34,
       0,    38,    35,    36,     0,   175,     0,     9,    39,    10,
       0,    40,     0,    11,    12,    13,    37,    33,     2,     3,
       4,     5,     6,     7,     0,    34,     0,    38,    35,    36,
       0,   181,     0,     9,    39,    10,     0,    40,     0,    11,
      12,    13,    37,    33,     2,     3,     4,     5,     6,     7,
       0,    34,     0,    38,    35,    36,     0,   185,     0,     9,
      39,    10,     0,    40,     0,    11,    12,    13,    37,     0,
       0,     0,    33,     2,     3,     4,     5,     6,     7,    38,
      34,     0,     0,    35,    36,     0,    39,     0,     9,    40,
      10,     0,   197,     0,    11,    12,    13,    37,    33,     2,
       3,     4,     5,     6,     7,     0,    34,     0,    38,    35,
      36,     0,   202,     0,     9,    39,    10,     0,    40,     0,
      11,    12,    13,    37,    33,     2,     3,     4,     5,     6,
       7,     0,    34,     0,    38,    35,    36,     0,   203,     0,
       9,    39,    10,     0,    40,     0,    11,    12,    13,    37,
      33,     2,     3,     4,     5,     6,     7,     0,    34,     0,
      38,    35,    36,     0,   205,     0,     9,    39,    10,     0,
      40,     0,    11,    12,    13,    37,    33,     2,     3,     4,
       5,     6,     7,     0,    34,     0,    38,    35,    36,   -80,
       0,     0,     9,    39,    10,   -33,    40,     0,    11,    81,
      13,    37,    60,     0,     0,   -80,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,   -80,   -33,   115,    39,
       0,     0,    40,     0,   116,   117,   118,   119,     0,   120,
     150,    34,    60,    82,    35,    36,   121,     0,     0,     0,
     122,   123,     0,    34,    60,     0,    35,    36,    83,     0,
       0,    75,     0,     2,     3,     4,     5,     6,     7,    76,
      61,     0,     0,    75,     0,     0,    63,     0,     0,    40,
       0,    76,    34,    60,     0,    35,    36,    14,    63,     0,
       0,    40,     0,     0,    34,    60,     0,    35,    36,    61,
       0,     0,     0,     1,     2,     3,     4,     5,     6,     7,
      62,    61,     0,     0,     0,     0,     0,    63,     8,     9,
      40,    10,    38,     0,     0,    11,    12,    13,    14,    39,
       0,     0,    40,   100,   101,   109,   110,   111,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114
};

static const yytype_int16 yycheck[] =
{
      15,    26,    17,    65,    29,    75,    31,    31,    15,    18,
      25,    39,    40,    28,    18,    30,    15,    31,    15,   182,
      63,    28,    39,    30,    38,    87,    15,   190,    12,    39,
      31,    30,    38,    30,    15,    63,    39,    12,    42,    43,
      44,    30,    24,    11,    28,   107,    14,    15,    62,    30,
      75,    76,    76,    28,    13,    39,    16,    39,    18,    39,
      28,    62,    76,    32,    33,    15,    11,   137,    29,    14,
      15,   133,    97,    98,    99,    76,   104,   105,   121,    40,
      30,    29,    18,    28,   109,   110,   111,   112,   113,   114,
      18,    29,    40,    29,    39,   157,   158,   159,   160,   161,
     162,    46,    40,    28,    49,    18,   131,   131,    20,    12,
     135,    12,   137,   138,   138,   116,   117,   118,   119,   120,
      18,   122,   123,    45,    46,    28,    40,    28,    42,    43,
      44,    28,    12,    28,   149,    16,    39,    40,    39,    47,
      48,    18,   149,    46,    18,    46,    40,   106,    28,    40,
     149,    18,   149,    39,    34,    35,    36,    37,    30,    39,
     149,   176,    16,   178,   179,    29,    46,    22,   149,   176,
      50,    51,   179,    42,    43,    44,    16,   176,   193,   176,
     179,    41,   179,    39,   199,   200,   193,   176,    40,   204,
     179,    40,   199,   200,   193,   176,   193,   204,   179,   149,
     199,   200,   199,   200,   193,   204,    16,   204,   167,    16,
     199,   200,   193,   172,    40,   204,    45,    46,   199,   200,
      47,    48,    16,   204,   100,   101,   176,   102,   103,   179,
     189,     4,     5,     6,     7,     8,   195,   196,   125,   126,
       7,   190,   201,   193,   127,   128,    26,   135,    -1,   199,
     200,    -1,     0,    -1,   204,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    -1,    -1,    14,    15,    -1,    -1,
      -1,    19,    -1,    21,    -1,    -1,    -1,    25,    26,    27,
      28,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    39,    14,    15,    -1,    17,    -1,    19,    46,    21,
      -1,    49,    -1,    25,    26,    27,    28,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    -1,    39,    14,    15,
      -1,    17,    -1,    19,    46,    21,    -1,    49,    -1,    25,
      26,    27,    28,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    39,    14,    15,    -1,    17,    -1,    19,
      46,    21,    -1,    49,    -1,    25,    26,    27,    28,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    39,
      11,    -1,    -1,    14,    15,    -1,    46,    -1,    19,    49,
      21,    -1,    23,    -1,    25,    26,    27,    28,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    39,    14,
      15,    -1,    17,    -1,    19,    46,    21,    -1,    49,    -1,
      25,    26,    27,    28,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    -1,    39,    14,    15,    -1,    17,    -1,
      19,    46,    21,    -1,    49,    -1,    25,    26,    27,    28,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    -1,
      39,    14,    15,    -1,    17,    -1,    19,    46,    21,    -1,
      49,    -1,    25,    26,    27,    28,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    39,    14,    15,    12,
      -1,    -1,    19,    46,    21,    18,    49,    -1,    25,    26,
      27,    28,    12,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    39,    40,    28,    46,
      -1,    -1,    49,    -1,    34,    35,    36,    37,    -1,    39,
      40,    11,    12,    13,    14,    15,    46,    -1,    -1,    -1,
      50,    51,    -1,    11,    12,    -1,    14,    15,    28,    -1,
      -1,    31,    -1,     4,     5,     6,     7,     8,     9,    39,
      28,    -1,    -1,    31,    -1,    -1,    46,    -1,    -1,    49,
      -1,    39,    11,    12,    -1,    14,    15,    28,    46,    -1,
      -1,    49,    -1,    -1,    11,    12,    -1,    14,    15,    28,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      39,    28,    -1,    -1,    -1,    -1,    -1,    46,    18,    19,
      49,    21,    39,    -1,    -1,    25,    26,    27,    28,    46,
      -1,    -1,    49,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    18,    19,
      21,    25,    26,    27,    28,    53,    54,    55,    56,    58,
      60,    63,    64,    65,    18,    55,    39,    39,    39,    39,
      53,    38,     0,     3,    11,    14,    15,    28,    39,    46,
      49,    54,    56,    58,    60,    63,    64,    65,    66,    67,
      69,    71,    73,    75,    18,    28,    56,    18,    20,    56,
      12,    28,    39,    46,    67,    68,    70,    72,    74,    76,
      77,    28,    54,    56,    62,    31,    39,    77,    78,    79,
      80,    26,    13,    28,    57,    66,    67,    68,    78,    18,
      28,    66,    73,    73,    18,    18,    18,    42,    43,    44,
      32,    33,    45,    46,    47,    48,    16,    68,    76,    34,
      35,    36,    37,    50,    51,    28,    34,    35,    36,    37,
      39,    46,    50,    51,    70,    45,    46,    47,    48,    40,
      40,    18,    80,    68,    78,    29,    40,    30,    39,    40,
      67,    67,    67,    69,    69,    71,    71,    73,    73,    53,
      40,    67,    67,    67,    67,    67,    67,    68,    68,    68,
      68,    68,    68,    72,    72,    74,    74,    16,    22,    78,
      40,    79,    16,    80,    78,    17,    53,    41,    18,    53,
      40,    17,    39,    61,    56,    17,    18,    59,    75,    24,
      39,    40,    40,    53,    59,    16,    16,    23,    40,    53,
      53,    16,    17,    17,    53,    17
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
#line 107 "calc.y"
    {printf("Matched assignment\n");}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 108 "calc.y"
    {printf("Matched fedahya\n");exit(EXIT_SUCCESS);}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 109 "calc.y"
    {printf("Matched Declarations\n");}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 110 "calc.y"
    {printf("Matched Declarations\n");}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 111 "calc.y"
    {printf("Matched assignment\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 112 "calc.y"
    {printf("Matched loop: for\n");}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 113 "calc.y"
    {printf("Matched loop: for\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 114 "calc.y"
    {printf("Matched flow control: if\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 115 "calc.y"
    {printf("Matched flow control: if\n");}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 116 "calc.y"
    {printf("Matched flow control: switch\n");}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 117 "calc.y"
    {printf("Matched flow control: switch\n");}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 118 "calc.y"
    {printf("Matched loop: while\n");}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 119 "calc.y"
    {printf("Matched loop: while\n");}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 120 "calc.y"
    {printf("Matched loop: do-while\n");}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 121 "calc.y"
    {printf("Matched loop: do-while\n");}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 122 "calc.y"
    {printf("Matched fedahya\n");exit(EXIT_SUCCESS);}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 123 "calc.y"
    {printf("Matched Empty statement\n");}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 124 "calc.y"
    {printf("Matched Expression Statement\n");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 128 "calc.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 129 "calc.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 130 "calc.y"
    {;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 133 "calc.y"
    {;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 134 "calc.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 135 "calc.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 136 "calc.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 137 "calc.y"
    {;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 140 "calc.y"
    { ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 141 "calc.y"
    { Values val;
				val.Number = (yyvsp[(3) - (3)].DOOBLE);
				insert(DOUBLE,"yahia",false,val, currentcope); printf("ya rab %c\n", typeid((yyvsp[(3) - (3)].DOOBLE)).name()[0]);}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 145 "calc.y"
    { printf("ya rab %c\n", typeid((yyvsp[(3) - (3)].BOOOL)).name()[0]);}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 146 "calc.y"
    { printf("string is matched %s\n",(yyvsp[(3) - (3)].VARIABLE));}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 155 "calc.y"
    {
													(yyval.VARIABLE) = (yyvsp[(1) - (1)].VARIABLE);
													printf("matched string value %s\n",(yyvsp[(1) - (1)].VARIABLE)); 
												}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 159 "calc.y"
    {;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 166 "calc.y"
    {;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 167 "calc.y"
    {;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 169 "calc.y"
    {;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 170 "calc.y"
    {;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 171 "calc.y"
    {;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 175 "calc.y"
    {;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 178 "calc.y"
    {;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 181 "calc.y"
    {;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 182 "calc.y"
    {;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 186 "calc.y"
    {;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 190 "calc.y"
    {;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 193 "calc.y"
    {;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 196 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) | (yyvsp[(3) - (3)].NUM);}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 197 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) & (yyvsp[(3) - (3)].NUM);}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 198 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) ^ (yyvsp[(3) - (3)].NUM);}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 199 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 202 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 203 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) << (yyvsp[(3) - (3)].NUM);}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 204 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) >> (yyvsp[(3) - (3)].NUM);}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 207 "calc.y"
    {;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 208 "calc.y"
    {;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 211 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 212 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) + (yyvsp[(3) - (3)].NUM);}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 213 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) - (yyvsp[(3) - (3)].NUM);}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 216 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 217 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (3)].DOOBLE) + (yyvsp[(3) - (3)].DOOBLE); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 218 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (3)].DOOBLE) - (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 221 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) * (yyvsp[(3) - (3)].NUM);}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 222 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) / (yyvsp[(3) - (3)].NUM);}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 223 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 226 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (3)].DOOBLE) * (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 227 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (3)].DOOBLE) / (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 228 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE);}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 231 "calc.y"
    {(yyval.NUM) = (yyvsp[(2) - (3)].NUM);}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 232 "calc.y"
    {(yyval.NUM) = -(yyvsp[(2) - (2)].NUM);}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 233 "calc.y"
    {(yyval.NUM) = ~(yyvsp[(2) - (2)].NUM);}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 234 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 237 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(2) - (3)].DOOBLE);}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 238 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE);}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 239 "calc.y"
    {(yyval.DOOBLE) = -(yyvsp[(2) - (2)].DOOBLE);}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 242 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM); printf("i matched integer %d\n",(yyvsp[(1) - (1)].NUM));}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 243 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].LETTER); printf("i matched TTT %d\n",(yyvsp[(1) - (1)].LETTER));}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 244 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 245 "calc.y"
    {;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 253 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE); printf("i matched double %f\n",(yyvsp[(1) - (1)].DOOBLE));}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 254 "calc.y"
    {;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 258 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) > (yyvsp[(3) - (3)].NUM);}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 259 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) >= (yyvsp[(3) - (3)].NUM);}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 260 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) < (yyvsp[(3) - (3)].NUM);}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 261 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) <= (yyvsp[(3) - (3)].NUM);}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 262 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) == (yyvsp[(3) - (3)].NUM);}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 263 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) != (yyvsp[(3) - (3)].NUM);}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 264 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) > (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 265 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) >= (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 266 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) < (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 267 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) <= (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 268 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) == (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 269 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) != (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 272 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].BOOOL) || (yyvsp[(3) - (3)].BOOOL);}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 273 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 276 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].BOOOL) && (yyvsp[(3) - (3)].BOOOL);}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 277 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 280 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(2) - (3)].BOOOL);}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 281 "calc.y"
    {(yyval.BOOOL) = !(yyvsp[(2) - (2)].BOOOL);}
    break;



/* Line 1455 of yacc.c  */
#line 2371 "y.tab.c"
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
#line 285 "calc.y"
                     /* C code */

// int computeSymbolIndex(char token)
// {
// 	int idx = -1;
// 	if(islower(token)) {
// 		idx = token - 'a' + 26;
// 	} else if(isupper(token)) {
// 		idx = token - 'A';
// 	}
// 	return idx;
// } 

// /* returns the value of a given symbol */
// int symbolVal(char symbol)
// {
// 	int bucket = computeSymbolIndex(symbol);
// 	return symbols[bucket];
// }

// /* updates the value of a given symbol */
// void updateSymbolVal(char symbol, int val)
// {
// 	int bucket = computeSymbolIndex(symbol);
// 	symbols[bucket] = val;
// }

OPERATION_RETURN insert(int type, char* name, bool isConstant, Values value, Scope *currentTable)
{

    // first check for duplication
    unordered_map<char *, Symbol>::iterator itr = currentTable->currentLockup.find(name);

    if (itr == currentTable->currentLockup.end())
    {
        
            Symbol*s = new Symbol();
            s->type = type;
            s->isConst = isConstant;
            s->value = value;
			pair <char*,Symbol> newP;
			cout<<"HI";
			newP=make_pair(name,*s);
			currentTable->currentLockup.insert(newP);
            //currentTable->currentLockup[name]=move(s);

			Scope *Dum =  lookUp(name, currentTable);
			itr = currentTable->currentLockup.find(name);
			cout<<"HI";
			cout<<"name:"<<name<<"value:"<<itr->second.value.Number<<endl;
            return SUCCESSFUL_INSERTION;
        
    }
	//TEST ONLY
	
    return DUPLICATE_INSERTION;
}

Scope *lookUp(char *name, Scope *currentTable)
{

    // base case: not found in alllllll scopes: 2o7a
    if (currentTable == NULL)
        return NULL;

    if (currentTable->currentLockup.find(name) == currentTable->currentLockup.end())
    {
        return lookUp(name, currentTable->above);
    }
    return currentTable;
}

OPERATION_RETURN update(char *name, int newType, Values value, Scope *currentTable)
{

    Scope *currTable = lookUp(name, currentTable);

    if (currTable != NULL)
    {
        unordered_map<char *, Symbol>::iterator itr = currentTable->currentLockup.find(name); //madaam mesh b null yeb2a wesh la2ah
        // check semantics errors:
        if (itr->second.isConst)
        {
            return SEMANTIC_ERROR_ATTEMPT_CHANGING_CONSTANT;
        }
        if (newType == itr->second.type)
        {
            itr->second.value = value;
            return SUCCESSFUL_UPDATE;
        }
        return SEMANTIC_ERROR_TYPE_INCOMPATIBLE;
    }
    return SYMBOL_NOT_FOUND;
}

Scope *createMainScope()
{
    Scope *mainScope = new Scope();
    mainScope->above = NULL;
    return mainScope;
}



int main (void) {
	
	mainscope=createMainScope();
	currentcope=mainscope;

	cout<<currentcope;
	return yyparse ( );
}

void yyerror (char *s) { // open file in write mode, and add the error to it!
	extern int yylineno;
	FILE* f;
	f = fopen("lexerOut2.txt","w");
	fprintf(f, "%s at line %d\n", s, yylineno);
	fclose(f);
} 

