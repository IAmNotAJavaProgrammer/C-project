#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
	int value;
	struct _node next;
} Node;
typedef _list{
	Node* head;
} List;

void add(List* list,int num);
void 
int main(){
	int num;
	List list;
	list.head=NULL;
	do{
		scanf("%d",&num);
		if(num!=-1){
			add(&list,num);
		}
	}while(num!=-1);
	
}
void add(List* plist,int num){
	Node* p=(Node*)malloc(sizeof(Node));
	p->value=num;
	p->next=NULL;
	Node* last=plist->head;
	if(last){
		while(last->next){
			last=last->next;
		}
		last->next=p;
	}else{
		plist->head=p;
	}
}
