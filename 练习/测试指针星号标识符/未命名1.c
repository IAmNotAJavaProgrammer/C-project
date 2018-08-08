#include<stdio.h>

int main(){
	char *s;
	s="Hello World!";
	char a='a';
	char *ptrtoa=&a;
	int *i=1;
//	printf("s %p=%p\ns %s=%s\n*s %p=%p\n*s %s=%s\n",s,s,*s,*s);
//	printf("%p\n%p\n%s",&s[0],s,s);
printf("%d",*i);
	return 0;
}
