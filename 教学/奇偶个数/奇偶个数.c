#include <stdio.h>

int main(){
	int num=0;
	int b=-1,c=0;
	
	do{
	
	if(num<0){
		printf("ERRO");
	}else if(num>1000){
		printf("ERRO");
	}else if(num%2==0){
		b++;
	}else if(num%2!=0){
		c++;
	}
	printf("���������֣�"); 
	scanf("%d",&num);
	}while(num!=-1);
	printf("ż������Ϊ%d��\n��������Ϊ%d\n",b,c);
	return 0; 
}
