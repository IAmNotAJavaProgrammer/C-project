
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BLOCK_SIZE 20
typedef struct{
	int *array;
	int size;
} Array;
 Array array_create(int init_size){
	Array a;
	a.array=(int*)malloc(sizeof(int)*init_size);
	a.size=init_size;
	return a;
}
void array_free(Array *a){
	free(a->array);
	a->size=0;
}
int array_size(const Array *a){
	return (a->size);
	
}
void array_inflate(Array *a,int more_size){
	int* p=(int*)malloc(sizeof(int)*(a->size+more_size));
	memcpy((void*)p,(void*)a->array,a->size);
	free(a->array);
	a->array=p;
	a->size=a->size+more_size;
}
int* array_at(Array *a,int index){
	if(index>=a->size){
		array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);
	}
	return &(a->array[index]);
}

int main(){
	Array a=array_create(3);
	printf("原数组大小：%d\n",array_size(&a));
	*array_at(&a,2)=10;
	printf("a[2]=%d\n",*array_at(&a,2));
	*array_at(&a,5)=56;
	printf("%d\n",*array_at(&a,5));
	array_free(&a);
	return 0;
} 
