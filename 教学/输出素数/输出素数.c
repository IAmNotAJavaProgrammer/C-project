#include <stdio.h>

int main(){
	int num;
	printf("�����뷶Χ��"); 
	scanf("%d",&num);
	int b=2;
	int i=2;
	//int c=b%i; 
	if(num<=1){
		printf("ERRO!");
	}else{
		for(b=2;b<=num;b++){ //���������������� 
			for(i=2;i<=b;i++){  //�����ж��Ƿ�Ϊ���� 
				if(i==b){
					continue;
				}if(b%i==0){
					break;
				}else if(b%i!=0){
					continue;
				}
			}
			if(b%i==0){  //�ɲο�ʮ���� 
				continue;
			}else if(b%i!=0){
				printf("%d ",b);
			}
		}
	}
	
	return 0;
}
