#include<stdio.h>

int main(){
	int n;
	int fact=1;
	//int i=1;
	scanf("%d",&n); 
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	printf("%d",fact);
	return 0;
}
/*可以让for里的i=n，即从n乘到1，
 	此时可以将i=写成n，
		此时n可以省略 
可以让程序从2开始乘，也可以从n乘到2*/ 
