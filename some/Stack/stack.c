#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack CreateStack( Stack S ){
    PtrToSNode retn = NULL;
    S = malloc( sizeof ( SNode ) );
    if( S == NULL )
        printf("create failed:malloc failed\n");
    else{
        S->next = NULL;
        retn = S;
    }
    return retn;
}
int S_IsEmpty( Stack S ){
    return S ->next == NULL;
}
void DeleteStack(Stack S){
    while( !S_IsEmpty( S ) ){
        Pop( S );
    }
}
void Push(Stack S,S_Emt_TYPE X){
    PtrToSNode tmp = malloc( sizeof ( SNode ) );
    if( tmp == NULL ){
        printf(" Push failed:malloc failed\n");
        exit(1);
    }else{
        tmp ->value = X;
        tmp ->next = S ->next;
        S ->next = tmp;
    }
}
void Pop(Stack S){
    if( S_IsEmpty( S ) ){
        printf("Pop failed: empty Stack\n");
    }else{
        PtrToSNode tmp = S ->next;
        S ->next = S ->next ->next;
        free( tmp );
    }

}
S_Emt_TYPE Top(Stack S){
    if( S_IsEmpty( S ) ){
        printf("return top element failed:empty stack");
        exit( 1 );
    }else
        return S ->next ->value;
}
