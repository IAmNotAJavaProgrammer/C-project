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


//ȥ��ż��ѭ�� 
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

//ѭ��ֻҪ�ߵ�x��ƽ�����Ϳ����� 
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
//�ж��Ƿ��ܱ���֪����<x����������
int main(){
	const int number=100;
	int prime[number]={2};
	int i=3;
	while(count<number){
		if(isPrime(i,prime,count)){  //isPrime����0��1 
			prime[count++]=i; //��仰��i��ֵ����prime��count����ʹcount+1
			
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
 
