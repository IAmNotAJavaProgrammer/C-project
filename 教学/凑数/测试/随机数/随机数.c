#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	 srand(time(0));
	 int num=rand()%100+1,count=0,a=0;
	 
	 printf("已经生成1到100之间的数\n");
	 do{
	 	printf("请输入您的猜测：");
		scanf("%d",&a);
		count++;
		if(a>num){
			printf("大了"); 
		}else if(a<num){
			printf("小了"); 
		} 
	 } while(a!=num);
	 printf("您用了%d次猜对了,答案为%d。\n",count,num); 
	return 0;
}
