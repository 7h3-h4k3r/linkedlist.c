#include<stdlib.h>
#include <stdio.h>
#include "../header/singleLinkedList.h"


Node *setData(Node *node, int  src){
    node->value = src;
    node->next = NULL;
    return node;
}

int _append(sllist *l , int src){
   Node* new_node = (Node*)xmalloc(sizeof(Node));
   new_node = setData(new_node,src);
   if ((!l->head) && (!l->tail)){
    l->head = new_node;
    l->tail = new_node;
    return 0;
   }
   l->tail->next = new_node;
   l->tail = new_node;

}

int __init__(sllist *l){
    l->head = (Node *)xmalloc(sizeof(Node));
    l->head = NULL;
    l->tail = (Node *)xmalloc(sizeof(Node));
    l->tail = NULL;
    l->append = _append;
}