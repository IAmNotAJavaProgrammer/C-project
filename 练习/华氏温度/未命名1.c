#include <stdio.h>
#include <math.h>
#define R 1.5
#define H 3
#define PI 3.14159

int main(){
	float C,S1,S2,V1,V2;//һһ��Ӧ 
	C=2*PI*R;
	S1=PI*pow(R,2.0);
	S2=4*PI*pow(R,2.0);
	V1=(4.0/3)*PI*pow(R,3.0);
	V2=S1*3;
	printf("Բ�ܳ���%f\nԲ�����%f\nԲ��������%f\nԲ�������%f\nԲ�������%f\n",C,S1,S2,V1,V2);
	return 0;
}
