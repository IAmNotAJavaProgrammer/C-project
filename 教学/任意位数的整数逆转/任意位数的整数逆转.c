#include <stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	int digit=0;
	int ret=0;
	while(num>0){
		digit=num%10;//��Ҫ���ÿһλ���磺700-->007������Ҫ��ѭ���������digit 
		ret=ret*10+digit;
		num/=10;
	}
	printf("��ת�������Ϊ%d",ret);
	return 0;
}
