#include <stdio.h>

int main(){
	int sum=0,a=0,b=0,result=0;
	printf("请输入数字，结束后输入-1");
	scanf("%d",&a);
	while(a>=0){
		sum=sum+a;
		scanf("%d",&a);
		b++;
		printf("sum=%d,b=%d",sum,b);//用来调试程序 
	}
	result=sum/b;
	printf("平均数为%f",result*1.0);
	return 0;
}
