#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
	int value;
	struct _node *next;
} Node;
typedef Node *PtrToNode;
typedef struct _queue{
	PtrToNode Front;
	PtrToNode Rear;
} QueueRecord; 
typedef QueueRecord *Queue;
int IsEmpty(Queue Q);
void DeQueue(Queue Q);
//void MakeEmpty(Queue Q);
Queue CreateQueue(Queue Q);
void DisposeQueue(Queue Q);
void EnQueue(int X,Queue Q);
int FrontValue(Queue Q);
int FrontAndDeQueue(Queue Q); 

int main(){
	
	return 0;
} 
int IsEmpty(Queue Q){
	return Q->Front==Q->Rear;
}
void DeQueue(Queue Q){
	PtrToNode tmp;
	if(IsEmpty(Q)){
		tmp=Q->Front;
		free(Q->Front);
		Q->Rear=tmp;
	}
}
//void MakeEmpty(Queue Q){
//	Queue->Rear=Queue->Front;
//}
Queue CreateQueue(Queue Q){
	PtrToNode N=malloc(sizeof(Node));
	if(N==NULL){
		printf("Out of space!");
		exit(-1);
	}
	N->next=NULL;
	Q=malloc(sizeof(Queue));
	if(Q==NULL){
		printf("Out of space!");
		exit(-1);
	}
	Q->Front=N;
	Q->Rear=N;
	return Q;
}
void DisposeQueue(Queue Q){
	while(!IsEmpty(Q))
		DeQueue(Q);
}
void EnQueue(int X,Queue Q){
	PtrToNode tmp=malloc(sizeof(Node));
	if(tmp==NULL){
		printf("Out of space!");
	}else{
		tmp->value=X;
		tmp->next=NULL;
		extern PtrToNode N;
		N->next=tmp;
		Q->Rear=tmp;
	}
}
int FrontValue(Queue Q){
	return Q->Front->value;
}
