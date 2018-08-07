/*
* @Author: Marte
* @Date:   2017-12-13 12:45:05
* @Last Modified by:   Marte
* @Last Modified time: 2017-12-13 12:48:35
*/

#include <stdio.h>

int main() {
    while (1)
    {
       double a,b,c;
       scanf("%lf",&a);
       scanf("%lf",&b);
       c=a+0.05*b;
       printf("%lf\n",c);
    }


    return 0;
}