#include <stdio.h>

int main(){
	int sum=0,a=0,b=0,result=0;
	printf("���������֣�����������-1");
	scanf("%d",&a);
	while(a>=0){
		sum=sum+a;
		scanf("%d",&a);
		b++;
		printf("sum=%d,b=%d",sum,b);//�������Գ��� 
	}
	result=sum/b;
	printf("ƽ����Ϊ%f",result*1.0);
	return 0;
}
