#ifndef GRAPH_H
#define GRAPH_H

typedef struct Node{    
    int data;
    struct Node *next;
}Node;

typedef struct linkedlist{
    Node *head;
    Node *tail;
    int (*insert)(struct linkedlist* , int data);
    int (*search)(struct linkedlist * , int target);

}linkedlist;

void __init__(struct linkedlist*);
int insert(struct linkedlist*,int data );
int search(struct linkedlist *,int target);
#endif 