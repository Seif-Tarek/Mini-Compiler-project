%{
void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
int symbols[52];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
%}

%union {
	long NUM; 
	int BOOOL;
	char* VARIABLE;
	double DOOBLE;
	char LETTER;
}         

/* Yacc definitions */

%start line
%token exit_command

// Tokens for Keywords
	%token Rakam
	%token TOKEN_Hroof
	%token TOKEN_3ashry
	%token TOKEN_Harf
	%token TOKEN_Boolean
	%token CONSTANT_TOKEN

// Tokens for Constant Numerics
	%token <NUM>	  LONG_INTEGER
	%token <DOOBLE>   DOUBE_FLOATING_POINT
	%token <VARIABLE> STRING_VALUE
	%token <LETTER>   CHARACTER_VALUE	
	%token <BOOOL> 	  TrueFalse

// Tokens for scope identification:
	%token SCOPE_START_TOKEN
	%token SCOPE_END_TOKEN
	%token STATEMENT_TERMINATOR_TOKEN

// flow control tokens:

// if-else if:
	%token IF_STATEMENT_TOKEN
	%token ELSE_STATEMENT_TOKEN

// switch case:
	%token SWITCH_CASE_BEGINNING_TOKEN
	%token SWITCH_CASE_START_CASES_TOKEN
	%token SWITCH_CASE_END_CASES_TOKEN
	%token SWITCH_DEFAULT_CASE_BEGINNING_TOKEN

// for:
	%token FOR_LOOP_STATMENT_TOKEN

// while:
	%token WHILE_LOOP_STATEMENT_TOKEN

//Do while:
	%token DO_STATEMENT_TOKEN

// Coding:
	%token IDENTIFIER_TOKEN
	%token OR
	%token AND
	%token NOT
	%token SHIFT_LEFT
	%token SHIFT_RIGHT
	%token GREATER_THAN_EQUAL
	%token LESS_THAN_EQUAL
	%token EQUAL_EQUAL
	%token NOT_EQUAL

// Utilities:

	%type <VARIABLE> assignment  //Needs editing
	%type <NUM> line exp expbitwise expAddSubtract term factor component
	%type <BOOOL>  Bexp Bexp1 Bexpand Bexpbracket // 0 or 1 integers.
	/// EDITTTTTTTTTTTTTTTTTTTT
%%

/* descriptions of expected inputs     corresponding actions (in C) */

line    : assignment STATEMENT_TERMINATOR_TOKEN			{printf("Matched assignment\n");}
		| exit_command STATEMENT_TERMINATOR_TOKEN		{printf("Matched fedahya\n");exit(EXIT_SUCCESS);}
		| declaration STATEMENT_TERMINATOR_TOKEN		{printf("Matched Declarations\n");}
		| line declaration STATEMENT_TERMINATOR_TOKEN	{printf("Matched Declarations\n");}
		| line assignment STATEMENT_TERMINATOR_TOKEN	{printf("Matched assignment\n");;}
		| line for_statement 							{printf("Matched loop: for\n");}
		| for_statement									{printf("Matched loop: for\n");;}
		| line if_statement								{printf("Matched flow control: if\n");;}
		| if_statement									{printf("Matched flow control: if\n");}
		| line switch_statement							{printf("Matched flow control: switch\n");}
		| switch_statement								{printf("Matched flow control: switch\n");}
		| line while_statement							{printf("Matched loop: while\n");}
		| while_statement								{printf("Matched loop: while\n");}
		| line repeat_statement							{printf("Matched loop: do-while\n");}
		| repeat_statement								{printf("Matched loop: do-while\n");}
		| line exit_command STATEMENT_TERMINATOR_TOKEN	{printf("Matched fedahya\n");exit(EXIT_SUCCESS);}
		| STATEMENT_TERMINATOR_TOKEN 					{printf("Matched Empty statement\n");}
		| line expbitwise STATEMENT_TERMINATOR_TOKEN 	{printf("Matched Expression Statement\n");}
        ;
		
// Decalarations of variables and constants:
declaration: data_type IDENTIFIER_TOKEN 							{;} //updateSymbolVal() } // TODO: update Symbol table
		| data_type assignment							 	  		{;}
		| CONSTANT_TOKEN data_type assignment 						{;} // TODO: when it's a constant, mark it so you can not update it later on
		;
		
data_type: Rakam 		{;} 
		| TOKEN_3ashry 	{;}
		| TOKEN_Boolean {;}
		| TOKEN_Harf 	{;}
		| TOKEN_Hroof   {;}
		;		

