#include "linklist.h"
List CreateList ( List list ){
    list=malloc(sizeof (Node));

    if(list==NULL){
        printf("mallco failed\n");
        exit(1);
    }else{
        list->next=NULL;
        return list;
    }

}
void Insert( List list , Position P , Emt_TYPE X ){
    Position tmp = malloc( sizeof ( struct Node ) );
    if( tmp == NULL )
        printf( "malloc failed\n" );
    else{
        tmp -> value = X;
        tmp -> next = P -> next;
        P->next=tmp;
    }
}
int IsEmpty( List list ){
    return list ->next == NULL;
}
int IsLast( Position P ){
    return P ->next == NULL;
}
Position Find( List list , Emt_TYPE X ){
    PtrToNode tmp=NULL;
    if(FindPrevious(list,X) !=NULL)
        tmp=FindPrevious(list,X) ->next;

    return tmp;

}
Position FindPrevious( List list , Emt_TYPE X ){
    PtrToNode tmp = list;
    Position retn = NULL;
    for( tmp = list ; !IsLast(tmp ->next);tmp = tmp ->next){
        if(tmp ->next ->value == X){
            retn = tmp;
        }
    }
    return retn;
}
void Delete( List list , Emt_TYPE X ){
    Position P = Find( list , X );
    Position P_Pre = FindPrevious( list , X );
    if( P == NULL)
        printf("Not found the element\n");
    else{
        P_Pre ->next =P ->next;
        free(P);
    }


}
void DeleteList( List list ){
    if( IsEmpty( list ) )
        printf("Empty list\n");
    else{
        Position tmp = list , tmpNext = tmp;
        while( tmpNext != NULL ){
            tmp=tmpNext;
            tmpNext = tmp ->next;
            free(tmp);
        }
    }
}
