#include <stdio.h>

int main(){
	const int size=3;
	int board[size][size];
	int i,j;
	int num0fx;
	int num0f0;
	int result=-1;//-1：没人赢；1x：赢；0:0赢 
	//读入矩阵
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&board[i][j]);
		}
	} 
	//检查行 
	for(i=0;i<size&&result==-1;i++){
		num0f0=num0fx=0;
		for(j=0;j<size;j++){
			if(board[i][j]==1){
				num0fx++
			}else{
				num0f0++
			}
		}
		if(num0f0==size){
			result=0;
		} else if(num0fx==size){
			result=1;
		}
	}
	//检查列
	if (result==-1){
		for(j=0;j<size&&result==-1;j+){
			num0f0=num0fx=0;
			for(i=0;i<size;i++){
				if(board[i][j]==1){
					num0fx++;
				}else{
					num0f0++
				}
			}
			if(num0f0==size){
				rsult=0;
			}else if(num0fx==size){
				result=1;
			}
		}
	} 
	//检查对角线 
		//左上右下 
	 num0f0=num0fx=0
	 for(i=0;i<size;i++){
	 	if(board[i][i]==1){
	 		num0fx++;
		 }else{
		 	num0f0++;
		 }
	 }
	 if(num0f0==size){
	 	result==0;
	 }else if(num0fx==size){
	 	relult=1;
	 }
	 	// 右上左下 
	 num0f0=num0fx=0;
	 for(i=0;i<size;i++){
	 	if(board[i][size-i-1]==1){
	 		num0fx++;
		 }else{
		 	num0f0++;
		 }
	 }
} 
//同时检查行和列
 for(i=0;i<size&&result==-1;i++){
		num0f0=num0fx=num1f0=num1fx=0;
		for(j=0;j<size;j++){
			if(board[i][j]==1){
				num0fx++
			}else{
				num0f0++
			}
			if(board[j][i]==1){
				num1fx++;
			}else{
				num1f0++;
			}
		}
