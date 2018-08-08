#include<stdio.h>

int main(){
	int a[10]={
		[0]=1,[2]=3,6,
	};
	printf("0=%d,2=%d,3=%d,4=%d",a[0],a[2],a[3],a[4]);
	return 0;
} 
