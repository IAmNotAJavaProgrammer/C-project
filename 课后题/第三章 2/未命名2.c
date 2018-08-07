#include<stdio.h>

int main(){
	int r,h;
	printf("请输入半径：");
	scanf("%d",&r);
	printf("请输入高：");
	scanf("%d",&h);
	double v=(1/3)*3.1415*r*r*h;
	//v;
	printf("体积为%lf\n",v);
	return 0;
} 
