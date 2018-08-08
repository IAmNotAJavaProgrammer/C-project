#include <stdio.h>

int main(){
	int type;
	scanf("%d",&type);
	switch(type){
		case 1:
			printf("1");
			break;
		case 2:
			printf("2");
			break;
		case 1+2:
			printf("3");
			//break;
		case 4:
			printf("4");
			break;
		default:
			printf("ʲô");
			break;
	}
	return 0; 
}
