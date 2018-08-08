#include<stdio.h>

void mm(int *m1,int *m2,int *r,int x,int y,int z);
int main(){
	int m1[3][2]={2,-6,3,5,1,-1};
	int m2[2][4]={{4,-2,-4,-5},{-7,-3,6,7}};
	int m3[3][4];
	mm(&m1[0][0],&m2[0][0],&m3[0][0],3,2,4);
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++)
			printf("%d ",m3[i][j]);
		printf("\n");
	}
	return 0;
} 
void mm(int *m1,int *m2,int *r,int x,int y,int z){
	int *mp1;
	int *mp2;
	int row;
	int col;
	int k;
	for(row=0;row<x;row++){
		for(col=0;col<z;col++){
			mp1=m1+row*y;
			mp2=m2+col;
			*r=0;
			for(k=0;k<y;k++){
				*r+=*mp1 * *mp2;
				mp1+=1;
				mp2+=z;
			}
			r++;
		} 
	} 
}
