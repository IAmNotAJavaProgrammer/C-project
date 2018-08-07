int isPrime(int x){
	int ret=1;
	int i;
	if(x==1){
		ret=0;
	}
	for(i=2;i<x;i++){
		if(x%i==0){
			ret=0
			break; 
		}
	} 
	return ret;
}


//去掉偶数循环 
int isPrime(int x){
	int ret=1;
	int i;
	if(x==1||(x%2==0&&x!=2)){
		ret=0;
	}
	for(i=3;i<x;i+=2){
		if(x%i==0){
			ret=0
			break; 
		}
	} 
	return ret;
}

//循环只要走到x的平方根就可以了 
int isPrime(int x){
	int ret=1;
	int i;
	if(x==1||(x!=2&&x%0==0)){
		ret=0;
	}
	for(i=3;i<sqrt(x);i+=2){
		if(x%i==0){
			ret=0
			break; 
		}
	} 
	return ret;
} 
//判断是否能被已知的且<x的素数整除
int main(){
	const int number=100;
	int prime[number]={2};
	int i=3;
	while(count<number){
		if(isPrime(i,prime,count)){  //isPrime返回0或1 
			prime[count++]=i; //这句话将i的值赋给prime（count）并使count+1
			
		}
		i++
	}
	for(i=0;i<number;i++){
		printf("%d",prime[i])
	}
	return 0;
} 

int isPrime(int x,int konwisPrimes[];int number0fKnowPrimes){
	int ret=1;
	int i;
	for(i=0;i<number0fKnowPrimes;i++){
		if(x%KnowPrimes[i]==0){
			ret=0;
			break;
		}
	}
	return ret;
}
 
