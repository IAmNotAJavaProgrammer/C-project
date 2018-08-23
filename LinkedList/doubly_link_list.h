#ifndef DOUBLY_LINK_LIST_H
#define DOUBLY_LINK_LIST_H
#include<stdlib.h>
#define Emt_TYPE int
typedef struct  DNode{
    Emt_TYPE value;
    struct DNode *next;
    struct DNode *Pre;
}DNode;
typedef DNode *PtrToDNode;
typedef  PtrToDNode DList;
typedef  PtrToDNode DPosition;
DList CreateDList( DList dlist );
int D_IsEmpty( DList dlist );
int D_IsLast( DPosition DP );
void D_Insert( DList dlist , DPosition DP , Emt_TYPE X );
DPosition D_Find( DList list , Emt_TYPE X );
void D_Delete( DList dlist , Emt_TYPE X );
void DeleteDlist( DList dlist );
#endif // DOUBLY_LINK_LIST_H
