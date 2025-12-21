#include "symbol.h"
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

Symbol* create_symbol(char* name, 
    DATATYPE type, 
    KIND kind,
    bool init,
    ParamList* params){
        Symbol* symbol=(Symbol*)malloc(sizeof(Symbol));
        if(!symbol) return NULL;

        symbol->name=strdup(name);
        if(!symbol->name){
            free(symbol);
            return NULL;
        }
        symbol->type=type;
        symbol->kind=kind;
        symbol->used=false; //default once made
        symbol->initialized=init;
        symbol->params=params;
        symbol->next=NULL;
        return symbol;
    }

void free_symbol(Symbol* symbol){
    if(!symbol) return;
    if(symbol->name) free(symbol->name);
    if(symbol->params) free_params(symbol->params);
    free(symbol);
}