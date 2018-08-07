#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct Node{
	int value;
	struct Node *next;
} Node;
typedef Node *PtrToNode;
typedef struct List{
	Node *head;
}List;
typedef PtrToNode Position;


int main(){
	List list;
	list.head=NULL;
	Node* P=malloc(sizeof(Node));
	P->next=NULL;
	P->value=1;
	list.head=P;
	return 0;
}
