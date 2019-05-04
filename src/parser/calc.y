%{
void yyerror (char *s);
int yylex();
#include<iostream>
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
int x;
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
	%token TOKEN_Atba3

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

// Do while:
	%token DO_STATEMENT_TOKEN

// Coding:
	%token <VARIABLE> IDENTIFIER_TOKEN
	%token OR
	%token AND
	%token NOT
	%token EQUAL_SIGN
	%token EXP_NOT
	%token SHIFT_LEFT
	%token SHIFT_RIGHT
	%token GREATER_THAN_EQUAL
	%token LESS_THAN_EQUAL
	%token EQUAL_EQUAL
	%token NOT_EQUAL

// Utilities:

	%type <VARIABLE> assignment  //Needs editing
	%type <NUM> line exp expbitwise expAddSubtract term factor component
	%type <DOOBLE>  double_value_expAddSubtract double_value_term double_value_factor double_value_component
	
	%type <BOOOL>  Bexp Bexp1 Bexpand Bexpbracket // 0 or 1 integers.
	%type <VARIABLE> string_value_assignment TEST_ID

	// EDITTTTTTTTTTTTTTTTTTTT
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
		| line double_value_expAddSubtract STATEMENT_TERMINATOR_TOKEN 	{printf("Matched Expression Statement\n");}
		| double_value_expAddSubtract STATEMENT_TERMINATOR_TOKEN					  	{printf("Matched Expression Statement\n");}
        ;
		
// Decalarations of variables and constants:
declaration: data_type TEST_ID 							{ printf("ya rab %s\n", $2);} // updateSymbolVal() } // TODO: update Symbol table
		| data_type assignment							 	  		{;}
		| CONSTANT_TOKEN data_type assignment 						{;} // TODO: when it's a constant, mark it so you can not update it later on
		;
		
data_type: Rakam 		{;} 
		| TOKEN_3ashry 	{;}
		| TOKEN_Boolean {;}
		| TOKEN_Harf 	{;}
		| TOKEN_Hroof   {;}
		;		
TEST_ID: IDENTIFIER_TOKEN {$$=$1; variable=$$;printf("VARIABLE = %s\n", variable);cout<<"VARIABLE_COUT = "<<variable<<endl;}
;
assignment : TEST_ID  EQUAL_SIGN expbitwise { ;} // printf("ya rab %c\n", typeid($3).name()[0]);
			| TEST_ID  EQUAL_SIGN double_value_expAddSubtract { Values val;
				val.Number = $3;
				
				insert(DOUBLE,$1,false,val, currentcope); printf("ya rab %c\n", typeid($3).name()[0]);} 
				
			| TEST_ID  EQUAL_SIGN Bexp1 { printf("ya rab %c\n", typeid($3).name()[0]);} // updateSymbolVal($1,$3); } // TODO: gowa el function law el variable msh mawgood, zawedo
			| TEST_ID  EQUAL_SIGN string_value_assignment { printf("string is matched %s\n",$3);}
		;

// print_stmt:  TOKEN_Harf Bexp1  {printf("%s\n",$2);}
// 		  |  TOKEN_Harf expbitwise  {printf("%s\n",$2);}
// 		  |  TOKEN_Harf double_value_exp  {printf("%s\n",$2);}
// 		  |  TOKEN_Harf string_value_assignment  {printf("%s\n",$2);}
// 		  ;

string_value_assignment:  STRING_VALUE			{
													$$ = $1;
													printf("matched string value %s\n",$1); 
												}		 //    $$ = symbolVal($1);
				//| IDENTIFIER_TOKEN		{;} //    $$ = symbolVal($1);
												
						;

// Flow Control Statements:

// 1. If-else: // FIX

if_statement: IF_STATEMENT_TOKEN '('Bexp')' SCOPE_START_TOKEN{x=1;} line SCOPE_END_TOKEN  	{x=0;} // TODO: replace exp with Bexp
		| if_statement ELSE_STATEMENT_TOKEN SCOPE_START_TOKEN {x=1;} line SCOPE_END_TOKEN 		{x=0;} 
		;

// 2. switch case:
switch_statement: SWITCH_CASE_BEGINNING_TOKEN '('IDENTIFIER_TOKEN ')' SWITCH_CASE_START_CASES_TOKEN ':' case_statement SWITCH_DEFAULT_CASE_BEGINNING_TOKEN{x=1;} line SWITCH_CASE_END_CASES_TOKEN {x=0;} 
		;

case_statement: case_statement '('term')'  SCOPE_START_TOKEN{x=1;}  line SCOPE_END_TOKEN {x=0;} | '('term')'  SCOPE_START_TOKEN{x=1;} line SCOPE_END_TOKEN {x=0;} 
		;
// 3. for loop:
for_iterator: assignment 				{;}
		| declaration					{;} 
		;

			 
for_statement: FOR_LOOP_STATMENT_TOKEN '('for_iterator STATEMENT_TERMINATOR_TOKEN Bexp1 STATEMENT_TERMINATOR_TOKEN assignment')' SCOPE_START_TOKEN{x=1;}  line SCOPE_END_TOKEN     {x=0;} 
		;

// 4. While: 
while_statement: WHILE_LOOP_STATEMENT_TOKEN '('Bexp1')' SCOPE_START_TOKEN{x=1;} line SCOPE_END_TOKEN {x=0;}
// 5. Do While:
repeat_statement: DO_STATEMENT_TOKEN{x=1;}  line WHILE_LOOP_STATEMENT_TOKEN '('Bexp1')' STATEMENT_TERMINATOR_TOKEN  {x=0;}
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

// double_value_exp    	: double_value_expAddSubtract                		  {;}
//        	| double_value_exp  double_value_expAddSubtract           {;}
//        	;

expAddSubtract  : component                  {$$ = $1;}
			    | expAddSubtract '+' component          {$$ = $1 + $3;}
				| expAddSubtract '-' component          {$$ = $1 - $3;}
				;

double_value_expAddSubtract  :  double_value_expAddSubtract '+' double_value_component          {$$ = $1 + $3; }
				| double_value_expAddSubtract '-' double_value_component          {$$ = $1 - $3;}
				| double_value_component                  {$$ = $1;}
				;

component   : component '*' factor       {$$ = $1 * $3;}
 			| component '/' factor       {$$ = $1 / $3;}
	    	| factor                     {$$ = $1;}
	    	;

double_value_component   : double_value_component '*' double_value_factor       {$$ = $1 * $3;}
 			| double_value_component '/' double_value_factor       {$$ = $1 / $3;}
	    	| double_value_factor                     {$$ = $1;}
	    	;

factor  : '(' expbitwise ')'            {$$ = $2;}
	    | '-' factor             {$$ = -$2;}
		| EXP_NOT factor             {$$ = ~$2;}
	    | term                   {$$ = $1;}
 		;
 
double_value_factor  : '(' double_value_expAddSubtract ')'		{$$ = $2;}
	    | double_value_term                   		{$$ = $1;}
		| '-' double_value_factor       			    {$$ = -$2;}
		;
		
term   	: LONG_INTEGER          {$$ = $1; printf("i matched integer %d\n",$1);}
		| CHARACTER_VALUE		{$$ = $1; printf("i matched TTT %d\n",$1);}
		| TrueFalse				{$$ = $1;}
		| IDENTIFIER_TOKEN		{;} //    $$ = symbolVal($1);
		
		// if the matched identifier refers to String type:
			// return the address of this string as a long, pass it to the one we assign it to
		
		
        ;

double_value_term: DOUBE_FLOATING_POINT 	{$$ = $1; printf("i matched double %f\n",$1);}
				//| IDENTIFIER_TOKEN		{;} //    $$ = symbolVal($1);
		;

// Afsel 3shan al precedance.
Bexp	: exp '>' exp					{$$ = $1 > $3;}
 		| exp GREATER_THAN_EQUAL exp	{$$ = $1 >= $3;}
	    | exp '<' exp					{$$ = $1 < $3;}
		| exp LESS_THAN_EQUAL exp		{$$ = $1 <= $3;}
		| exp EQUAL_EQUAL exp			{$$ = $1 == $3;}
		| exp NOT_EQUAL exp				{$$ = $1 != $3;}
		| double_value_expAddSubtract '>' double_value_expAddSubtract					{$$ = $1 > $3;}
 		| double_value_expAddSubtract GREATER_THAN_EQUAL double_value_expAddSubtract	{$$ = $1 >= $3;}
	    | double_value_expAddSubtract '<' double_value_expAddSubtract					{$$ = $1 < $3;}
		| double_value_expAddSubtract LESS_THAN_EQUAL double_value_expAddSubtract		{$$ = $1 <= $3;}
		| double_value_expAddSubtract EQUAL_EQUAL double_value_expAddSubtract			{$$ = $1 == $3;}
		| double_value_expAddSubtract NOT_EQUAL double_value_expAddSubtract			{$$ = $1 != $3;}
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
