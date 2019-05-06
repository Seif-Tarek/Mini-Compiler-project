
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
#include<fstream>
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <string>
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
string variable;
void StoreVarib(char*V);
int x=0,label_num=0,label[20],ltop=0,top=0;
string st1[100];
string temp_count="0";
string flag_count="0";
string temp="t";
string flag="f";
string switchVar="";
int valueNumber=0;
int type=0,L1=0,L2=0;
void store()
{
	ofstream myfile;
  	myfile.open ("Code_Generated.txt",ios::app);
    myfile << "Store" << " ( "<<variable<<" , "<<st1[top]<<" )"<< "\n";
	myfile.close();
}
void codegen()
{
	ofstream myfile;
  	myfile.open ("Code_Generated.txt",ios::app);
    myfile << st1[top-1] << " ( "<<temp<<temp_count<<" , "<<st1[top-2]<<" , "<<st1[top]<<" )"<< "\n";
	top-=2;
	st1[top]=temp+temp_count;
	temp_count[0]++;
	myfile.close();
}

void setFlag()
{
	ofstream myfile;
  	myfile.open ("Code_Generated.txt",ios::app);
    myfile << st1[top-1] << " ( "<<flag<<flag_count<<" , "<<st1[top-2]<<" , "<<st1[top]<<" )"<< "\n";
	top-=2;
	st1[top]=flag+flag_count;
	flag_count[0]++;
	myfile.close();
}

void setFlag_Not()
{
	ofstream myfile;
  	myfile.open ("Code_Generated.txt",ios::app);
    myfile << st1[top] << " ( "<<flag<<flag_count<<" , "<<st1[top-1]<<" )"<< "\n";
	top-=1;
	st1[top]=flag+flag_count;
	flag_count[0]++;
	myfile.close();
}

void codegen_minus()
{
	ofstream myfile;
  	myfile.open ("Code_Generated.txt",ios::app);
    myfile << st1[top] << " ( "<<temp<<temp_count<<" , "<<st1[top-1]<<" )"<< "\n";
	top-=1;
	st1[top]=temp+temp_count;
	temp_count[0]++;
	myfile.close();
}

		void switch1(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			myfile << "L"<<L1<<":\n";
			myfile.close();
		}
		void switch2(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			myfile << "JMP L"<<L1<<"\n";
			myfile.close();
		}
		void switchMain(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			myfile << "L"<<label_num<<":\n";
			myfile << "cmp("<<switchVar<<" , "<<st1[top]<<") \n";
			top--;
			label_num++;
			myfile << "JNE L"<<label_num<<"\n";
			label[++ltop]=label_num;
			myfile.close();
		}
		void switch_8ear_kda(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			myfile << "L"<<label_num<<":\n";
			label_num++;
			myfile.close();
		}
		void for1(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			label_num++;
			myfile << "L"<<label_num<<":\n";
			label[++ltop]=label_num;
			myfile.close();
		}

		void for2(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			flag_count[0]--;
			myfile << "cmp(f"<<flag_count<<",0) \n";
			flag_count[0]++;
			label_num++;
			myfile << "JE L"<<label_num<<"\n";
			label[++ltop]=label_num;
			myfile.close();
		}

		void for3(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			myfile << "JMP L"<<label[ltop-1]<<"\n";
			myfile << "L"<<label[ltop--]<<":\n";
			ltop--;
			myfile.close();
		}

		void while1(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			label_num++;
			myfile << "L"<<label_num<<":\n";
			label[++ltop]=label_num;
			myfile.close();
		}

		void while2(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			flag_count[0]--;
			myfile << "cmp(f"<<flag_count<<",0) \n";
			flag_count[0]++;
			label_num++;
			myfile << "JE L"<<label_num<<"\n";
			label[++ltop]=label_num;
			myfile.close();
		}

		void while3(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			myfile << "JMP L"<<label[ltop-1]<<"\n";
			myfile << "L"<<label[ltop--]<<":\n";
			ltop--;
			myfile.close();
		}

		void if1(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			label_num++;
			flag_count[0]--;
			myfile << "cmp(f"<<flag_count<<",0) \n";
			flag_count[0]++;
			myfile << "JE L"<<label_num<<"\n";
			label[++ltop]=label_num;
			myfile.close();
		}

		void if2(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			myfile << "L"<<label[ltop--]<<":\n";
			myfile.close();
		}
		void if3(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			label_num++;
			flag_count[0]--;
			myfile << "cmp(f"<<flag_count<<",0) \n";
			flag_count[0]++;
			myfile << "JNE L"<<label_num<<"\n";
			label[++ltop]=label_num;
			myfile.close();
		}

		void if4(){
			printf("L%d: \n",label[ltop--]);
		}



/* Line 189 of yacc.c  */
#line 287 "y.tab.c"

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
     WHILE_LOOP_STATEMENT_TOKEN_TEST = 283,
     IDENTIFIER_TOKEN = 284,
     OR = 285,
     AND = 286,
     NOT = 287,
     EQUAL_SIGN = 288,
     EXP_NOT = 289,
     SHIFT_LEFT = 290,
     SHIFT_RIGHT = 291,
     GREATER_THAN_EQUAL = 292,
     LESS_THAN_EQUAL = 293,
     EQUAL_EQUAL = 294,
     NOT_EQUAL = 295
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
#define WHILE_LOOP_STATEMENT_TOKEN_TEST 283
#define IDENTIFIER_TOKEN 284
#define OR 285
#define AND 286
#define NOT 287
#define EQUAL_SIGN 288
#define EXP_NOT 289
#define SHIFT_LEFT 290
#define SHIFT_RIGHT 291
#define GREATER_THAN_EQUAL 292
#define LESS_THAN_EQUAL 293
#define EQUAL_EQUAL 294
#define NOT_EQUAL 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 214 "calc.y"

	long NUM; 
	int BOOOL;
	char* VARIABLE;
	double DOOBLE;
	char LETTER;



