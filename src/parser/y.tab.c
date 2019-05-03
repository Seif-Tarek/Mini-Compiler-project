
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
#define YYFINAL  41
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   638

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNRULES -- Number of states.  */
#define YYNSTATES  204

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
      55,    59,    62,    65,    68,    72,    74,    76,    78,    80,
      82,    86,    90,    94,    98,   100,   108,   114,   125,   133,
     140,   142,   144,   156,   164,   172,   176,   180,   184,   186,
     188,   192,   196,   198,   202,   206,   210,   214,   216,   220,
     224,   226,   230,   234,   236,   240,   243,   246,   248,   252,
     254,   257,   259,   261,   263,   265,   267,   271,   275,   279,
     283,   287,   291,   295,   299,   303,   307,   311,   315,   319,
     321,   325,   327,   331,   334
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    56,    18,    -1,     3,    18,    -1,    54,
      18,    -1,    53,    54,    18,    -1,    53,    56,    18,    -1,
      53,    62,    -1,    62,    -1,    53,    58,    -1,    58,    -1,
      53,    59,    -1,    59,    -1,    53,    63,    -1,    63,    -1,
      53,    64,    -1,    64,    -1,    53,     3,    18,    -1,    18,
      -1,    53,    65,    18,    -1,    53,    68,    18,    -1,    68,
      18,    -1,    55,    28,    -1,    55,    56,    -1,     9,    55,
      56,    -1,     4,    -1,     6,    -1,     8,    -1,     7,    -1,
       5,    -1,    28,    38,    65,    -1,    28,    38,    68,    -1,
      28,    38,    76,    -1,    28,    38,    57,    -1,    13,    -1,
      19,    39,    75,    40,    16,    53,    17,    -1,    58,    20,
      16,    53,    17,    -1,    21,    39,    28,    40,    22,    41,
      60,    24,    53,    23,    -1,    60,    39,    73,    40,    16,
      53,    17,    -1,    39,    73,    40,    16,    53,    17,    -1,
      56,    -1,    54,    -1,    25,    39,    61,    18,    76,    18,
      56,    40,    16,    53,    17,    -1,    26,    39,    76,    40,
      16,    53,    17,    -1,    27,    53,    26,    39,    76,    40,
      18,    -1,    65,    42,    66,    -1,    65,    43,    66,    -1,
      65,    44,    66,    -1,    66,    -1,    67,    -1,    66,    32,
      67,    -1,    66,    33,    67,    -1,    69,    -1,    67,    45,
      69,    -1,    67,    46,    69,    -1,    68,    45,    70,    -1,
      68,    46,    70,    -1,    70,    -1,    69,    47,    71,    -1,
      69,    48,    71,    -1,    71,    -1,    70,    47,    72,    -1,
      70,    48,    72,    -1,    72,    -1,    39,    65,    40,    -1,
      46,    71,    -1,    49,    71,    -1,    73,    -1,    39,    68,
      40,    -1,    74,    -1,    46,    72,    -1,    11,    -1,    14,
      -1,    15,    -1,    28,    -1,    12,    -1,    66,    50,    66,
      -1,    66,    34,    66,    -1,    66,    51,    66,    -1,    66,
      35,    66,    -1,    66,    36,    66,    -1,    66,    37,    66,
      -1,    68,    50,    68,    -1,    68,    34,    68,    -1,    68,
      51,    68,    -1,    68,    35,    68,    -1,    68,    36,    68,
      -1,    68,    37,    68,    -1,    76,    29,    77,    -1,    77,
      -1,    77,    30,    78,    -1,    78,    -1,    39,    76,    40,
      -1,    31,    78,    -1,    75,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   130,   131,   132,   135,   136,   137,   138,   139,
     142,   143,   147,   148,   157,   167,   168,   172,   175,   175,
     178,   179,   183,   187,   190,   193,   194,   195,   196,   199,
     200,   201,   208,   209,   210,   213,   214,   215,   218,   219,
     220,   223,   224,   225,   228,   229,   230,   231,   234,   235,
     236,   239,   240,   241,   242,   250,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   269,   270,
     273,   274,   277,   278,   279
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
  "string_value_assignment", "if_statement", "switch_statement",
  "case_statement", "for_iterator", "for_statement", "while_statement",
  "repeat_statement", "expbitwise", "exp", "expAddSubtract",
  "double_value_expAddSubtract", "component", "double_value_component",
  "factor", "double_value_factor", "term", "double_value_term", "Bexp",
  "Bexp1", "Bexpand", "Bexpbracket", 0
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
      53,    53,    54,    54,    54,    55,    55,    55,    55,    55,
      56,    56,    56,    56,    57,    58,    58,    59,    60,    60,
      61,    61,    62,    63,    64,    65,    65,    65,    65,    66,
      66,    66,    67,    67,    67,    68,    68,    68,    69,    69,
      69,    70,    70,    70,    71,    71,    71,    71,    72,    72,
      72,    73,    73,    73,    73,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    76,    76,
      77,    77,    78,    78,    78
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     3,     3,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     3,     1,     3,
       3,     2,     2,     2,     3,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     1,     7,     5,    10,     7,     6,
       1,     1,    11,     7,     7,     3,     3,     3,     1,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     2,     2,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     1,     3,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    25,    29,    26,    28,    27,     0,    75,    18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    12,     8,    14,    16,     0,    57,    63,
      69,     3,     0,     0,     0,     0,     0,     0,     0,     0,
      70,     1,     0,    71,    72,    73,    74,     0,     0,     0,
       0,     0,     9,    11,     7,    13,    15,     0,    48,    49,
       0,    52,    60,    67,     4,    22,    23,     2,     0,    21,
       0,     0,     0,     0,    24,    74,     0,     0,     0,     0,
      41,    40,     0,     0,     0,    94,     0,    89,    91,     0,
      34,    33,    30,    48,    31,    32,    68,    17,     0,    65,
       0,     0,    66,     5,     6,    19,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,    55,    56,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,    64,    45,    46,    47,    50,    51,    53,
      54,    58,    59,     0,    77,    79,    80,    81,    76,    78,
      83,    85,    86,    87,    82,    84,     0,     0,     0,    92,
      88,     0,    90,     0,    36,     0,     0,     0,     0,     0,
      35,     0,     0,     0,    43,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
      42,    39,     0,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    91,    22,    23,   182,    82,
      24,    25,    26,    57,    58,    59,    27,    61,    28,    62,
      29,    63,    30,    85,    86,    87,    88
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -127
static const yytype_int16 yypact[] =
{
     550,   -17,  -127,  -127,  -127,  -127,  -127,    88,  -127,  -127,
     -29,   -24,   -12,    -7,   550,   -15,     2,     2,   313,    22,
      18,    36,    44,  -127,  -127,  -127,  -127,    -2,    28,  -127,
    -127,  -127,    41,   569,    50,   278,    89,   524,   118,    45,
    -127,  -127,    81,  -127,  -127,  -127,   -15,   569,   569,   571,
      87,    90,    44,  -127,  -127,  -127,  -127,    -9,    54,    76,
       7,    97,  -127,  -127,  -127,   -15,  -127,  -127,    94,  -127,
       2,     2,     2,     2,  -127,  -127,   241,   556,    78,    84,
    -127,  -127,   109,    89,    89,  -127,   -11,   104,  -127,   101,
    -127,  -127,   108,   241,   556,   107,  -127,  -127,    99,  -127,
     571,   571,  -127,  -127,  -127,  -127,   571,   571,   571,   571,
     571,   571,   571,  -127,   571,   571,   550,    28,    28,  -127,
    -127,   571,   571,   571,   571,   571,   571,     2,     2,     2,
       2,     2,     2,   137,   133,    89,  -127,   587,    21,    89,
     142,    89,    89,  -127,    54,    54,    54,    76,    76,    97,
      97,  -127,  -127,   339,    54,    54,    54,    54,    54,    54,
     102,   102,   102,   102,   102,   102,   550,   119,    42,  -127,
     104,   550,  -127,    34,  -127,   365,   134,    41,   391,    -5,
    -127,    69,     0,   138,  -127,  -127,   140,   550,    69,   158,
     174,   420,   151,   550,   550,  -127,   179,   446,   472,   550,
    -127,  -127,   498,  -127
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,   -10,     1,   189,    10,  -127,    19,    40,  -127,  -127,
      52,    61,    70,   -35,   173,    56,   -16,    57,   100,   -42,
       9,  -126,  -127,   167,   -33,    63,   -75
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      39,    31,    60,    92,    37,    95,    99,   102,   136,   105,
      33,   171,    98,   185,     8,    34,    69,    77,   139,    50,
      77,    60,    94,    38,   187,   113,    40,    35,    51,   140,
      66,    39,    36,   106,   107,   108,    80,    52,    50,   188,
      64,    16,    74,    70,    71,    81,    65,    51,    17,    98,
     139,   138,    70,    71,    67,   186,    52,    40,    53,    99,
     177,   169,   192,   139,    68,    98,   172,    77,   137,    15,
      54,   139,   151,   152,   179,    72,    73,    53,    79,    55,
      43,   119,   120,    44,    45,    96,   109,   110,    56,    54,
      70,    71,     2,     3,     4,     5,     6,    75,    55,    97,
      43,     8,   168,    44,    45,   103,   153,    56,   104,   173,
     116,   160,   161,   162,   163,   164,   165,    75,   133,    77,
      83,   111,   112,    77,   134,    77,    77,   135,    84,    43,
       8,    90,    44,    45,   141,    48,   139,    60,    49,   143,
     142,   106,   107,   108,   114,   115,    75,    70,    71,    83,
     106,   107,   108,   166,    50,   167,   175,    84,   171,    60,
     176,   178,    60,    51,    48,   147,   148,    49,   149,   150,
     117,   118,    52,   181,   193,    60,    50,   191,   189,    50,
     190,    60,    60,   197,   198,    51,    60,   183,    51,   202,
     194,   196,    50,    53,    52,   199,    32,    52,    50,    50,
      78,    51,   170,    50,     0,    54,    76,    51,    51,    76,
      52,    93,    51,     0,    55,    53,    52,    52,    53,     0,
       0,    52,     0,    56,     0,     0,     0,    54,     0,     0,
      54,    53,     0,     0,     0,     0,    55,    53,    53,    55,
       0,     0,    53,    54,     0,    56,     0,     0,    56,    54,
      54,     0,    55,     0,    54,     0,    76,    93,    55,    55,
       0,    56,     0,    55,     0,     0,     0,    56,    56,     0,
       0,     0,    56,   109,   110,   121,   122,   123,   124,   144,
     145,   146,     2,     3,     4,     5,     6,     7,     0,     0,
       0,   125,   126,     0,   154,   155,   156,   157,   158,   159,
       0,     0,     0,     0,     0,     0,    15,     0,    76,     0,
       0,     0,    76,    41,    76,    76,    42,     2,     3,     4,
       5,     6,     7,     0,    43,     8,     0,    44,    45,     0,
       0,     0,    10,     0,    11,     0,     0,     0,    12,    13,
      14,    46,    42,     2,     3,     4,     5,     6,     7,     0,
      43,     8,    47,    44,    45,     0,   174,     0,    10,    48,
      11,     0,    49,     0,    12,    13,    14,    46,    42,     2,
       3,     4,     5,     6,     7,     0,    43,     8,    47,    44,
      45,     0,   180,     0,    10,    48,    11,     0,    49,     0,
      12,    13,    14,    46,    42,     2,     3,     4,     5,     6,
       7,     0,    43,     8,    47,    44,    45,     0,   184,     0,
      10,    48,    11,     0,    49,     0,    12,    13,    14,    46,
       0,     0,     0,    42,     2,     3,     4,     5,     6,     7,
      47,    43,     8,     0,    44,    45,     0,    48,     0,    10,
      49,    11,     0,   195,     0,    12,    13,    14,    46,    42,
       2,     3,     4,     5,     6,     7,     0,    43,     8,    47,
      44,    45,     0,   200,     0,    10,    48,    11,     0,    49,
       0,    12,    13,    14,    46,    42,     2,     3,     4,     5,
       6,     7,     0,    43,     8,    47,    44,    45,     0,   201,
       0,    10,    48,    11,     0,    49,     0,    12,    13,    14,
      46,    42,     2,     3,     4,     5,     6,     7,     0,    43,
       8,    47,    44,    45,     0,   203,     0,    10,    48,    11,
       0,    49,     0,    12,    13,    14,    46,    42,     2,     3,
       4,     5,     6,     7,     0,    43,     8,    47,    44,    45,
       0,     0,     0,    10,    48,    11,     0,    49,     0,    12,
      89,    14,    46,     1,     2,     3,     4,     5,     6,     7,
       0,     0,     8,    47,     0,     0,     0,     0,     9,    10,
      48,    11,     0,    49,     0,    12,    13,    14,    15,     0,
      43,     8,    43,    44,    45,    44,    45,     0,     0,    16,
     127,   128,   129,   130,     0,     0,    17,    75,     0,    75,
       0,    70,    71,     0,     0,     0,   131,   132,    47,     0,
     100,     0,     0,     0,     0,    48,     0,   101,    49,     0,
      49,   127,   128,   129,   130,     0,     0,    96,     0,     0,
       0,     0,    70,    71,     0,     0,     0,   131,   132
};

