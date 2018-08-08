#include <stdio.h>

int main (){
	int a[] = {1,2,3,4,5,};
int *p = a;
int *q = &a[5];
printf("%d", q-p);
return 0;
} 
