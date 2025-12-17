#include <stdio.h>
#include <stdlib.h>

int custErr(char *errMsg , const char *func ,const int line , const char *file , int isBreak){
    printf("[*] Error :%s < function _%s() >,< Line:%d >,< File:%s >\n",errMsg,func,line,file);
    if (isBreak){
        exit(-1);
    }
    return 0;
}

void *xmalloc(size_t size){
    void *p = malloc(size);
    if (!p)custErr("Memory allocation failed",__func__,__LINE__,__FILE__,1);
    return p;
}