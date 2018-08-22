#include<stdio.h>
#include<string.h>

int main(){
	char s[]="Hello\nworld\t";
	p_token(s); 
	return 0;
}
void p_token(char *line){
	static char w[]="\t\f\r\v\n";
	char *token;
	for(token=strtok(line,w);token!=NULL;token=strtok(NULL,w))
		printf("%s\n",token);
} 
