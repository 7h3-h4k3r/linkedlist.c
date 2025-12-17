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
    int (*delete)(struct sllist* ,int des);
    Node *(*search)(struct sllist *, int src);
    int (*update)(struct sllist* ,int src, int des);
    
}sllist;




int __init__(sllist *l);
void *xmalloc(size_t size);
int custErr(char *errMsg , const char *func , const int line , const char *file,int isBreak);
int append(sllist *l , int src);
int delete(sllist *l,int des);
Node *search(sllist *l, int des);
int update(sllist *l,int src , int des);

#endif