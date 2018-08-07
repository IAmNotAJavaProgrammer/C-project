/*辗转相除法： 
		1、如果b=0，计算结束，a是最大公约数；
		2、否则，a%b，让a=b，b=a%b；
		3、回到第一步。 
*/ 
#include <stdio.h>

int main(){
	int a,b,t;
	scanf("%d %d",&a,&b);
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
		printf("a=%d,b=%d\n",a,b);
	}
	printf("最大公约数为%d\n",a);
	return 0;
} 
