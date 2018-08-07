#include <stdio.h>

int main(){
	int x=0;
	scanf("%d",&x);
	int mask=1;
	int t=x;
	while(t>9){
		t/=10;
		mask*=10;
	}
	//int mask=pow(10,cnt-1);
	do{
		int d=x/mask;
		printf("%d",d);
		if(mask>9){
			printf(" ");  //用来解决末尾也有空格的问题
		}
		x%=mask;
		mask/=10;
	}while(mask>0);
	printf("\n");
	return 0;
}
