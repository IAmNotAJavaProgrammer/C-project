#include<stdio.h>

int main(){
	int a[]={
		[0]=10,[3]=3,6
	};
	printf("%d %d %d",sizeof(a),sizeof(a[0]),sizeof(a)/sizeof(a[0]));
	return 0;
}
