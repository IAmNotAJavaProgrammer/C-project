#include <stdio.h>
#include<math.h>

int main(){
	int num;
	scanf("%d",&num);
	if(num<100){
		printf("None");
	}else{
		int x;
		double c;
		//int result;
		for(x=153;x<=num;x++){
			int result=0;
			double count=0;
			int i=x;
			for(i=x;i>0;count++){
				i/=10;
			}
			int j,k=x,b=10;
			for(j=0;j<count;j++){
				c=k%b;
				k/=b; 
				result+=pow(c,count);
			}
			if(x==result){
				printf("%d\t",x);
			}
		}
	}
	return 0;
}
