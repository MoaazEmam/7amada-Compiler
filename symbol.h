#ifndef SYMBOL_H
#define SYMBOL_H
#include <stdbool.h>
#include "enums_def.h"
#include "param.h"

typedef struct symbol{
    char* name;
    DATATYPE type;
    KIND kind;
    bool initialized;
    bool used;
    ParamList* params;
    struct symbol* next;
}Symbol;

Symbol* create_symbol(char* name, 
    DATATYPE type, 
    KIND kind,
    bool init,
    ParamList* params);

void free_symbol(Symbol* symbol);
#endif