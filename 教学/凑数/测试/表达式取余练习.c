#include <stdio.h> 

int main()
{
	int hour1,minute1;
	int hour2,minute2;
	printf("第一个时间小时和分钟：");
	scanf("%d %d",&hour1,&minute1);
	printf("第二个时间小时和分钟："); 
	scanf("%d %d",&hour2,&minute2);
	int a=(hour1-hour2)*60+(minute1-minute2);
	int b,c;
	b=a/60;
	c=a%60;
	printf("差值为%d小时%d分。\n",b,c);
	return 0; 
}
