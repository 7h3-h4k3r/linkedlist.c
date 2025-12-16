#ifndef SINGLELINKEDLIST_H 
#define SINGLELINKEDLIST_H 

typedef struct Node{
    int value;
   struct Node *next;
}Node;




typedef struct sllist{
    Node *head;
    Node *tail;
    int (*append)(struct sllist * , int src);
    int (*delete)(struct sllist* ,int src );
    Node *(*search)(struct sllist *, int src);
    int (*update)(struct sllist* ,int src, int des);
    int (*insert)(struct sllist * , int src ,int des);
}sllist;




int __init__(sllist *l);
void *xmalloc(size_t size);
int append(sllist *l , int src);
#endif