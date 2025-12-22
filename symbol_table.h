#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H
#include "symbol.h"

typedef struct symbol_table
{
    int size;
    Symbol **table;
    struct symbol_table *parent;
    int scope_id;
} SymbolTable;
int scope_counter = 0;
SymbolTable *create_table(int size, SymbolTable *parent);
void insert(Symbol *symbol, SymbolTable *table);
Symbol *lookup(char *name, SymbolTable *table);
Symbol *lookup_current(char *name, SymbolTable *table);
void free_table(SymbolTable *table);
void print_table(SymbolTable *table);

#endif