#include<stdio.h>

int main()
{
	int a;
	printf("Please input a number:");
	scanf("%d",&a);
	int b,c,d;
	b=a/100;
	d=a%10;
	c=a%100/10;
	printf("The new number is:%d\n",d*100+c*10+b*1);
	return 0;
}
