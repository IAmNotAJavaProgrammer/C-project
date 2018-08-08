#include<stdio.h>
#include<string.h>
int main(){
	char a[10]="abcde";
	char b[]="fghij";
	strncpy(a,b,3);
	a[3-1]='\0';
	printf("%s",a);
	return 0;
} 
