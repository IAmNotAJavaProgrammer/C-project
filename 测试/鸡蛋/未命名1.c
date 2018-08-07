#include <stdio.h>

int main(){
	int i=0;
	while(1){
		if(i%1==0&&i%2==1&&i%3==0&&i%4==1&&i%5==4&&i%6==3&&i%7==0&&i%8==1&&i%9==0){
			break;
		}
		i++;		
	}
	printf("%d",i);
	return 0;
} 
