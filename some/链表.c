#include <stdio.h>
#include <stdlib.h> 

typedef struct _node{
		int value;
		struct _node *next;
	} Node;
	typedef struct _list{
		Node *head;
	}List;
	
void add(List *plist,int num);
int search(List* plist,int num);

int main1(){
	int num;
	List list;
	list.head=NULL;
	do{
		scanf("%d",&num);
		if(num!=-1){
			add(&list,num);
		}
	}while(num!=-1);
	Node* i;
	for(i=list.head;i;i=i->next){
		printf("%d ",i->value);
	}
	printf("\n%d\n",search(&list,2));
		return 0;
}
void add(List *plist,int num){
	Node *p=(Node*) malloc(sizeof(int));
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
int search(List* plist,int num){
	Node* p;
	int bol;
	for(p=plist->head;p;p=p->next){
		if(p->value==num){
			bol=1;
			break;
		}else{
			bol=0;
		}
		
	}
	return bol;
}
void delEmt(List *plist,int num){
	Node *p;
	for(p=plist->head;p;p=p->next){
		
	}
}
//int main(){
//	Node *head=NULL;
//                int number;
//                do{ 
//                    scanf("%d",&number);
//                    if(number!=-1){
//                        //add to linkedlist
//                        Node *p=(Node*)malloc(sizeof(Node));
//                        p->value=number;
//                        p->next=NULL;
//                        //find the last
//                        Node* last=head;
//                        if(last){
//                            while(last->next){
//                                last=last->next;
//                            }
//                            //attch
//                            last->next=p;
//                        }else{
//                            head=p;
//                        }
//                    }
//                }while(number!=-1);
//    Node *i;
//    for(i=head;i;i=i->next){
//    	printf("%d ",i->value);
//	} 
//	return 0;
//} 
