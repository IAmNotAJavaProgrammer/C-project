#include <stdio.h>

int main(){
	int num;
	printf("请输入范围："); 
	scanf("%d",&num);
	int b=2;
	int i=2;
	//int c=b%i; 
	if(num<=1){
		printf("ERRO!");
	}else{
		for(b=2;b<=num;b++){ //用来控制数字增加 
			for(i=2;i<=b;i++){  //用来判断是否为素数 
				if(i==b){
					continue;
				}if(b%i==0){
					break;
				}else if(b%i!=0){
					continue;
				}
			}
			if(b%i==0){  //可参考十七行 
				continue;
			}else if(b%i!=0){
				printf("%d ",b);
			}
		}
	}
	
	return 0;
}
