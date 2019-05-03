
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

/* Line 1676 of yacc.c  */
#line 26 "calc.y"

	long NUM; 
	int BOOOL;
	char* VARIABLE;
	double DOOBLE;
	char LETTER;



/* Line 1676 of yacc.c  */
#line 136 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


