#include <stdio.h>

int main(){
	int n;
	int i;
	double sum=0.0;
	int sign=1; 
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=sign*1.0/i; //Áîdouble sign=1.0Ôò´Ë´¦sum=sign/ i 
		sign=-sign;
	}
	printf("f(%d)=%f\n",n,sum);
	return 0;
} 
