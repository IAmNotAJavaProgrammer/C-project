#include <stdio.h>

int main(){
	int BJT=0,UTC=0;
	scanf("%d",&BJT);
	if(BJT<0){
		printf("ERRO\n");	
	}else if(BJT>2359){
		printf("ERRO\n");
	}else if(BJT<800){
		UTC=1600+BJT;
		printf("%d",UTC);
	}else if(BJT>=800){
		UTC=BJT-800;
		printf("%d",UTC);
	}
	return 0;
}
