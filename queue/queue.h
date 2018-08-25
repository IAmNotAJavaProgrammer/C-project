#ifndef QUEUE_H
#define QUEUE_H
#define Emt_TYPE int
typedef struct Node{
    Emt_TYPE value;
    struct Node *next;
}QNode;
typedef QNode *PtrToQNode;
typedef struct {
    PtrToQNode Front;
    PtrToQNode Rear;
} QueueRecord;
typedef QueueRecord *Queue;
Queue CreateQueue ( Queue Q );
int Q_IsEmpty( Queue Q );
void DisposeQueue ( Queue Q );
void Enqueue ( Queue Q , Emt_TYPE X );
Emt_TYPE Front ( Queue Q );
void DeQueue ( Queue Q );
#endif // QUEUE_H
