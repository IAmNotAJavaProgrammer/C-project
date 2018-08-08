#include <stdio.h>

int ContS(char *s);
void SechS(char *s);
int main(){
	char *s1="this",*s2="two",*s3="fat",*s4="that";
	SechS(s1);
	SechS(s2);
	SechS(s3);
	SechS(s4);
	return 0;
}
int ContS(char *s){
	int i=0;
	while(1){
		if(s[i]=='\0') {
			break;
		}
		i++;
	}
	return i;
}
void SechS(char *s){
		int b[4] [4]={'t','h','i','s','w','a','t','s','o','a','h','g','f','g','d','t'};
	int a=ContS(s);
	printf("%d",a);
	int c=0,i=0,j=0,bol=0;
	for(c;c<a;c++){
		bol=0;
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				if(s[c]==b[i] [j]){
					bol=1;
					break;
				}
			}
			if(bol){
				break;
			}
		}
		if(!bol){
			break;
		}
	}
	if(bol){
		printf("´æÔÚ");
	}else{
		printf("²»´æÔÚ");
	}
}

