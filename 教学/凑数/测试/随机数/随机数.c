#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	 srand(time(0));
	 int num=rand()%100+1,count=0,a=0;
	 
	 printf("�Ѿ�����1��100֮�����\n");
	 do{
	 	printf("���������Ĳ²⣺");
		scanf("%d",&a);
		count++;
		if(a>num){
			printf("����"); 
		}else if(a<num){
			printf("С��"); 
		} 
	 } while(a!=num);
	 printf("������%d�β¶���,��Ϊ%d��\n",count,num); 
	return 0;
}
