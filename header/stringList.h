
#ifndef SINGLELINKEDLIST_H 
#define SINGLELINKEDLIST_H 

typedef struct Node{
    char* value;
   struct Node *next;
}Node;




typedef struct sllist{
    Node *head;
    Node *tail;
    int (*append)(struct sllist * , char* src);
    int (*delete)(struct sllist* ,char* des);
    Node *(*search)(struct sllist *, char* src);
    int (*update)(struct sllist* ,char* src, char* des);
    
    
}sllist;




int __init__(sllist *l);
void *xmalloc(size_t size);
int custErr(char *errMsg , const char *func , const int line , const char *file,int isBreak);
int append(sllist *l , char* src);
int delete(sllist *l,char* des);
Node *search(sllist *l, char* des);
int update(sllist *l,char* src , char* des);


#endif