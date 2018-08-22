#ifndef LINKLIST_H
#define LINKLIST_H
#include <stdio.h>
#include <stdlib.h>
#define Emt_TYPE int
typedef struct Node {
    Emt_TYPE value;
    struct Node *next;
}Node;
typedef Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
List CreateList ( List list );
void Insert( List list , Position P , Emt_TYPE X );
int IsEmpty( List list );
int IsLast( Position p );
Position Find( List list , Emt_TYPE X );
Position FindPrevious( List list , Emt_TYPE X );
void Delete( List list , Emt_TYPE X );
void DeleteList( List list );
#endif // LINKLIST_H
