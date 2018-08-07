#include<stdio.h>

int main(){
	const int num=10;
	int x;
	int count[num];
	int i;
	for(i=0;i<10;i++){
		count[i]=0;
	}
	
	do{
		scanf("%d",&x);
		if(x>=0&&x<=9){
			count[x]++;
		}
	}while(x!=-1); 
	for(i=0;i<num;i++){
		printf("%d:%d\n",i,count[i]);
	}
	return 0;
}
