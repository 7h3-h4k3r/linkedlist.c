#ifndef SINGLELINKEDLIST_H 
#define SINGLELINKEDLIST_H 

typedef struct Node{
    float value;
   struct Node *next;
}Node;




typedef struct sllist{
    Node *head;
    Node *tail;
    int (*append)(struct sllist * , float src);
    int (*delete)(struct sllist* ,float des);
    Node *(*search)(struct sllist *, float src);
    int (*update)(struct sllist* ,float src, float des);
    
    
}sllist;




int __init__(sllist *l);
void *xmalloc(size_t size);
int custErr(char *errMsg , const char *func , const int line , const char *file,int isBreak);
int append(sllist *l , float src);
int delete(sllist *l,float des);
Node *search(sllist *l, float des);
int update(sllist *l,float src , float des);


#endif