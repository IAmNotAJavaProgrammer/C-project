/*շת������� 
		1�����b=0�����������a�����Լ����
		2������a%b����a=b��b=a%b��
		3���ص���һ���� 
*/ 
#include <stdio.h>

int main(){
	int a,b,t;
	scanf("%d %d",&a,&b);
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
		printf("a=%d,b=%d\n",a,b);
	}
	printf("���Լ��Ϊ%d\n",a);
	return 0;
} 
