#include <stdio.h>

int main(){
	double cmn(int,int);
	printf("c(9,3)=%.11f\n",cmn(9,3));
	printf("c(8,2)=%.11f\n",cmn(8,2));
	printf("c(7,5)=%.11f\n",cmn(7,5));
	return 0;
}
double cmn(int m,int n){
	double c;
	long fac(int);
	c=(double)fac(m)/(fac(n)*fac(m-n));
	return (c);
}
long fac(int n){ //×ö½×³Ë 
	int i;
	long k;
	for(i=1,k=1;i<=n;i++)
		k=k*i;
	return (k);
}
