#include <stdio.h>
#include "../header/include.h"
int main(){
    linkedlist list;
    __init__(&list);
    for (int i =0;i<10;i++){
        list.insert(&list,i);
    }
    printf("%d ",list.search(&list,10));

}