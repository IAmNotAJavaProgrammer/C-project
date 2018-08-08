//Î´Íê³É 
#include <stdio.h>

int main(){
	int a[][2],b[][2];
	int x,y;
	int i=0,j=0;
	scanf("%d %d".&x,&y);
	while(x!=0){
		a[i][1]=x;
		a[i][2]=y;
		i++;
		scanf("%d %d".&x,&y);
	}
	scanf("%d %d".&x,&y);
	while(x!=0){
		a[j][1]=x;
		a[j][2]=y;
		j++;
		scanf("%d %d".&x,&y);
	}
	
	return 0;
}
