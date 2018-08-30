//3-12答案
#include <stdio.h>
#include "Singly_List.h"
void reverse( List L);

int main()
{
    List list = CreateList( list );
    int num;
    Position P = list;

    do{
        scanf( "%d",&num );
        Insert( list,P,num );
        P = P->next;
    }while( num != -1 );

    P=list->next;

    while(P != NULL){
        printf("%d", P ->value );
        P = P ->next;
    }

    reverse( list );
    P=list->next;

    while(P != NULL){
        printf("%d", P ->value );
        P = P ->next;
    }
    return 0;
}
void reverse( List L){
    Position P = L ->next;
    Position pre = NULL;
    Position PNext = P ->next;
    for( P = L ->next ; PNext != NULL ; ){
        P ->next = pre;
        pre = P;
        P = PNext;
        PNext = P ->next;
    }
    L->next = pre;
}
