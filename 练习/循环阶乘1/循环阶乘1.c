#include<stdio.h>

int main(){
	int n;
	int fact=1;
	//int i=1;
	scanf("%d",&n); 
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	printf("%d",fact);
	return 0;
}
/*������for���i=n������n�˵�1��
 	��ʱ���Խ�i=д��n��
		��ʱn����ʡ�� 
�����ó����2��ʼ�ˣ�Ҳ���Դ�n�˵�2*/ 
