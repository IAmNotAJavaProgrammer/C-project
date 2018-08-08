#include <stdio.h>

int main(){
	int a=0,b=0;
	scanf("%d %d",&a,&b); 
	int min;
	if(a<b){
		min=a;
	}else{
		min=b;
	}
	int i;
	int t=0;
	for(i=1;i<min;i++){
		if(a%i==0){
			if(b%i==0){
				t=i;
				/*if(t<i){
					t=i;
				}*/
			}
		}
	}
	printf("%d",t);
	return 0;
} 
