#include<stdio.h>

int main()
{
	int hour1,hour2;
	int minute1,minute2;
	printf("�������һ��Сʱ�ͷ��ӣ�");
	scanf("%d %d",&hour1,&minute1);
	printf("������ڶ���Сʱ�ͷ��ӣ�");
	scanf("%d %d",&hour2,&minute2); 
	int ih=hour2-hour1;
	int im=minute2-minute1;
	if(im<0){
		im=im+60;
		ih--;
	}
	printf("ʱ��Ϊ%dСʱ%d����\n",ih,im);
	return 0;
}
