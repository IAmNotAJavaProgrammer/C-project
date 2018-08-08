#include <stdio.h>
//这是老师给的代码，却不能判断x=1的情况 
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
	//if(i<x){不是素数} else{是素数}(用来替换下方代码，是另一种方法，但此方法不利于阅读和后期维护等 
	if(isPrime==1){
		printf("x是素数"); 
	}else{
		printf("x不是素数");
	} 
	return 0; 
}
