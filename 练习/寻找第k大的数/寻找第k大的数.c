#include<stdio.h>
#define N 9999
#define K (N/2)
void BubbleSort(int *a);
int main (){
	int a[N],b[K];
	int c=0;
	int p=K;
	for(c=0;c<N;c++){
		a[c]=c;
	}
/*	for(c=0;c<N;c++){
		printf("%d\n",a[c]);
	}*/	
	for(c=0;c<K;c++){
		b[c]=a[c];
	}
	BubbleSort(b);
	for(p;p<N;p++){
		if(a[p]<b[K-1])
			continue;
		else{
			b[K-1]=a[p];
			BubbleSort(b);
		}
	}
	printf("%d\n",b[K-1]);
	//printf("%d\n",K);
	return 0;
}
void BubbleSort(int *a){
	int i=0,j=0;
	for(i=0;i<K-1;i++){
		for(j=0;j<K-1-i;j++){
			if(a[j]<a[j+1]){
			int t;
			t=a[j+1];
			a[j+1]=a[j];
			a[j]=t;
			}
		}
		
	}
}
