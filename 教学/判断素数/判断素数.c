#include <stdio.h>
//������ʦ���Ĵ��룬ȴ�����ж�x=1����� 
int main(){
	int x;
	scanf("%d",&x);
	int i;
	int isPrime=1;
	for(i=2;i<x;i++){
		if(x%i==0){
			isPrime=0;
			break;
		}
	}
	//if(i<x){��������} else{������}(�����滻�·����룬����һ�ַ��������˷����������Ķ��ͺ���ά���� 
	if(isPrime==1){
		printf("x������"); 
	}else{
		printf("x��������");
	} 
	return 0; 
}
