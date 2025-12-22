#ifndef PARAM_H
#define PARAM_H
#include "enums_def.h"


//simple linked list for func params
//extended later for code gen
typedef struct param{
    char* name;
    DATATYPE type;
    struct param* next;
}Param;

typedef struct param_list{
    int size;
    Param* head;
    Param* tail;
} ParamList;

ParamList* create_param_list();
Param* create_param(char* name,DATATYPE type);
void append_param(char* name, DATATYPE type,ParamList* list);
void free_params(ParamList* list);
#endif