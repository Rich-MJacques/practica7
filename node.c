#include "node.h"
#include <stdlib.h>
#include <stdio.h>

node *create_node(DATA data){
    node *t;
    t =(node*)malloc(sizeof(node));
    t->next =NULL;
    t->data= data;
    return t;

}

void delete_node(node *n){
    node *t;
    if(n->next != NULL){
        t=n->next;
        n->next=NULL;
        t->next=t;
        free(n);
        n=NULL;
    }
    else printf("NO ENTRO AL IF");
} 
