/*枚举法：（此方法需要一个一个地列举所有的数，效率较低） 
1、设i=2；
2、如果a b都能被i整除，则记下这个i；
3、i加1并重复第二步直到i等于a或b；
4、那么曾经几下的最大的i就是a和b的最大公约数。

以下的程序对于与1有关的求值无法计算 对于相等的求值无法计算 
*/ 
#include <stdio.h>

int main (){
	int a,b;
	int min;
	scanf("%d %d",&a,&b);
	if(a<b){
		min=a;
	}else{
		min=b;
	}
	int ret=0;
	int i;
	for(i=1;i<min;i++){
		if(a%i==0){
			if(b%i==0){
				ret=i;
			}
		}
	}
	printf("%d和%d的最大公约数是%d.\n",a,b,ret);
	return 0;
} 
