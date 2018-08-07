/*
* @Author: Marte
* @Date:   2017-11-30 20:51:03
* @Last Modified by:   Marte
* @Last Modified time: 2017-11-30 20:58:55
*/

#include <stdio.h>
int main() {
    float V[4];
    float VH;
    for(int i=0;i<8;i++){
        for(int i=0;i<4;i++){
            scanf("%f",&V[i]);
        }
        VH=(V[0]+V[1]+V[2]+V[3])/4;
        printf("%f\n",VH);
    }
    return 0;
}