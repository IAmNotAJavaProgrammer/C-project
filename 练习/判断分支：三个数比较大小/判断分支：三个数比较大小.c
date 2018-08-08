#include <stdio.h>

int main()
{
	int a,b,c,max=0;
	printf("请输入三个数：");
	scanf("%d %d %d",&a,&b,&c);
	printf("输入的三个数是：%d %d %d\n",a,b,c); 
	if(a>b)
	{
		if(a>c)
		{
			max=a;
		}else{
			max=c;
		}
	}else{
		if(b>c)
		{
			max=b;
		}else{
			max=c;
		}
	}
	printf("最大的数是%d",max);
	return 0;
}
