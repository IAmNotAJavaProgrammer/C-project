#include <stdio.h>

int main(){
	int num,sum=0,count=0;
	do{
		scanf("%d",&num);
		if(num!=-1){
			sum+=num; 
			count++;
		}
	}while(num!=-1);
	printf("ƽ�����ǣ�%f\n",1.0*sum/count);
	return 0; 
} 
