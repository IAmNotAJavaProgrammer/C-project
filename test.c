/*
* @Author: Marte
* @Date:   2017-11-18 18:05:11
* @Last Modified by:   Marte
* @Last Modified time: 2018-01-04 15:35:09
*/

#include <stdio.h>

int main() {
    int i=9;
    i+=i*=i/4;
    printf("%d\n",i);
    return 0;
}