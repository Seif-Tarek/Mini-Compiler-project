#pragma once

#include <unordered_map>
#include"string"
#define CHAR 1
#define INT 2
#define DOUBLE 3
#define CHAR_PTR 4
#define BOOLEAN 5

enum OPERATION_RETURN
{
    SUCCESSFUL_INSERTION,
    DUPLICATE_INSERTION,
    FAILED_TO_INSERTION,

    SUCCESSFUL_UPDATE,
    SYMBOL_NOT_FOUND,
    SEMANTIC_ERROR_TYPE_INCOMPATIBLE,
    SEMANTIC_ERROR_ATTEMPT_CHANGING_CONSTANT,
};

typedef union valueType {
    double Number;
    char Char;
    char *Str;
    /* data */
} Values;

struct Symbol
{
    int type; // 1-->char, 2-->int, 3--> duble, 4-->char*, 5-->bool
    bool isConst;
    Values value;
};

struct Scope
{
    std::unordered_map<char*, Symbol> currentLockup;
    Scope *above;
};

//Scope *createMainScope();
//OPERATION_RETURN insert(char *type, char *name, char *other, Values value, Scope *currentTable);
//Scope *lookUp(char *name, Scope *currentTable);
//void update(char *name, Values value, Scope *currentTable);