#include <stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	int digit=0;
	int ret=0;
	while(num>0){
		digit=num%10;//若要输出每一位，如：700-->007，就需要在循环体中输出digit 
		ret=ret*10+digit;
		num/=10;
	}
	printf("逆转后的数字为%d",ret);
	return 0;
}
