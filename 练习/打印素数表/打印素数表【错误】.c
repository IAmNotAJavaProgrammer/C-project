#include<stdio.h>

int isPrime(int c,int kp[];int nkp);
int main(){
	const int number=100;
	int prime[100]={2};
	int count=1;
	int i=3;
	while(count<number){
		if(isPrime(i,prime,count)){  //isPrime返回0或1 
			prime[count++]=i; //这句话将i的值赋给prime（count）并使count+1
			
		}
		i++;
	}
	for(i=0;i<number;i++){
		printf("%d",prime[i]);
		if((i+1)%5){
			printf("\t");
		}else{
			printf("\n");
		}
	}
	return 0;
} 

int isPrime(int c,int kp[];int nkp){
	int ret=1;
	int i;
	for(i=0;i<nkp;i++){
		if(c%kp[i]==0){
			ret=0;
			break;
		}
	}
	return ret;
}
