#include <stdio.h>
#include <stdlib.h>
#include "../header/singleLinkedList.h"
int main(){
    /*
    Append value 
    */
    sllist l;
    __init__(&l);
    l.append(&l,10);
    l.append(&l,20);
    l.append(&l,30);
    //not in 
    l.delete(&l,40);
    // is In
    l.delete(&l,30);
    Node *result  = l.search(&l,20);
    if (!result){
        printf("Not found");
    }
    else{
        printf("%d target Found linear Search",result->value);
    }

    l.update(&l,20,300);

}