#include <stdio.h>

int main () {
	double r,l,res;
	lab:
	scanf("%lf %lf",&r,&l);
	printf("r=%lf\n",r);
	res=(r*3.14159*0.004194*0.004194)/(4*l);
	printf("result=%E\n",res);
	goto lab;
	return 0;
}
