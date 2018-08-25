#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
Queue CreateQueue ( Queue Q ){
    PtrToQNode tmp = malloc( sizeof ( QNode ) );
    if( tmp == NULL ){
        printf("create quque failed:malloc failed\n");
        exit( 1 );
    }else{
        Q = malloc( sizeof ( QueueRecord ) );
        if( Q ==NULL ){
            printf("malloc for Q failed\n");
            exit(1);
        }else{
            tmp ->next =NULL;
            Q ->Front = tmp;
            Q ->Rear = tmp;
        }
    }
    return Q;
}
int Q_IsEmpty( Queue Q ){
    return  Q ->Front ->next == NULL;
}
void DisposeQueue ( Queue Q ){
    while( !Q_IsEmpty( Q ) ){
        DeQueue( Q );
    }
}
void Enqueue ( Queue Q , Emt_TYPE X ){
    PtrToQNode tmp = malloc( sizeof ( QNode ) );
    if( tmp == NULL){
        printf("Enqueue failed:malloc failed\n");
        exit(1);
    }else{
        tmp ->value = X;
        Q ->Rear ->next = tmp;
        tmp ->next = NULL;
        Q ->Rear = tmp;
    }
}
Emt_TYPE Front ( Queue Q ){
    if( Q_IsEmpty( Q ) ){
        printf("return front element failed:empty queue\n");
        exit(1);
    }else
        return Q ->Front ->next ->value;
}
void DeQueue ( Queue Q ){
    if( Q_IsEmpty( Q ) ){
        printf("Delete queue element failed:empty queue\n");
        exit( 1 );
    }else{
        PtrToQNode tmp = Q ->Front ->next;
        Q ->Front ->next = tmp ->next;
        free( tmp );
       // tmp = Q ->Front;
    }

}
