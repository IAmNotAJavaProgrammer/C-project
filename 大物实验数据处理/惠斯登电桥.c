/*
* @Author: Marte
* @Date:   2017-11-30 21:04:40
* @Last Modified by:   Marte
* @Last Modified time: 2017-11-30 21:11:39
*/

#include <stdio.h>

int main() {
    float T[8]={80,75,70,65,60,55,50,45};
    float Rt[8],T2[8],Rt2[8],TRt[8];
    for (int i = 0; i < 8; ++i)
    {
        scanf("%f",&Rt[i]);
   }
   for (int i = 0; i < 8; ++i)
   {
       T2[i]=T[i]*T[i];
       Rt2[i]=Rt[i]*Rt[i];
       TRt[i]=T[i]*Rt[i];
   }
   for (int i = 0; i < 8; ++i)
   {
       printf("%f\t%f\t%f\n",T2[i],Rt2[i],TRt[i]);
   }
    return 0;
}