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
}