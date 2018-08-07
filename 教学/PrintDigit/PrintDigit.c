#include <stdio.h>

void PrintDigit(int a);
void PrintOut(int a);
int main (){
	int a;
	scanf("%d",&a);
	a=(char)a;
	PrintOut(a);
	return 0;
}
void PrintDigit(int b){
	if(b<10)
		printf("%d",b);
}
void PrintOut(int a){
	if(a>=10)
		PrintOut(a/10);
	PrintDigit(a%10);
}
