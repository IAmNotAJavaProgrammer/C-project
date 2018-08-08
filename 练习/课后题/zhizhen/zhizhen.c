#include <stdio.h>

void swap(int *p1,int *p2){
	int t;
	t=*p1;
	*p1=*p2;
	*p2=t;
}
int main(){
	int a,b;
	int *po1,*po2;
	scanf("%d %d",&a,&b);
	po1=&a;
	po2=&b;
	swap(po1,po2);
	printf("%d,%d\n",a,b);
	printf("%d,%d\n",*po1,*po2);
	return 0;
}
