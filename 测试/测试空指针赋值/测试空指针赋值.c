#include<stdio.h>
int main(){
	int *p=0;
	printf("%p\n",p);
	int a=1;
	p=&a;
	printf("%p\n",p);
	printf("%p\n",&a); 
	return 0;
}
