#pragma once

/**
 *  Scope definition tokens 
*/ 

#define SCOPE_START_TOKEN           0 // TODO Regex->e3mel
#define SCOPE_END_TOKEN             1 // TODO Regex->bs
#define STATEMENT_TERMINATOR_TOKEN  2 // TODO Regex->semicolons

/**
 * Switch-Case statement tokens
*/ 

#define SWITCH_CASE_BEGINNING_TOKEN     3 // TODO Regex->lama
#define SWITCH_CASE_START_CASES_TOKEN   4 // TODO Regex->yeb2a:
#define SWITCH_CASE_DEFAULT_CASE_TOKEN  5 // TODO Regex->3'er_keda:

/**
 * if-elseif statement tokens
*/ 

#define IF_STATEMENT_TOKEN      6 // TODO Regex->law
#define ELSE_IT_STATEMENT_TOKEN 7 // TODO Regex->aw
#define ELSE_STATEMENT_TOKEN    8 // TODO Regex->3'er_keda