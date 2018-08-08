#include <stdio.h>
#include <math.h>

int main(){
	int num=0;
	scanf("%d",&num);
	int a=0;
	if(num<99){
		printf("不存在自幂数"); 
	}else{
		int x=0,i=0,result=0;
		int c=num;
		double b=0;
		for(i=100;i<=num;i++){
			int count=0;
			for(a=i;a>0;count++){
				a/=10;
			}
			for(x=1;x<count;x++){
				b=i%10;
				i/=10;
				result+=pow(b,count);
			}
			if(result==c){
			printf("%d\t",i);
			}
		}
	}
	return 0;
}
