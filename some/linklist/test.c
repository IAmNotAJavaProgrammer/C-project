
#include"linklist.h"
int main(){
    List list = CreateList( list );
    int num;
    Position P = list;

    do{
        scanf( "%d",&num );
        Insert( list,P,num );
        printf("insert finish\n");
        P = P->next;
    }while( num != -1 );
//    for(P=list->next;!IsLast(P);P = P->next ){
//        printf("%d ",P->value);
//    }
    //上面 循环终止条件出错
    P=list->next;
    while(P != NULL){
        printf("%d", P ->value );
        P = P ->next;
    }
    return 0;
}
