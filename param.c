#include "param.h"
#include <stdlib.h>
#include <string.h>

ParamList* create_param_list(){
    ParamList* list=(ParamList*)malloc(sizeof(ParamList));
    if(!list) return NULL;
    list->head=NULL;
    list->tail=NULL;
    list->count = 0;
    return list;
}

Param* create_param(char* name,DATATYPE type){
    Param* p=(Param*)malloc(sizeof(Param));
    if(!p) return NULL;
    p->name=strdup(name);
    if(!p->name){
        free(p);
        return NULL;
    }
    p->type=type;
    p->next=NULL;
    return p;
}

void append_param(char* name, DATATYPE type, ParamList* list){
    Param* new_p = create_param(name, type);
    if(!new_p) return;

    new_p->next = list->head;
    list->head = new_p;
    
    if(list->tail == NULL) {
        list->tail = new_p;
    }
    
    list->size++;
    list->count++;
}
void free_params(ParamList* list){
    while(list->head){
        Param* temp=list->head;
        list->head=list->head->next;
        free(temp->name);
        free(temp);
    }
    free(list);
}