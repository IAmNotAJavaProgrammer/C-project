#include <stdio.h>
#include <math.h>

int main(){
	int num;
	int a,b,c,d;
	int i;
	scanf("%d",&num);
	a=num/10000;
	b=num%10;
	c=num%10000/1000;
	d=num%100/10;
	if(a==b&&c==d)
		printf("%d�ǻ�����\n",num);
	else
		printf("%d���ǻ�����\n",num);
} 
