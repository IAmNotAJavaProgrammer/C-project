#include<stdio.h>

int main()
{
	int hour1,hour2;
	int minute1,minute2;
	printf("请输入第一个小时和分钟：");
	scanf("%d %d",&hour1,&minute1);
	printf("请输入第二个小时和分钟：");
	scanf("%d %d",&hour2,&minute2); 
	int ih=hour2-hour1;
	int im=minute2-minute1;
	if(im<0){
		im=im+60;
		ih--;
	}
	printf("时差为%d小时%d分钟\n",ih,im);
	return 0;
}