/* Line 214 of yacc.c  */
#line 413 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 425 "y.tab.c"

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
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   774

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  142
/* YYNRULES -- Number of states.  */
#define YYNSTATES  251

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,     2,
      41,    42,    48,    46,     2,    47,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      51,     2,    50,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    43,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    16,    20,    23,    25,
      28,    30,    33,    35,    38,    40,    43,    45,    49,    51,
      55,    59,    62,    65,    68,    72,    74,    76,    78,    80,
      82,    84,    88,    92,    96,   100,   102,   103,   104,   114,
     115,   116,   124,   125,   126,   127,   140,   141,   142,   143,
     144,   156,   157,   158,   159,   160,   171,   173,   175,   176,
     177,   191,   192,   193,   203,   204,   213,   214,   219,   220,
     225,   226,   231,   233,   235,   236,   241,   242,   247,   249,
     250,   255,   256,   261,   262,   267,   268,   273,   275,   276,
     281,   282,   287,   289,   290,   295,   296,   301,   303,   307,
     310,   313,   315,   319,   321,   324,   326,   328,   330,   332,
     334,   335,   340,   341,   346,   347,   352,   353,   358,   359,
     364,   365,   370,   371,   376,   377,   382,   383,   388,   389,
     394,   395,   400,   401,   406,   407,   412,   414,   415,   420,
     422,   426,   429
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    57,    18,    -1,     3,    18,    -1,    54,
      18,    -1,    53,    54,    18,    -1,    53,    57,    18,    -1,
      53,    78,    -1,    78,    -1,    53,    59,    -1,    59,    -1,
      53,    64,    -1,    64,    -1,    53,    81,    -1,    81,    -1,
      53,    84,    -1,    84,    -1,    53,     3,    18,    -1,    18,
      -1,    53,    86,    18,    -1,    53,    96,    18,    -1,    96,
      18,    -1,    55,    56,    -1,    55,    57,    -1,     9,    55,
      57,    -1,     4,    -1,     6,    -1,     8,    -1,     7,    -1,
       5,    -1,    29,    -1,    56,    33,    86,    -1,    56,    33,
      96,    -1,    56,    33,   122,    -1,    56,    33,    58,    -1,
      13,    -1,    -1,    -1,    19,    41,   122,    42,    16,    60,
      53,    17,    61,    -1,    -1,    -1,    59,    20,    62,    16,
      53,    17,    63,    -1,    -1,    -1,    -1,    21,    65,    41,
      29,    66,    42,    22,    68,    24,    67,    53,    23,    -1,
      -1,    -1,    -1,    -1,    68,    41,   107,    69,    42,    70,
      16,    71,    53,    72,    17,    -1,    -1,    -1,    -1,    -1,
      41,   107,    73,    42,    74,    16,    75,    53,    76,    17,
      -1,    57,    -1,    54,    -1,    -1,    -1,    25,    41,    77,
      18,    79,   122,    18,    57,    42,    16,    80,    53,    17,
      -1,    -1,    -1,    26,    82,    41,   122,    42,    16,    83,
      53,    17,    -1,    -1,    85,    27,    53,    28,    41,   122,
      42,    18,    -1,    -1,    86,    43,    87,    90,    -1,    -1,
      86,    44,    88,    90,    -1,    -1,    86,    45,    89,    90,
      -1,    90,    -1,    93,    -1,    -1,    90,    35,    91,    93,
      -1,    -1,    90,    36,    92,    93,    -1,    99,    -1,    -1,
      93,    46,    94,    99,    -1,    -1,    93,    47,    95,    99,
      -1,    -1,    96,    46,    97,   102,    -1,    -1,    96,    47,
      98,   102,    -1,   102,    -1,    -1,    99,    48,   100,   105,
      -1,    -1,    99,    49,   101,   105,    -1,   105,    -1,    -1,
     102,    48,   103,   106,    -1,    -1,   102,    49,   104,   106,
      -1,   106,    -1,    41,    86,    42,    -1,    47,   105,    -1,
      34,   105,    -1,   107,    -1,    41,    96,    42,    -1,   108,
      -1,    47,   106,    -1,    11,    -1,    14,    -1,    15,    -1,
      29,    -1,    12,    -1,    -1,    90,    50,   110,    90,    -1,
      -1,    90,    37,   111,    90,    -1,    -1,    90,    51,   112,
      90,    -1,    -1,    90,    38,   113,    90,    -1,    -1,    90,
      39,   114,    90,    -1,    -1,    90,    40,   115,    90,    -1,
      -1,    96,    50,   116,    96,    -1,    -1,    96,    37,   117,
      96,    -1,    -1,    96,    51,   118,    96,    -1,    -1,    96,
      38,   119,    96,    -1,    -1,    96,    39,   120,    96,    -1,
      -1,    96,    40,   121,    96,    -1,    -1,   122,    30,   123,
     124,    -1,   124,    -1,    -1,   124,    31,   125,   126,    -1,
     126,    -1,    41,   122,    42,    -1,    32,   126,    -1,   109,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   299,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   322,   323,   333,   336,   337,   338,   339,   340,
     342,   344,   345,   347,   348,   357,   369,   369,   369,   370,
     370,   370,   374,   375,   375,   374,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   381,   382,   386,   386,
     386,   390,   390,   390,   392,   392,   395,   395,   396,   396,
     397,   397,   398,   401,   402,   402,   403,   403,   410,   411,
     411,   412,   412,   415,   415,   416,   416,   417,   420,   420,
     421,   421,   422,   425,   425,   426,   426,   427,   430,   431,
     432,   433,   436,   437,   438,   441,   442,   443,   444,   452,
     457,   457,   458,   458,   459,   459,   460,   460,   461,   461,
     462,   462,   463,   463,   464,   464,   465,   465,   466,   466,
     467,   467,   468,   468,   471,   471,   472,   475,   475,   476,
     479,   480,   481
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
  "WHILE_LOOP_STATEMENT_TOKEN", "DO_STATEMENT_TOKEN",
  "WHILE_LOOP_STATEMENT_TOKEN_TEST", "IDENTIFIER_TOKEN", "OR", "AND",
  "NOT", "EQUAL_SIGN", "EXP_NOT", "SHIFT_LEFT", "SHIFT_RIGHT",
  "GREATER_THAN_EQUAL", "LESS_THAN_EQUAL", "EQUAL_EQUAL", "NOT_EQUAL",
  "'('", "')'", "'|'", "'&'", "'^'", "'+'", "'-'", "'*'", "'/'", "'>'",
  "'<'", "$accept", "line", "declaration", "data_type", "TEST_ID",
  "assignment", "string_value_assignment", "if_statement", "$@1", "$@2",
  "$@3", "$@4", "switch_statement", "$@5", "$@6", "$@7", "case_statement",
  "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15",
  "for_iterator", "for_statement", "$@16", "$@17", "while_statement",
  "$@18", "$@19", "repeat_statement", "$@20", "expbitwise", "$@21", "$@22",
  "$@23", "exp", "$@24", "$@25", "expAddSubtract", "$@26", "$@27",
  "double_value_expAddSubtract", "$@28", "$@29", "component", "$@30",
  "$@31", "double_value_component", "$@32", "$@33", "factor",
  "double_value_factor", "term", "double_value_term", "Bexp", "$@34",
  "$@35", "$@36", "$@37", "$@38", "$@39", "$@40", "$@41", "$@42", "$@43",
  "$@44", "$@45", "Bexp1", "$@46", "Bexpand", "$@47", "Bexpbracket", 0
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
     295,    40,    41,   124,    38,    94,    43,    45,    42,    47,
      62,    60
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    54,    54,    54,    55,    55,    55,    55,    55,
      56,    57,    57,    57,    57,    58,    60,    61,    59,    62,
      63,    59,    65,    66,    67,    64,    69,    70,    71,    72,
      68,    73,    74,    75,    76,    68,    77,    77,    79,    80,
      78,    82,    83,    81,    85,    84,    87,    86,    88,    86,
      89,    86,    86,    90,    91,    90,    92,    90,    93,    94,
      93,    95,    93,    97,    96,    98,    96,    96,   100,    99,
     101,    99,    99,   103,   102,   104,   102,   102,   105,   105,
     105,   105,   106,   106,   106,   107,   107,   107,   107,   108,
     110,   109,   111,   109,   112,   109,   113,   109,   114,   109,
     115,   109,   116,   109,   117,   109,   118,   109,   119,   109,
     120,   109,   121,   109,   123,   122,   122,   125,   124,   124,
     126,   126,   126
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     3,     3,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     3,     1,     3,
       3,     2,     2,     2,     3,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     1,     0,     0,     9,     0,
       0,     7,     0,     0,     0,    12,     0,     0,     0,     0,
      11,     0,     0,     0,     0,    10,     1,     1,     0,     0,
      13,     0,     0,     9,     0,     8,     0,     4,     0,     4,
       0,     4,     1,     1,     0,     4,     0,     4,     1,     0,
       4,     0,     4,     0,     4,     0,     4,     1,     0,     4,
       0,     4,     1,     0,     4,     0,     4,     1,     3,     2,
       2,     1,     3,     1,     2,     1,     1,     1,     1,     1,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     1,     0,     4,     1,
       3,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      64,     0,    25,    29,    26,    28,    27,     0,   109,    18,
       0,    42,     0,    61,    30,     0,     0,    64,     0,     0,
       0,     0,    10,    12,     8,    14,    16,     0,     0,    87,
      97,   103,     3,     0,     0,     0,     0,     0,     0,   104,
       1,     0,   105,   106,   107,   108,     0,     0,     0,     0,
       0,     9,    11,     7,    13,    15,     0,    72,    73,     0,
      78,    92,   101,     4,    22,    23,     0,     2,    39,    64,
      21,    83,    85,    93,    95,    24,   108,     0,     0,     0,
       0,   142,     0,   136,   139,     0,    57,    56,     0,     0,
     102,    17,     0,     0,   100,     0,    99,     5,     6,    19,
      66,    68,    70,    74,    76,    79,    81,    20,    88,    90,
      35,    34,    31,    72,    32,    33,     0,    64,     0,     0,
       0,     0,   141,     0,     0,   112,   116,   118,   120,   110,
     114,   124,   128,   130,   132,   122,   126,   134,     0,   137,
      43,    58,     0,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    64,     0,    84,    86,    94,    96,   140,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,    67,    69,
      71,    75,    77,    80,    82,    89,    91,    64,     0,   113,
     117,   119,   121,   111,   115,   125,   129,   131,   133,   123,
     127,   135,    64,   138,     0,     0,    62,    40,     0,    64,
       0,     0,    64,    41,     0,    37,     0,     0,     0,    64,
      65,    38,    51,    44,     0,     0,    63,     0,    64,    46,
      59,    52,    64,     0,    64,     0,    45,    47,    64,    53,
       0,    60,    64,    48,    54,    64,     0,    49,    55,     0,
      50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,    18,    19,    20,    21,   111,    22,   202,   221,
     116,   213,    23,    35,   175,   228,   217,   233,   240,   245,
     249,   227,   235,   242,   246,    88,    24,   176,   234,    25,
      37,   212,    26,    27,    56,   144,   145,   146,    57,   147,
     148,    58,   149,   150,    28,   118,   119,    60,   151,   152,
      29,   120,   121,    61,    30,    62,    31,    81,   164,   160,
     165,   161,   162,   163,   170,   166,   171,   167,   168,   169,
      82,   172,    83,   174,    84
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -202
static const yytype_int16 yypact[] =
{
     704,    -5,  -202,  -202,  -202,  -202,  -202,   301,  -202,  -202,
     -17,  -202,   -13,  -202,  -202,    -1,    -1,   314,     8,    18,
       1,    34,    50,  -202,  -202,  -202,  -202,    54,     3,    62,
    -202,  -202,  -202,    18,   703,    51,    90,    63,    61,  -202,
    -202,    72,  -202,  -202,  -202,    76,    46,   727,   727,    97,
     100,    50,  -202,  -202,  -202,  -202,    41,    37,    74,    30,
      79,  -202,  -202,  -202,     1,  -202,    24,  -202,  -202,   704,
    -202,  -202,  -202,  -202,  -202,  -202,  -202,   703,   703,    94,
     150,  -202,   -12,   106,  -202,   112,  -202,  -202,   140,   703,
    -202,  -202,    46,    46,  -202,   123,  -202,  -202,  -202,  -202,
    -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,
    -202,  -202,    80,    94,   150,   130,   146,   389,    -1,    -1,
      -1,    -1,  -202,   382,    36,  -202,  -202,  -202,  -202,  -202,
    -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,   147,  -202,
    -202,  -202,    49,  -202,    46,    46,    46,    46,    46,    46,
      46,    46,    46,   704,   133,    62,    62,  -202,  -202,  -202,
      46,    46,    46,    46,    46,    46,    -1,    -1,    -1,    -1,
      -1,    -1,   703,  -202,   703,   135,   703,   159,    37,    37,
      37,    74,    74,    79,    79,  -202,  -202,   434,   703,    37,
      37,    37,    37,    37,    37,    89,    89,    89,    89,    89,
      89,   106,   704,  -202,   157,    15,  -202,  -202,    58,   479,
     139,    18,   704,  -202,   164,  -202,    53,   -10,   142,   524,
    -202,  -202,  -202,  -202,    53,   169,  -202,   144,   704,  -202,
    -202,  -202,   569,   149,   704,   183,  -202,  -202,   614,  -202,
     186,  -202,   704,  -202,   659,   704,   188,   659,  -202,   189,
    -202
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -202,   -64,   -11,   200,   190,   -16,  -202,     5,  -202,  -202,
    -202,  -202,    25,  -202,  -202,  -202,  -202,  -202,  -202,  -202,
    -202,  -202,  -202,  -202,  -202,  -202,    26,  -202,  -202,    52,
    -202,  -202,    66,  -202,   -37,  -202,  -202,  -202,   214,  -202,
    -202,    -8,  -202,  -202,   -15,  -202,  -202,    -3,  -202,  -202,
      31,  -202,  -202,   -39,    -4,  -201,  -202,  -202,  -202,  -202,
    -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,
     -62,  -202,    38,  -202,   -69
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -65
static const yytype_int16 yytable[] =
{
      38,    50,    59,    65,   115,   117,    49,    94,   122,    96,
      95,     8,    39,    32,   223,   222,   124,    75,   137,    80,
      87,    70,    51,   229,    34,    86,    63,   142,    36,   112,
     138,   224,    38,   211,    66,    42,     8,   110,    43,    44,
      15,    95,    52,    53,    39,   137,    16,    14,   107,    71,
      72,   114,    67,    76,    96,    95,    77,    42,    46,    99,
      43,    44,    80,   123,    42,    78,   137,    43,    44,    54,
      68,    48,   103,   104,    80,    76,    71,    72,   159,   137,
      46,    69,    76,    55,   100,   101,   102,    92,   137,   187,
      91,   177,    85,    93,     2,     3,     4,     5,     6,     7,
     214,    50,    59,    90,    89,   203,    49,    71,    72,   -30,
      73,    74,   185,   186,   205,    97,   157,   158,    98,    14,
     105,   106,    51,   100,   101,   102,   208,   108,   109,   103,
     104,   125,   126,   127,   128,    71,    72,   139,   209,   181,
     182,   140,    52,    53,   129,   130,   183,   184,   219,   155,
     156,   195,   196,   197,   198,   199,   200,    80,   141,    80,
     137,    80,   153,   173,   232,   143,   100,   101,   102,    54,
     238,    50,    59,    80,   188,   206,    49,   204,   244,   210,
     216,   247,   220,    55,   225,   230,   231,   131,   132,   133,
     134,   237,    51,    50,    59,   218,    71,    72,    49,   239,
     135,   136,   243,    50,    59,   248,   250,    33,    49,    64,
     201,     0,    52,    53,    51,     0,    50,    59,     0,     0,
       0,    49,    50,    59,    51,     0,     0,    49,    50,    59,
       0,    50,    59,    49,    52,    53,    49,    51,     0,    54,
       0,     0,     0,    51,    52,    53,     0,     0,    79,    51,
       0,     0,    51,    55,     0,     0,     0,    52,    53,     0,
       0,    54,     0,    52,    53,     0,     0,     0,     0,    52,
      53,    54,    52,    53,     0,    55,     0,     0,     0,     0,
     113,     0,     0,     0,    54,    55,     0,     0,     0,     0,
      54,    79,   113,     0,     0,     0,    54,     0,    55,    54,
       0,     0,     0,    79,    55,     2,     3,     4,     5,     6,
      55,     0,     0,    55,    40,     0,     0,    41,     2,     3,
       4,     5,     6,     7,     0,    42,     8,     0,    43,    44,
       0,     0,     0,    10,     0,    11,     0,     0,     0,    12,
      13,     0,     0,    45,     0,     0,     0,     0,    46,     0,
       0,     0,     0,     0,     0,    47,     0,     0,   178,   179,
     180,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   189,   190,   191,   192,   193,   194,
       0,     0,     0,     0,     0,     0,    79,     0,    79,     0,
      79,     0,    41,     2,     3,     4,     5,     6,     7,     0,
      42,     8,    79,    43,    44,     0,     0,     0,    10,     0,
      11,     0,     0,     0,    12,    13,     0,   154,    45,   131,
     132,   133,   134,    46,    90,     0,     0,     0,    71,    72,
      47,     0,   135,   136,     0,     0,    48,    41,     2,     3,
       4,     5,     6,     7,     0,    42,     8,     0,    43,    44,
       0,   207,     0,    10,     0,    11,     0,     0,     0,    12,
      13,     0,     0,    45,     0,     0,     0,     0,    46,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,    48,    41,     2,     3,     4,     5,     6,     7,     0,
      42,     8,     0,    43,    44,     0,   215,     0,    10,     0,
      11,     0,     0,     0,    12,    13,     0,     0,    45,     0,
       0,     0,     0,    46,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,     0,    48,    41,     2,     3,
       4,     5,     6,     7,     0,    42,     8,     0,    43,    44,
       0,   226,     0,    10,     0,    11,     0,     0,     0,    12,
      13,     0,     0,    45,     0,     0,     0,     0,    46,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,    48,    41,     2,     3,     4,     5,     6,     7,     0,
      42,     8,     0,    43,    44,     0,     0,     0,    10,     0,
      11,     0,   236,     0,    12,    13,     0,     0,    45,     0,
       0,     0,     0,    46,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,     0,    48,    41,     2,     3,
       4,     5,     6,     7,     0,    42,     8,     0,    43,    44,
       0,   241,     0,    10,     0,    11,     0,     0,     0,    12,
      13,     0,     0,    45,     0,     0,     0,     0,    46,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,    48,    41,     2,     3,     4,     5,     6,     7,     0,
      42,     8,     0,    43,    44,     0,     0,     0,    10,     0,
      11,     0,     0,     0,    12,    13,   -64,     0,    45,     0,
       0,     0,     0,    46,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,     0,    48,     1,     2,     3,
       4,     5,     6,     7,    42,     8,     8,    43,    44,     0,
       0,     0,     9,    10,     0,    11,     0,     0,     0,    12,
      13,     0,    76,    14,     0,    77,     0,    46,    42,     8,
       0,    43,    44,     0,    78,    15,     0,     0,     0,     0,
      48,    16,     0,     0,     0,     0,    76,     0,     0,     0,
       0,    46,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,    48
};

static const yytype_int16 yycheck[] =
{
      15,    17,    17,    19,    66,    69,    17,    46,    77,    48,
      47,    12,    16,    18,    24,   216,    78,    33,    30,    34,
      36,    18,    17,   224,    41,    36,    18,    89,    41,    66,
      42,    41,    47,    18,    33,    11,    12,    13,    14,    15,
      41,    78,    17,    17,    48,    30,    47,    29,    18,    46,
      47,    66,    18,    29,    93,    92,    32,    11,    34,    18,
      14,    15,    77,    78,    11,    41,    30,    14,    15,    17,
      20,    47,    35,    36,    89,    29,    46,    47,    42,    30,
      34,    27,    29,    17,    43,    44,    45,    41,    30,   153,
      18,    42,    41,    47,     4,     5,     6,     7,     8,     9,
      42,   117,   117,    42,    41,   174,   117,    46,    47,    33,
      48,    49,   151,   152,   176,    18,   120,   121,    18,    29,
      46,    47,   117,    43,    44,    45,   188,    48,    49,    35,
      36,    37,    38,    39,    40,    46,    47,    31,   202,   147,
     148,    29,   117,   117,    50,    51,   149,   150,   212,   118,
     119,   166,   167,   168,   169,   170,   171,   172,    18,   174,
      30,   176,    16,    16,   228,    42,    43,    44,    45,   117,
     234,   187,   187,   188,    41,    16,   187,    42,   242,    22,
      41,   245,    18,   117,    42,    16,    42,    37,    38,    39,
      40,    42,   187,   209,   209,   211,    46,    47,   209,    16,
      50,    51,    16,   219,   219,    17,    17,     7,   219,    19,
     172,    -1,   187,   187,   209,    -1,   232,   232,    -1,    -1,
      -1,   232,   238,   238,   219,    -1,    -1,   238,   244,   244,
      -1,   247,   247,   244,   209,   209,   247,   232,    -1,   187,
      -1,    -1,    -1,   238,   219,   219,    -1,    -1,    34,   244,
      -1,    -1,   247,   187,    -1,    -1,    -1,   232,   232,    -1,
      -1,   209,    -1,   238,   238,    -1,    -1,    -1,    -1,   244,
     244,   219,   247,   247,    -1,   209,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,   232,   219,    -1,    -1,    -1,    -1,
     238,    77,    78,    -1,    -1,    -1,   244,    -1,   232,   247,
      -1,    -1,    -1,    89,   238,     4,     5,     6,     7,     8,
     244,    -1,    -1,   247,     0,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,   144,   145,
     146,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,   161,   162,   163,   164,   165,
      -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,
     176,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,   188,    14,    15,    -1,    -1,    -1,    19,    -1,
      21,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    37,
      38,    39,    40,    34,    42,    -1,    -1,    -1,    46,    47,
      41,    -1,    50,    51,    -1,    -1,    47,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    14,    15,
      -1,    17,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    47,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    14,    15,    -1,    17,    -1,    19,    -1,
      21,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    47,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    14,    15,
      -1,    17,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    47,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    19,    -1,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    47,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    14,    15,
      -1,    17,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    47,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    19,    -1,
      21,    -1,    -1,    -1,    25,    26,    27,    -1,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    47,     3,     4,     5,
       6,     7,     8,     9,    11,    12,    12,    14,    15,    -1,
      -1,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    25,
      26,    -1,    29,    29,    -1,    32,    -1,    34,    11,    12,
      -1,    14,    15,    -1,    41,    41,    -1,    -1,    -1,    -1,
      47,    47,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    12,    18,
      19,    21,    25,    26,    29,    41,    47,    53,    54,    55,
      56,    57,    59,    64,    78,    81,    84,    85,    96,   102,
     106,   108,    18,    55,    41,    65,    41,    82,    96,   106,
       0,     3,    11,    14,    15,    29,    34,    41,    47,    54,
      57,    59,    64,    78,    81,    84,    86,    90,    93,    96,
      99,   105,   107,    18,    56,    57,    33,    18,    20,    27,
      18,    46,    47,    48,    49,    57,    29,    32,    41,    90,
      96,   109,   122,   124,   126,    41,    54,    57,    77,    41,
      42,    18,    41,    47,   105,    86,   105,    18,    18,    18,
      43,    44,    45,    35,    36,    46,    47,    18,    48,    49,
      13,    58,    86,    90,    96,   122,    62,    53,    97,    98,
     103,   104,   126,    96,   122,    37,    38,    39,    40,    50,
      51,    37,    38,    39,    40,    50,    51,    30,    42,    31,
      29,    18,   122,    42,    87,    88,    89,    91,    92,    94,
      95,   100,   101,    16,    28,   102,   102,   106,   106,    42,
     111,   113,   114,   115,   110,   112,   117,   119,   120,   121,
     116,   118,   123,    16,   125,    66,    79,    42,    90,    90,
      90,    93,    93,    99,    99,   105,   105,    53,    41,    90,
      90,    90,    90,    90,    90,    96,    96,    96,    96,    96,
      96,   124,    60,   126,    42,   122,    16,    17,   122,    53,
      22,    18,    83,    63,    42,    17,    41,    68,    57,    53,
      18,    61,   107,    24,    41,    42,    17,    73,    67,   107,
      16,    42,    53,    69,    80,    74,    23,    42,    53,    16,
      70,    17,    75,    16,    53,    71,    76,    53,    17,    72,
      17
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
#line 299 "calc.y"
    {printf("Matched assignment\n");}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 300 "calc.y"
    {printf("Matched fedahya\n");exit(EXIT_SUCCESS);}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 301 "calc.y"
    {printf("Matched Declarations\n");}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 302 "calc.y"
    {printf("Matched Declarations\n");}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 303 "calc.y"
    {printf("Matched assignment\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 304 "calc.y"
    {printf("Matched loop: for\n");}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 305 "calc.y"
    {printf("Matched loop: for\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 306 "calc.y"
    {printf("Matched flow control: if\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 307 "calc.y"
    {printf("Matched flow control: if\n");}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 308 "calc.y"
    {printf("Matched flow control: switch\n");}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 309 "calc.y"
    {printf("Matched flow control: switch\n");}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 310 "calc.y"
    {printf("Matched loop: while\n");}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 311 "calc.y"
    {printf("Matched loop: while\n");}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 312 "calc.y"
    {printf("Matched loop: do-while\n");}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 313 "calc.y"
    {printf("Matched loop: do-while\n");}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 314 "calc.y"
    {printf("Matched fedahya\n");exit(EXIT_SUCCESS);}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 315 "calc.y"
    {printf("Matched Empty statement\n");}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 316 "calc.y"
    {printf("Matched Expression Statement\n");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 317 "calc.y"
    {printf("Matched Expression Statement\n");}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 318 "calc.y"
    {printf("Matched Expression Statement\n");}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 322 "calc.y"
    { printf("ya rab %s\n", (yyvsp[(2) - (2)].VARIABLE));}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 324 "calc.y"
    { Values val;
				val.Number = valueNumber;
				char * c = new char[variable.size() + 1];
				std::copy(variable.begin(), variable.end(), c);
				if(c[variable.size()-1]=='=')
					c[variable.size()-1] = '\0';
				c[variable.size()] = '\0'; // don't forget the terminating 0

				insert(type,c,false,val, currentcope);}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 333 "calc.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 336 "calc.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 337 "calc.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 338 "calc.y"
    {;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 339 "calc.y"
    {;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 340 "calc.y"
    {;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 342 "calc.y"
    {(yyval.VARIABLE)=(yyvsp[(1) - (1)].VARIABLE); variable=(yyvsp[(1) - (1)].VARIABLE);cout<<"VARIABLE_COUT = "<<variable<<endl;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 344 "calc.y"
    {valueNumber=(yyvsp[(3) - (3)].NUM);type=2;store();}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 345 "calc.y"
    {valueNumber=(yyvsp[(3) - (3)].DOOBLE);type=3;store();}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 347 "calc.y"
    { printf("ya rab %c\n", typeid((yyvsp[(3) - (3)].BOOOL)).name()[0]);store();}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 348 "calc.y"
    { printf("string is matched %s\n",(yyvsp[(3) - (3)].VARIABLE));store();}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 357 "calc.y"
    {
													(yyval.VARIABLE) = (yyvsp[(1) - (1)].VARIABLE);
													printf("matched string value %s\n",(yyvsp[(1) - (1)].VARIABLE)); 
												}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 369 "calc.y"
    {if1();}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 369 "calc.y"
    {if2();}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 369 "calc.y"
    {;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 370 "calc.y"
    {if3();}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 370 "calc.y"
    {if2();}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 370 "calc.y"
    {;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 374 "calc.y"
    {L1=label_num; label_num++;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 375 "calc.y"
    {switchVar=(yyvsp[(4) - (4)].VARIABLE);}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 375 "calc.y"
    {x=1;switch_8ear_kda();}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 375 "calc.y"
    {switch1();x=0;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 378 "calc.y"
    {st1[++top]=std::to_string((yyvsp[(3) - (3)].NUM));}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 378 "calc.y"
    {switchMain();}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 378 "calc.y"
    {x=1;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 378 "calc.y"
    {switch2();}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 378 "calc.y"
    {x=0;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 378 "calc.y"
    {st1[++top]=std::to_string((yyvsp[(2) - (2)].NUM));}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 378 "calc.y"
    {switchMain();}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 378 "calc.y"
    {x=1;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 378 "calc.y"
    {switch2();}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 378 "calc.y"
    {x=0;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 381 "calc.y"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 382 "calc.y"
    {;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 386 "calc.y"
    {for1();}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 386 "calc.y"
    {for2();}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 386 "calc.y"
    {for3();}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 390 "calc.y"
    {for1();}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 390 "calc.y"
    {x=1;for2();}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 390 "calc.y"
    {x=0;for3();}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 392 "calc.y"
    {for1();}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 392 "calc.y"
    {for2();for3();}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 395 "calc.y"
    {st1[++top]="BitOR";}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 395 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) | (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 396 "calc.y"
    {st1[++top]="BitAND";}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 396 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) & (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 397 "calc.y"
    {st1[++top]="XOR";}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 397 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) ^ (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 398 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 401 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 402 "calc.y"
    {st1[++top]="SHIFT_LEFT";}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 402 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) << (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 403 "calc.y"
    {st1[++top]="SHIFT_RIGHT";}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 403 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) >> (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 410 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 411 "calc.y"
    {st1[++top]="ADD";}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 411 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) + (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 412 "calc.y"
    {st1[++top]="SUB";}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 412 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) - (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 415 "calc.y"
    {st1[++top]="ADD";printf("%s\n",st1[top].c_str());}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 415 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (4)].DOOBLE) + (yyvsp[(4) - (4)].DOOBLE);codegen(); }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 416 "calc.y"
    {st1[++top]="SUB";}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 416 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (4)].DOOBLE) - (yyvsp[(4) - (4)].DOOBLE);codegen();}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 417 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE);}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 420 "calc.y"
    {st1[++top]="MUL";}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 420 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) * (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 421 "calc.y"
    {st1[++top]="DIV";}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 421 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) / (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 422 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 425 "calc.y"
    {st1[++top]="MUL";}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 425 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (4)].DOOBLE) * (yyvsp[(4) - (4)].DOOBLE);codegen();}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 426 "calc.y"
    {st1[++top]="DIV";}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 426 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (4)].DOOBLE) / (yyvsp[(4) - (4)].DOOBLE);codegen();}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 427 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE);}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 430 "calc.y"
    {(yyval.NUM) = (yyvsp[(2) - (3)].NUM);}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 431 "calc.y"
    {(yyval.NUM) = -(yyvsp[(2) - (2)].NUM);st1[++top]="NEG";codegen_minus();}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 432 "calc.y"
    {(yyval.NUM) = ~(yyvsp[(2) - (2)].NUM);st1[++top]="BitNOT";codegen_minus();}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 433 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 436 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(2) - (3)].DOOBLE);}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 437 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE);}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 438 "calc.y"
    {(yyval.DOOBLE) = -(yyvsp[(2) - (2)].DOOBLE);st1[++top]="NEG";codegen_minus();}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 441 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM); st1[++top]=std::to_string((yyvsp[(1) - (1)].NUM)); printf("i matched integer %d %s\n",(yyvsp[(1) - (1)].NUM),st1[top].c_str());}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 442 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].LETTER);  printf("i matched TTT %d\n",(yyvsp[(1) - (1)].LETTER));}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 443 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 444 "calc.y"
    {st1[++top]=(yyvsp[(1) - (1)].VARIABLE);}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 452 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE); st1[++top]=std::to_string((yyvsp[(1) - (1)].DOOBLE)); printf("i matched double %f \n",(yyvsp[(1) - (1)].DOOBLE));}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 457 "calc.y"
    {st1[++top]="GreaterThan";}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 457 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].NUM) > (yyvsp[(4) - (4)].NUM);setFlag();}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 458 "calc.y"
    {st1[++top]="GreaterThanOrEqual";}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 458 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].NUM) >= (yyvsp[(4) - (4)].NUM);setFlag();}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 459 "calc.y"
    {st1[++top]="SmallerThan";}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 459 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].NUM) < (yyvsp[(4) - (4)].NUM);setFlag();}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 460 "calc.y"
    {st1[++top]="SmallerThanOrEqual";}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 460 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].NUM) <= (yyvsp[(4) - (4)].NUM);setFlag();}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 461 "calc.y"
    {st1[++top]="EQUAL";}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 461 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].NUM) == (yyvsp[(4) - (4)].NUM);setFlag();}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 462 "calc.y"
    {st1[++top]="NotEQUAL";}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 462 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].NUM) != (yyvsp[(4) - (4)].NUM);setFlag();}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 463 "calc.y"
    {st1[++top]="GreaterThan";}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 463 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].DOOBLE) > (yyvsp[(4) - (4)].DOOBLE);setFlag();}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 464 "calc.y"
    {st1[++top]="GreaterThanOrEqual";}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 464 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].DOOBLE) >= (yyvsp[(4) - (4)].DOOBLE);setFlag();}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 465 "calc.y"
    {st1[++top]="SmallerThan";}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 465 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].DOOBLE) < (yyvsp[(4) - (4)].DOOBLE);setFlag();}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 466 "calc.y"
    {st1[++top]="SmallerThanOrEqual";}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 466 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].DOOBLE) <= (yyvsp[(4) - (4)].DOOBLE);setFlag();}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 467 "calc.y"
    {st1[++top]="EQUAL";}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 467 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].DOOBLE) == (yyvsp[(4) - (4)].DOOBLE);setFlag();}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 468 "calc.y"
    {st1[++top]="NotEQUAL";}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 468 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].DOOBLE) != (yyvsp[(4) - (4)].DOOBLE);setFlag();}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 471 "calc.y"
    {st1[++top]="OR";}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 471 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].BOOOL) || (yyvsp[(4) - (4)].BOOOL);setFlag();}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 472 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 475 "calc.y"
    {st1[++top]="AND";}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 475 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].BOOOL) && (yyvsp[(4) - (4)].BOOOL);setFlag();}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 476 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 479 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(2) - (3)].BOOOL);}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 480 "calc.y"
    {(yyval.BOOOL) = !(yyvsp[(2) - (2)].BOOOL);st1[++top]="NOT";setFlag_Not();}
    break;



