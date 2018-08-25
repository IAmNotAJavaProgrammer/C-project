#include <stdio.h>
#include "queue.h"

int main( ){
    Queue Q = CreateQueue( Q );
    Enqueue( Q , 1);
    Enqueue( Q , 2);
    //DeQueue( Q );
   // printf("isempty=%d\n",Q_IsEmpty(Q) );
   // DeQueue( Q );
    DisposeQueue( Q );
    printf("1");
    printf("isempty=%d\n",Front( Q ) );
    printf("2");
    return 0;
}
