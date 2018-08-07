#include<stdio.h>

void swap(int a,int b){
	
	int t=a;
	a=b;
	b=t;
} 
int main(){
	  int x=2,y=4;
	  swap(x,y);
	  printf("x=%d,y=%d",x,y);
    return 0;
} 
