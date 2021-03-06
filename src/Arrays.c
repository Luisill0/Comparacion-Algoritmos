#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PrintArray(int A[],int length){
    int i;
    for(i=0,putchar('{');i<length;i++){
        printf("%d,",A[i]);
    }
    putchar('}');
    putchar('\n');
}

void FillRandom(int A[],int length){
	int i;
	srand(time(NULL));
	for(i=0;i<length;i++){
		A[i]=rand()%9+1;
	}
}

void CopyArray(int A[],int B[],int length){
	int i;
	for(i=0;i<length;i++){
		B[i]=A[i];
	}
}

void Swap(int *a,int *b){
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
}
