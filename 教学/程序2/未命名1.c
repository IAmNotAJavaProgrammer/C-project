#include <stdio.h>

 int a=1;
int fun(int b){
	static int a=5; 
	a+=b;
	printf("%d",a);
	return (a);
}
int main(){
	int d=3;
	printf("%d\n",fun(d*fun(a+d))); 
	return 0; 
}
