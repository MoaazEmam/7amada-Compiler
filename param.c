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

Param* create_param(char* name){
    Param* p=(Param*)malloc(sizeof(Param));
    if(!p) return NULL;
    p->name=strdup(name);
    if(!p->name){
        free(p);
        return NULL;
    }
    p->next=NULL;
    return p;
}

void append_param(char* name, ParamList* list){
    Param* new_p=create_param(name);
    if(!new_p) return;

    //empty list
    if(list->head==NULL) {list->head=new_p; list->tail=new_p;}
    else{
        //make tail param point to new param
        list->tail->next=new_p;
        //make tail look at new_p
        list->tail=new_p;
    }
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