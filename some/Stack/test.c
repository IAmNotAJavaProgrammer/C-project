#include<stdio.h>

#include"stack.h"

int main (){
    Stack S = CreateStack( S );
    Push( S , 1 );
    Push( S , 2 );
    Push( S , 3 );
    Pop(S);
    DeleteStack( S );
    printf("%d\n",Top( S ) );
    printf("oo");
    return 0;
}
