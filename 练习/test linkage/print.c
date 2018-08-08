#include<stdio.h>
enum L{O=1,CPU=8,PINT=16,Q=32,G=128
};
int main(){
	enum L jar;
	jar=O;
	printf("%d",jar);
}
