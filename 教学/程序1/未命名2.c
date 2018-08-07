#include <stdio.h>
void fun(int k){
	if(k>0) fun(k-1);
	printf("%d",k);
}
int main(){
	int a=5;
	fun(a);
	printf("\n");
}
