#include<stdlib.h>
#include <stdio.h>

#if defined(USEINT)
#include "../header/intList.h"
Node *setData(Node *node, int  src){
    node->value = src;
    node->next = NULL;
    return node;
}

int _append(sllist *l , int src){
   Node* new_node = (Node*)xmalloc(sizeof(Node));
   new_node = setData(new_node,src);
   if ((!l->head) && (!l->tail)){
    l->head = new_node;
    l->tail = new_node;
    return 0;
   }
   l->tail->next = new_node;
   l->tail = new_node;

}

int _delete(sllist *l,int target){
    if(l->head->value == target){
        l->head = l->head->next;
        return 1;
    }
    Node *temp = l->head->next;
    Node *prev = l->head;
    while (temp){
        if (temp->value == target){
            if (temp->next == NULL){
                l->tail = prev;
            }
            prev->next = temp->next;
            return 1;
        }
        prev = temp;
        temp = temp->next;
    }
    custErr("(value Error) Element not Found ",__func__,__LINE__,__FILE__,0);
    return 0;
}

Node *_search(sllist *l,int src){
    Node *temp = l->head;
    while (temp){
        if (temp->value == src){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

int _update(sllist *l , int src , int des){
    Node *s = _search(l, src);
    if (!s){
        custErr("(value Error) Element not Found ",__func__,__LINE__,__FILE__,1);
    }
    s->value  = des;
}
#elif defined(USEFLOAT)
#include "../header/floatList.h"
Node *setData(Node *node, float  src){
    node->value = src;
    node->next = NULL;
    return node;
}
int _append(sllist *l , float src){
   Node* new_node = (Node*)xmalloc(sizeof(Node));
   new_node = setData(new_node,src);
   if ((!l->head) && (!l->tail)){
    l->head = new_node;
    l->tail = new_node;
    return 0;
   }
   l->tail->next = new_node;
   l->tail = new_node;

}

int _delete(sllist *l,float target){
    if(l->head->value == target){
        l->head = l->head->next;
        return 1;
    }
    Node *temp = l->head->next;
    Node *prev = l->head;
    while (temp){
        if (temp->value == target){
            if (temp->next == NULL){
                l->tail = prev;
            }
            prev->next = temp->next;
            return 1;
        }
        prev = temp;
        temp = temp->next;
    }
    custErr("(value Error) Element not Found ",__func__,__LINE__,__FILE__,0);
    return 0;
}

Node *_search(sllist *l,float src){
    Node *temp = l->head;
    while (temp){
        if (temp->value == src){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}
int _update(sllist *l , float src , float des){
    Node *s = _search(l, src);
    if (!s){
        custErr("(value Error) Element not Found ",__func__,__LINE__,__FILE__,1);
    }
    s->value  = des;
}
#elif defined(USESTRING)
#include "../header/stringList.h"
Node *setData(Node *node, char* src){
    node->value = src;
    node->next = NULL;
    return node;
}
int _append(sllist *l , char* src){
   Node* new_node = (Node*)xmalloc(sizeof(Node));
   new_node = setData(new_node,src);
   if ((!l->head) && (!l->tail)){
    l->head = new_node;
    l->tail = new_node;
    return 0;
   }
   l->tail->next = new_node;
   l->tail = new_node;

}

int _delete(sllist *l,char* target){
    if(l->head->value == target){
        l->head = l->head->next;
        return 1;
    }
    Node *temp = l->head->next;
    Node *prev = l->head;
    while (temp){
        if (temp->value == target){
            if (temp->next == NULL){
                l->tail = prev;
            }
            prev->next = temp->next;
            return 1;
        }
        prev = temp;
        temp = temp->next;
    }
    custErr("(value Error) Element not Found ",__func__,__LINE__,__FILE__,0);
    return 0;
}

Node *_search(sllist *l,char* src){
    Node *temp = l->head;
    while (temp){
        if (temp->value == src){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

int _update(sllist *l , char *src , char *des){
    Node *s = _search(l, src);
    if (!s){
        custErr("(value Error) Element not Found ",__func__,__LINE__,__FILE__,1);
    }
    s->value  = des;
}
#endif

int __init__(sllist *l){
    l->head = (Node *)xmalloc(sizeof(Node));
    l->head = NULL;
    l->tail = (Node *)xmalloc(sizeof(Node));
    l->tail = NULL;
    l->append = _append;
    l->delete = _delete;
    l->search = _search;
    l->update = _update;
}