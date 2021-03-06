#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include "Insercion.h"
#include "Merge.h"
#include "Arrays.h"

#define N 50000

int main(){
    int A[N],temp[N];
    clock_t start_t, end_t, total_t;
    
    //printf("%d",INT_MAX);
    
    FillRandom(A,N);
    printf("Tam del arreglo a ordenar: %d\n\n",N);
    CopyArray(A,temp,N);
    
    start_t=clock();
    printf("Insertion\nInicio: %ld\n",start_t);

    InsertionSort(temp,N);

    end_t=clock();
    printf("Fin: %ld\n",end_t);

    total_t= (double)(end_t-start_t);
    printf("Tiempo: %ld",total_t);
    
    putchar('\n');
    
    CopyArray(A,temp,N);
    
    start_t=clock();
    printf("Merge-sort\nInicio: %ld\n",start_t);

    MergeSort(temp,0,N-1);

    end_t=clock();
    printf("Fin: %ld\n",end_t);
    
    total_t= (double)(end_t-start_t);
    printf("Tiempo: %ld",total_t);
}


