#include <stdio.h>

int main(){
	int RS=0;
	char*r1="Unreadable";
	char*r2="Barely readable, occasional words distinguishable";
	char*r3="Readable with considerable difficulty";
	char*r4="Readable with practically no difficulty";
	char*r5="Perfectly readable";
	char*s1="Faint signals, barely perceptible";
	char*s2="Very weak signals";
	char*s3="Weak signals";
	char*s4="Fair signals";
	char*s5="Fairly good signals";
	char*s6="Good signals";
	char*s7="Moderately strong signals";
	char*s8="Strong signals";
	char*s9="Extremely strong signals";
	scanf("%d",&RS);
	if(RS<11){
		printf("WRONG NUMBER .");
	}else if(RS>59){
		printf("WRONG NUMBER .");
	}else if(RS%10==0){
		printf("WRONG NUMBER .");
	}else{
		switch(RS%10){
			case 1:
				printf("%s,",s1);
				case 2:
					printf("%s,",s2);
					break;
				case 3:
					printf("%s,",s3);
					break;
				case 4:
					printf("%s,",s4);
					break;
				case 5:
					printf("%s,",s5);
					break;
				case 6:
					printf("%s,",s6);
					break;
				case 7:
					printf("%s,",s7);
					break;
				case 8:
					printf("%s,",s8);
					break;
				case 9:
					printf("%s,",s9);
					break;
			
		}
		switch(RS/10){
			case 1:
				printf("%s.",r1);
				break;
			case 2:
				printf("%s.",r2);
				break;
			case 3:
				printf("%s.",r3);
				break;
			case 4:
				printf("%s.",r4);
				break;
			case 5:
				printf("%s.",r5);
				break;
		}
	}
	return 0;
}