/* Line 1455 of yacc.c  */
#line 2967 "y.tab.c"
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
#line 484 "calc.y"
                     /* C code */

void StoreVarib(char*V){
	variable = V;
}
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
void printSymbolTable(Scope *currentTable)
{
	for ( auto it = currentTable->currentLockup.begin(); it != currentTable->currentLockup.end(); ++it )
		{
			std::cout << " " << it->first<<" "<<it->second.value.Number<<"\n";
			//printf("%d\n",it->second.value.Number);
		}
}
bool finn(Scope *currentTable,char* c)
{
	for ( auto it = currentTable->currentLockup.begin(); it != currentTable->currentLockup.end(); ++it )
		{
			if(strcmp(it->first,c)==0)
				return true;
		}
	return false;
}
OPERATION_RETURN insert(int type, char* name, bool isConstant, Values value, Scope *currentTable)
{

    // first check for duplication
    unordered_map<char *, Symbol>::iterator itr = currentTable->currentLockup.find(name);
	printf("\nitr %d\n",itr);

    if (!finn(currentTable,name))
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
    		 itr = currentTable->currentLockup.find(name);

			//Scope *Dum =  lookUp(name, currentTable);
			cout<<"HI inserted ... "<<name<<endl;
			cout<<"name:"<<name<<"value:"<<itr->second.value.Number<<endl;
			cout<<"DONE... "<<endl;
            return SUCCESSFUL_INSERTION;
        
    }
	
	//TEST ONLY
	
	cout<<"FAILED"<<endl;
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
	const int result = remove("Code_Generated.txt");
	mainscope=createMainScope();
	currentcope=mainscope;

	cout<<currentcope;
	yyparse ( );
	printSymbolTable(currentcope);
	return 0;
}

void yyerror (char *s) { // open file in write mode, and add the error to it!
	extern int yylineno;
	FILE* f;
	f = fopen("lexerOut2.txt","w");
	fprintf(f, "%s at line %d\n", s, yylineno);
	fclose(f);
} 

