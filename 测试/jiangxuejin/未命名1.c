#include<stdio.h>

int main(){
	int x,y,sum;
	float a,b,c,d;
	x=45;
	y=40;
	sum=x+y;
	a=x*0.2+y*0.2;
	b=(x+y)*0.2;
	c=sum*0.2;
	d=sum*0.1+sum*0.1;
	printf("x*0.2+y*0.2=%f\n(x+y)*0.2=%f\nsum*0.2=%f\nsum*0.1+sum*0.1=%f\n",a,b,c,d);
}
