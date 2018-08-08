#include <stdio.h>
#include <math.h> 

int main(){
	int n,f(int);
	for(n=3;n<=100;n+=2){
		if(f(n)) printf("\t%2d",n);
	}
}
int f(int n){
	int i,m;
	m=(int)sqrt(n);
	for(i=2;i<=m;i++)
		if(n%i==0) return 0;
		return 1;
}
