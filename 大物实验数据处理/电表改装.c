/*
* @Author: Marte
* @Date:   2017-11-30 20:19:48
* @Last Modified by:   Marte
* @Last Modified time: 2017-11-30 20:42:44
*/

#include <stdio.h>

int main() {
    float Vx[11]={0,0.5,1.0,1.5,2.0,2.5,3.0,3.5,4.0,4.5,5.0,};
    float Vs[11],Vs2[11],Vi[11],dVi[11];
    for(int i=0;i<11;i++){
        scanf("%f",&Vs[i]);
    }
    for(int i=0;i<11;i++){
        scanf("%f",&Vs2[i]);
    }
    for(int i=0;i<11;i++){
        Vi[i]=(Vs[i]+Vs2[i])/2;
        dVi[i]=Vi[i]-Vx[i];
    }
    printf("\n");
    printf("平均：");
    for (int i = 0; i < 11; ++i)
    {
        printf("%f  ",Vi[i]);
    }
    printf("\n");
    printf("修正值：");
    for (int i = 0; i < 11; ++i)
    {
        printf("%f  ",dVi[i]);
    }
    return 0;
}