assignment : IDENTIFIER_TOKEN '=' assingment_value {;} //updateSymbolVal($1,$3); } // TODO: gowa el function law el variable msh mawgood, zawedo
		;

assingment_value: expbitwise 	{;}
		| Bexp1					{;}
		;

// Flow Control Statements:

// 1. If-else: // FIX

if_statement: IF_STATEMENT_TOKEN '('Bexp')' SCOPE_START_TOKEN line SCOPE_END_TOKEN  	{;} // TODO: replace exp with Bexp
		| if_statement ELSE_STATEMENT_TOKEN SCOPE_START_TOKEN line SCOPE_END_TOKEN 		{;}
		;

// 2. switch case:
switch_statement: SWITCH_CASE_BEGINNING_TOKEN '('IDENTIFIER_TOKEN')' SWITCH_CASE_START_CASES_TOKEN ':' case_statement SWITCH_DEFAULT_CASE_BEGINNING_TOKEN line SWITCH_CASE_END_CASES_TOKEN {;}
		;

case_statement: case_statement '('term')'  SCOPE_START_TOKEN line SCOPE_END_TOKEN | '('term')'  SCOPE_START_TOKEN line SCOPE_END_TOKEN 	{;}
		;
// 3. for loop:
for_iterator: assignment 				{;}
		| declaration					{;} 
		;

			 
for_statement: FOR_LOOP_STATMENT_TOKEN '('for_iterator STATEMENT_TERMINATOR_TOKEN Bexp1 STATEMENT_TERMINATOR_TOKEN assignment')' SCOPE_START_TOKEN line SCOPE_END_TOKEN     {;}
		;

// 4. While: 
while_statement: WHILE_LOOP_STATEMENT_TOKEN '('Bexp1')' SCOPE_START_TOKEN line SCOPE_END_TOKEN     			{;}
		;
// 5. Do While:
repeat_statement: DO_STATEMENT_TOKEN line WHILE_LOOP_STATEMENT_TOKEN '('Bexp1')' STATEMENT_TERMINATOR_TOKEN {;}
				  ;

expbitwise	: expbitwise '|' exp	 	    {$$ = $1 | $3;}
			| expbitwise '&' exp    	    {$$ = $1 & $3;}
 			| expbitwise '^' exp	        {$$ = $1 ^ $3;}
	    	| exp        	            	{$$ = $1;}
	    	;

exp    	: expAddSubtract                		  {$$ = $1;}
       	| exp SHIFT_LEFT expAddSubtract           {$$ = $1 << $3;}
       	| exp SHIFT_RIGHT expAddSubtract          {$$ = $1 >> $3;}
       	;

expAddSubtract  : component                  {$$ = $1;}
			    | expAddSubtract '+' component          {$$ = $1 + $3;}
				| expAddSubtract '-' component          {$$ = $1 - $3;}
				;

component   : component '*' factor       {$$ = $1 * $3;}
 			| component '/' factor       {$$ = $1 / $3;}
	    	| factor                     {$$ = $1;}
	    	;

factor  : '(' expbitwise ')'            {$$ = $2;}
	    | '-' factor             {$$ = -$2;}
		| '~' factor             {$$ = ~$2;}
	    | term                   {$$ = $1;}
 		;
 
		
term   	: LONG_INTEGER          {$$ = $1;}
		| DOUBE_FLOATING_POINT 	{$$ = $1;}
		| CHARACTER_VALUE		{$$ = $1;}
		| STRING_VALUE			{;}
		| TrueFalse				{$$ = $1;}
		| IDENTIFIER_TOKEN		{;}//$$ = symbolVal($1);} 
        ;

// Afsel 3shan al precedance.
Bexp	: exp '>' exp					{$$ = $1 > $3;}
 		| exp GREATER_THAN_EQUAL exp	{$$ = $1 >= $3;}
	    | exp '<' exp					{$$ = $1 < $3;}
		| exp LESS_THAN_EQUAL exp		{$$ = $1 <= $3;}
		| exp EQUAL_EQUAL exp			{$$ = $1 == $3;}
		| exp NOT_EQUAL exp				{$$ = $1 != $3;}
		;

Bexp1	: Bexp1 OR Bexpand					{$$ = $1 || $3;}
		| Bexpand							 {$$ = $1;}
		;

Bexpand	: Bexpand AND Bexpbracket				 {$$ = $1 && $3;}
		| Bexpbracket							 {$$ = $1;}
		;

Bexpbracket  : '(' Bexp1 ')'            {$$ = $2;}
	  	     | NOT Bexpbracket         {$$ = !$2;}
			 | Bexp
 			 ;	

%%                     /* C code */

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

