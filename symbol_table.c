#include "symbol_table.h"
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

// FNV-1a hashfunction
unsigned long hash(unsigned char *str)
{
    unsigned long hash = 2166136261UL;
    int c;
    while ((c = *str++))
    {
        hash ^= c;
        hash *= 16777619;
    }
    return hash;
}

SymbolTable *create_table(int size, SymbolTable *parent)
{
    SymbolTable *table = (SymbolTable *)malloc(sizeof(SymbolTable));
    if (!table)
        return NULL;
    table->table = calloc(size, sizeof(Symbol *));
    if (!table->table)
    {
        free(table);
        return NULL;
    }
    table->size = size;
    table->parent = parent;
    table->scope_id = scope_counter++;
    return table;
}

void insert(Symbol *symbol, SymbolTable *table)
{
    if (!symbol || !table)
        return;
    unsigned long index = hash((unsigned char *)symbol->name) % table->size;
    // insert at head for O(1)
    symbol->next = table->table[index];
    table->table[index] = symbol;
}
// check if something exists before using it
Symbol *lookup(char *name, SymbolTable *table)
{
    if (!name || !table)
        return NULL;

    unsigned long index = hash((unsigned char *)name) % table->size;

    // search current table
    Symbol *current = table->table[index];
    while (current)
    {
        if (strcmp(current->name, name) == 0)
            return current;
        current = current->next;
    }

    // not found, search parent table
    if (table->parent)
        return lookup(name, table->parent);

    // not found, doesnt exist
    return NULL;
}
// used to check redeclaration
Symbol *lookup_current(char *name, SymbolTable *table)
{
    if (!name || !table)
        return NULL;

    unsigned long index = hash((unsigned char *)name) % table->size;

    // search current table
    Symbol *current = table->table[index];
    while (current)
    {
        if (strcmp(current->name, name) == 0)
            return current;
        current = current->next;
    }
    return NULL;
}

void free_table(SymbolTable *table)
{
    if (!table)
        return;

    // free all buckets in table
    for (int i = 0; i < table->size; i++)
    {
        Symbol *current = table->table[i];
        while (current)
        {
            // so we dont lose it
            Symbol *next = current->next;
            free_symbol(current);
            current = next;
        }
    }
    free(table->table);
    free(table);
}
void print_table(SymbolTable *table)
{
    if (!table)
        return;
    for (int i = 0; i < table->size; i++)
    {
        Symbol *current = table->table[i];
        while (current)
        {
            printf("Name: %s, Type: %d, Kind: %d, Initialized: %d, Used: %d\n",
                   current->name, current->type, current->kind,
                   current->initialized, current->used);
            current = current->next;
        }
    }
}