static const yytype_int16 yycheck[] =
{
      16,    18,    18,    38,    14,    38,    48,    49,    83,    18,
      39,    16,    47,    18,    12,    39,    18,    33,    29,    18,
      36,    37,    38,    38,    24,    18,    17,    39,    18,    40,
      20,    47,    39,    42,    43,    44,    35,    18,    37,    39,
      18,    39,    32,    45,    46,    35,    28,    37,    46,    84,
      29,    84,    45,    46,    18,   181,    37,    48,    18,   101,
      18,    40,   188,    29,    20,   100,   141,    83,    84,    28,
      18,    29,   114,   115,    40,    47,    48,    37,    28,    18,
      11,    72,    73,    14,    15,    40,    32,    33,    18,    37,
      45,    46,     4,     5,     6,     7,     8,    28,    37,    18,
      11,    12,   135,    14,    15,    18,   116,    37,    18,   142,
      16,   127,   128,   129,   130,   131,   132,    28,    40,   135,
      31,    45,    46,   139,    40,   141,   142,    18,    39,    11,
      12,    13,    14,    15,    30,    46,    29,   153,    49,    40,
      39,    42,    43,    44,    47,    48,    28,    45,    46,    31,
      42,    43,    44,    16,   153,    22,   166,    39,    16,   175,
      41,   171,   178,   153,    46,   109,   110,    49,   111,   112,
      70,    71,   153,    39,    16,   191,   175,   187,    40,   178,
      40,   197,   198,   193,   194,   175,   202,   177,   178,   199,
      16,    40,   191,   153,   175,    16,     7,   178,   197,   198,
      33,   191,   139,   202,    -1,   153,    33,   197,   198,    36,
     191,    38,   202,    -1,   153,   175,   197,   198,   178,    -1,
      -1,   202,    -1,   153,    -1,    -1,    -1,   175,    -1,    -1,
     178,   191,    -1,    -1,    -1,    -1,   175,   197,   198,   178,
      -1,    -1,   202,   191,    -1,   175,    -1,    -1,   178,   197,
     198,    -1,   191,    -1,   202,    -1,    83,    84,   197,   198,
      -1,   191,    -1,   202,    -1,    -1,    -1,   197,   198,    -1,
      -1,    -1,   202,    32,    33,    34,    35,    36,    37,   106,
     107,   108,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    50,    51,    -1,   121,   122,   123,   124,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,   135,    -1,
      -1,    -1,   139,     0,   141,   142,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,    26,
      27,    28,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    39,    14,    15,    -1,    17,    -1,    19,    46,
      21,    -1,    49,    -1,    25,    26,    27,    28,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    39,    14,
      15,    -1,    17,    -1,    19,    46,    21,    -1,    49,    -1,
      25,    26,    27,    28,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    39,    14,    15,    -1,    17,    -1,
      19,    46,    21,    -1,    49,    -1,    25,    26,    27,    28,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      39,    11,    12,    -1,    14,    15,    -1,    46,    -1,    19,
      49,    21,    -1,    23,    -1,    25,    26,    27,    28,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    39,
      14,    15,    -1,    17,    -1,    19,    46,    21,    -1,    49,
      -1,    25,    26,    27,    28,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    39,    14,    15,    -1,    17,
      -1,    19,    46,    21,    -1,    49,    -1,    25,    26,    27,
      28,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    39,    14,    15,    -1,    17,    -1,    19,    46,    21,
      -1,    49,    -1,    25,    26,    27,    28,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    39,    14,    15,
      -1,    -1,    -1,    19,    46,    21,    -1,    49,    -1,    25,
      26,    27,    28,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    39,    -1,    -1,    -1,    -1,    18,    19,
      46,    21,    -1,    49,    -1,    25,    26,    27,    28,    -1,
      11,    12,    11,    14,    15,    14,    15,    -1,    -1,    39,
      34,    35,    36,    37,    -1,    -1,    46,    28,    -1,    28,
      -1,    45,    46,    -1,    -1,    -1,    50,    51,    39,    -1,
      39,    -1,    -1,    -1,    -1,    46,    -1,    46,    49,    -1,
      49,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    50,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    12,    18,
      19,    21,    25,    26,    27,    28,    39,    46,    53,    54,
      55,    56,    58,    59,    62,    63,    64,    68,    70,    72,
      74,    18,    55,    39,    39,    39,    39,    53,    38,    68,
      72,     0,     3,    11,    14,    15,    28,    39,    46,    49,
      54,    56,    58,    59,    62,    63,    64,    65,    66,    67,
      68,    69,    71,    73,    18,    28,    56,    18,    20,    18,
      45,    46,    47,    48,    56,    28,    66,    68,    75,    28,
      54,    56,    61,    31,    39,    75,    76,    77,    78,    26,
      13,    57,    65,    66,    68,    76,    40,    18,    65,    71,
      39,    46,    71,    18,    18,    18,    42,    43,    44,    32,
      33,    45,    46,    18,    47,    48,    16,    70,    70,    72,
      72,    34,    35,    36,    37,    50,    51,    34,    35,    36,
      37,    50,    51,    40,    40,    18,    78,    68,    76,    29,
      40,    30,    39,    40,    66,    66,    66,    67,    67,    69,
      69,    71,    71,    53,    66,    66,    66,    66,    66,    66,
      68,    68,    68,    68,    68,    68,    16,    22,    76,    40,
      77,    16,    78,    76,    17,    53,    41,    18,    53,    40,
      17,    39,    60,    56,    17,    18,    73,    24,    39,    40,
      40,    53,    73,    16,    16,    23,    40,    53,    53,    16,
      17,    17,    53,    17
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
#line 125 "calc.y"
    {printf("Matched Expression Statement\n");}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 126 "calc.y"
    {printf("Matched Expression Statement\n");}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 130 "calc.y"
    {;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 131 "calc.y"
    {;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 132 "calc.y"
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
#line 138 "calc.y"
    {;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 139 "calc.y"
    {;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 142 "calc.y"
    { ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 143 "calc.y"
    { Values val;
				val.Number = (yyvsp[(3) - (3)].DOOBLE);
				insert(DOUBLE,"yahia",false,val, currentcope); printf("ya rab %c\n", typeid((yyvsp[(3) - (3)].DOOBLE)).name()[0]);}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 147 "calc.y"
    { printf("ya rab %c\n", typeid((yyvsp[(3) - (3)].BOOOL)).name()[0]);}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 148 "calc.y"
    { printf("string is matched %s\n",(yyvsp[(3) - (3)].VARIABLE));}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 157 "calc.y"
    {
													(yyval.VARIABLE) = (yyvsp[(1) - (1)].VARIABLE);
													printf("matched string value %s\n",(yyvsp[(1) - (1)].VARIABLE)); 
												}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 167 "calc.y"
    {;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 168 "calc.y"
    {;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 172 "calc.y"
    {;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 175 "calc.y"
    {;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 178 "calc.y"
    {;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 179 "calc.y"
    {;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 183 "calc.y"
    {;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 187 "calc.y"
    {;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 190 "calc.y"
    {;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 193 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) | (yyvsp[(3) - (3)].NUM);}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 194 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) & (yyvsp[(3) - (3)].NUM);}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 195 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) ^ (yyvsp[(3) - (3)].NUM);}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 196 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 199 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 200 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) << (yyvsp[(3) - (3)].NUM);}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 201 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) >> (yyvsp[(3) - (3)].NUM);}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 208 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 209 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) + (yyvsp[(3) - (3)].NUM);}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 210 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) - (yyvsp[(3) - (3)].NUM);}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 213 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (3)].DOOBLE) + (yyvsp[(3) - (3)].DOOBLE); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 214 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (3)].DOOBLE) - (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 215 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE);}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 218 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) * (yyvsp[(3) - (3)].NUM);}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 219 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) / (yyvsp[(3) - (3)].NUM);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 220 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 223 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (3)].DOOBLE) * (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 224 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (3)].DOOBLE) / (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 225 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE);}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 228 "calc.y"
    {(yyval.NUM) = (yyvsp[(2) - (3)].NUM);}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 229 "calc.y"
    {(yyval.NUM) = -(yyvsp[(2) - (2)].NUM);}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 230 "calc.y"
    {(yyval.NUM) = ~(yyvsp[(2) - (2)].NUM);}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 231 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 234 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(2) - (3)].DOOBLE);}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 235 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE);}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 236 "calc.y"
    {(yyval.DOOBLE) = -(yyvsp[(2) - (2)].DOOBLE);}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 239 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM); printf("i matched integer %d\n",(yyvsp[(1) - (1)].NUM));}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 240 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].LETTER); printf("i matched TTT %d\n",(yyvsp[(1) - (1)].LETTER));}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 241 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 242 "calc.y"
    {;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 250 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE); printf("i matched double %f\n",(yyvsp[(1) - (1)].DOOBLE));}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 255 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) > (yyvsp[(3) - (3)].NUM);}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 256 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) >= (yyvsp[(3) - (3)].NUM);}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 257 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) < (yyvsp[(3) - (3)].NUM);}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 258 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) <= (yyvsp[(3) - (3)].NUM);}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 259 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) == (yyvsp[(3) - (3)].NUM);}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 260 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) != (yyvsp[(3) - (3)].NUM);}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 261 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) > (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 262 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) >= (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 263 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) < (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 264 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) <= (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 265 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) == (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 266 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) != (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 269 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].BOOOL) || (yyvsp[(3) - (3)].BOOOL);}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 270 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 273 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].BOOOL) && (yyvsp[(3) - (3)].BOOOL);}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 274 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 277 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(2) - (3)].BOOOL);}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 278 "calc.y"
    {(yyval.BOOOL) = !(yyvsp[(2) - (2)].BOOOL);}
    break;



/* Line 1455 of yacc.c  */
#line 2335 "y.tab.c"
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
#line 282 "calc.y"
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

