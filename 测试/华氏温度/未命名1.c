#include <stdio.h>
#include <math.h>
#define R 1.5
#define H 3
#define PI 3.14159

int main(){
	float C,S1,S2,V1,V2;//一一对应 
	C=2*PI*R;
	S1=PI*pow(R,2.0);
	S2=4*PI*pow(R,2.0);
	V1=(4.0/3)*PI*pow(R,3.0);
	V2=S1*3;
	printf("圆周长：%f\n圆面积：%f\n圆球表面积：%f\n圆球体积：%f\n圆柱体积：%f\n",C,S1,S2,V1,V2);
	return 0;
}
