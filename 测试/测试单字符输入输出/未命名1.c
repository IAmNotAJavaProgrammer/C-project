#include <stdio.h>

int main(){
	int ch;
	printf("\0");
	while ((ch=getchar() )!=EOF){
	putchar(ch);
	}
	return 0;
}
