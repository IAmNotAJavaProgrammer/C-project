#include <stdio.h>
#include <math.h>

int main(){
	const int num=100;
	int x,i;
	int ret=1,count=0;
	int a[50]={2};
	for(x=3;x<num;x++){
		if(x==1||(x!=2&&x%2==0)){
			ret=0;
		}
		for(i=3;i<sqrt(x);i+=2){
			if(x%i==0){
				ret=0; 
				break; 
			}
		}
		if(ret){
			a[count]=x;
			count++; 
		} 
	}
	int c=0;//Êä³ö¿ØÖÆ 
	for	(c=0;c<num;c++){
		printf("%d",a[c]);
		if(c%5!=0){
			printf("\t");
		}else{
			printf("\n");
		}
	}
	return 0;
}
