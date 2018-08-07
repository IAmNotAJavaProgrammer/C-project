
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
int main() {
    double B[8],VH[8]={1.72,3.43,5.15,6.87,8.57,10.29,11.97,13.73},I[8]={0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8};
    double sumB=0,avgB,sumVH=0,avgVH,BVH,sumBVH=0,avgBVH,b,sumB2=0,avgB2,KH,n,sumVH2=0,avgVH2,a;
    //计算B
    for(int i=0;i<8;i++){
        B[i]=(0.00004*3.14159*15*I[i]*8)/(0.038*pow(5,1.5));
        sumB+=B[i];
        sumB2+=B[i]*B[i];
    }
    avgB=sumB/8;
    avgB2=sumB2/8;
    //计算VH
    for(int i=0;i<8;i++){
        sumVH+=VH[i];
        sumVH2+=VH[i]*VH[i];
    }
    avgVH=sumVH/8;
    avgVH2=sumVH2/8;
    //计算BVH
    for(int i=0;i<8;i++){
        sumBVH+=VH[i]*B[i];
    }
    avgBVH=sumBVH/8;
    //计算b
    b=(avgB*avgVH-avgBVH)/(avgB*avgB-avgB2);
    //计算a
    a=avgVH-b*avgB;
    //计算KH
    KH=b/3;
    //计算n
    n=1.0/(KH*0.5*pow(1.602,-19));
    //输出表格
    for (int i = 0; i < 8; ++i)
    {
        printf("%d\t%lf\t%lf\t%lf\t%lf\t%lf\n",i+1,B[i],B[i]*B[i],VH[i],VH[i]*VH[i],B[i]*VH[i]);
    }
    //
    printf("avgB=%lf,avgB2=%lf,avgVH=%lf,avgVH2=%lf\navgBVH=%lf,b=%lf,a=%lf,KH=%lf,n=%lf",avgB,avgB2,avgVH,avgVH2,avgBVH,b,a,KH,n);
    return 0;
}
