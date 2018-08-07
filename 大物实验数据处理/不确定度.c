#include <stdio.h>
#include"stdlib.h"
#include "math.h"
int main() {
    int n;
    float sum=0,sum2=0,avg,rut,rut2,Ua;
    float *a=(float*)malloc(n*sizeof(float));
    printf("请输入数据的个数后按回车键：");
    scanf("%d",&n);
    printf("请输入数据并用空格隔开，输入完所有数据后按回车键：");
    for (int i = 0; i < n; ++i)
    {
        scanf("%f",&a[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        printf("%f",a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; ++i)
    {
        sum+=a[i];
    }
    printf("sum=%f",sum);
    avg=sum/n;
    printf("avg=%f",avg);
    for (int i = 0; i < n; ++i)
    {
        sum2+=pow(a[i]-avg,2);
    }
    printf("%f\n",sum2);
    rut=sum2/(n*(n-1));
    printf("%f\n",rut);
    Ua=sqrt(rut);
    printf("Ua=%f\n",Ua);
    free(a);
    return 0;
}