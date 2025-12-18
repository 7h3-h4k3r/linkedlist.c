#ifndef LIST_H
#define LIST_H

#if defined(USEINT)
    #include "intList.h"
#elif defined(USEFLOAT)
    #include "floatList.h"
#elif defined(USESTRING)
    #include "stringList.h"
#else
    #error "Define one of LIST_INT, LIST_FLOAT, LIST_STRING"
#endif

#endif
