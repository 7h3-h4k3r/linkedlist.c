#include <stdio.h>
#include <stdlib.h>
#include "../header/include.h"

int _insert(linkedlist *list,int data){
    Node *new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL){
        fprintf(stderr,"Memory allocation failed");
        return -1;
    }
    new_node->data = data;
    new_node->next = NULL;
    if(list->head == NULL){
        list->head = list->tail = new_node;
        return 1;
    }
    list->tail->next  = new_node;
    list->tail = new_node;
}



int _search(linkedlist *list,int target){
    Node *temp = list->head;
    while (temp)
    {
        if (temp->data == target){
            return 1;
        }

        temp = temp->next;
    }
    return 0;
    
}

void __init__(linkedlist *list){ 
    list->insert = _insert;
    list->search = _search;
}