 #include <stdio.h>
 
 int main(){
 	int a,result,b;
 	scanf("%d",&a); 
 	b=a>=0;
 	switch(b){
 		case 1:
 			result=2*a;
 			break;
 		case 0:
 			result=-1;
 			break;
	 }
	 printf("%d",result);
	 return 0;
 } 
