#include <stdio.h>
#include <stdlib.h>
#include"doubly_link_list.h"
DList CreateDList( DList dlist ){
    dlist = malloc( sizeof ( DNode ) );
    if( dlist ==NULL )
        printf("malloc failed");
    else{
        dlist ->Pre = NULL;
        dlist ->next = NULL;
    }
    return dlist;
}
int D_IsEmpty( DList dlist ){
    return dlist ->next == NULL;
}
int D_IsLast( DPosition DP ){
    return DP ->next == NULL;
}
void D_Insert( DList dlist , DPosition DP , Emt_TYPE X ){
    PtrToDNode tmp = malloc( sizeof ( DNode ) );
    if( tmp == NULL )
        printf("malloc failed");
    else{
        tmp ->value = X;
        tmp ->Pre = DP;
        tmp ->next = DP ->next;
        DP ->next = tmp;
    }
}
DPosition D_Find( DList list , Emt_TYPE X ){
    DPosition tmp = list ->next;
    PtrToDNode retn = NULL;
    for( tmp = list ->next ; !D_IsLast(tmp) ; tmp = tmp ->next ){
        if( tmp ->value ==X ){
            retn = tmp;
        }
    }
    return retn;
}
void D_Delete( DList dlist , Emt_TYPE X ){
    DPosition P = D_Find( dlist , X );
    DPosition P_Pre = P ->Pre;
    P_Pre ->next = P ->next;
    P ->next ->Pre = P ->Pre;
    free(P);
}
void DeleteDlist( DList dlist ){
    DPosition tmp = dlist , tmpNext;
    while( tmp != NULL ){
        tmpNext = tmp ->next;
        free( tmp );
        tmp = tmpNext;

    }
}
