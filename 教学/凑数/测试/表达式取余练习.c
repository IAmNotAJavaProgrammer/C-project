#include <stdio.h> 

int main()
{
	int hour1,minute1;
	int hour2,minute2;
	printf("��һ��ʱ��Сʱ�ͷ��ӣ�");
	scanf("%d %d",&hour1,&minute1);
	printf("�ڶ���ʱ��Сʱ�ͷ��ӣ�"); 
	scanf("%d %d",&hour2,&minute2);
	int a=(hour1-hour2)*60+(minute1-minute2);
	int b,c;
	b=a/60;
	c=a%60;
	printf("��ֵΪ%dСʱ%d�֡�\n",b,c);
	return 0; 
}
