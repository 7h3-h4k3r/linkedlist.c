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

// _isempty()

int _del(linkedlist *list, int del_data){
    if (list->head == NULL){
        return -1;
    }
    Node *temp = list->head;
    Node *prev = NULL;
    while (temp){
        if (temp->data == del_data){
            if (prev ==NULL){
                list->head = temp->next;
    
            }else{
                prev->next = temp->next;
            }
            free(temp);
            return 1;
        
        }   
        prev = temp;
        temp = temp->next;
    }
    return -1;
}


int _search(linkedlist *list,int target ){
    Node *temp = list->head;
    int index = 0;
    while (temp)
    {
        if (temp->data == target){
    
            return 1;
        }
        index++;
        temp = temp->next;
    }
    return 0;
    free(temp);
}

void __init__(linkedlist *list){ 
    list->insert = _insert;
    list->search = _search;
    list->del    = _del;
}