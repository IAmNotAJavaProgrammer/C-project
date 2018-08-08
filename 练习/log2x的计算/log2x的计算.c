#include <stdio.h>

int main(){
	int x=0,ret=0;
	printf("ÇëÊäÈëxµÄÖµ"); 
	scanf("%d",&x);
	int t=x; 
	while(x>1){
		x/=2;
		ret++;
	}
	printf("log2X of %d is %d",t,ret);
	return 0;
}
