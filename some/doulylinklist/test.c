#include<stdio.h>

#include"doublylinklist.h"

int main() {
    DList dlist = CreateDList( dlist );
    int num;
    DPosition P = dlist;

    do{
        scanf( "%d",&num );
        D_Insert( dlist,P,num );
        P = P->next;
    }while( num != -1 );

    for(P=dlist->next;!D_IsLast(P);P = P->next ){
        printf("%d ",P->value);
    }
    DeleteDlist(dlist);
    for(P=dlist->next;!D_IsLast(P);P = P->next ){
        printf("%d ",P->value);
    }
    printf("over");
}
