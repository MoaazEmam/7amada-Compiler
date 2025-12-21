#ifndef PARAM_H
#define PARAM_H


//simple linked list for func params
//extended later for code gen
typedef struct param{
    char* name;
    struct param* next;
}Param;

typedef struct param_list{
    Param* head;
    Param* tail;
} ParamList;

ParamList* create_param_list();
Param* create_param(char* name);
void append_param(char* name, ParamList* list);
void free_params(ParamList* list);
#endif