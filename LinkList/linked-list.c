#include<stdio.h>
#include<stdlib.h> 
typedef struct _node{
	int value;
	struct _node* next;
} Node;
typedef struct _list{
    Node* head;
}List;
void add(List* plist,int number);

int main (){
    int number;
    List list;
    list.head=NULL;
    do{
        scanf("%d",&number);
        if(number!=-1){
           add(&list,number);
        }
    }while(number!=-1);
//search
    Node* p;
    for(p=list.head;p;p=p->next){
		printf("%d ",p->value);
	}
//search
    return 0;
}
void add(List* plist,int number){
//add to linkedlist
    Node *p=(Node*)malloc(sizeof(Node));
    p->value=number;
    p->next=NULL;
//find the last
    Node* last=plist->head;
    if(last){
        while(last->next){
            last=last->next;
        }
		//attch
        last->next=p;
    }else{
        plist->head=p;
    }
}
