#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <sys/time.h>
#include "Merge.h"
#include "Arrays.h"
#include "Insercion.h"

#define N 10000	//Tamaño del arreglo

void showUSec(long micros);

int main(){
    int A[N],temp[N];
    struct timeval start,end;
    long micros;
    
    FillRandom(A,N);
	
	printf("Tam del arreglo a ordenar: %d\n",N);
	 
    printf("\n---------------------------------------\n");
    printf("Insertion\n"); 
	CopyArray(A,temp,N); //Copia del arreglo original
    
    gettimeofday(&start,NULL); //Inicia reloj

    InsertionSort(temp,N); //Ordena el arreglo

    gettimeofday(&end,NULL); //Detiene reloj
	
	micros = (end.tv_usec - start.tv_usec); //Calcula el tiempo en microsegundos
	printf("%ld seconds   ",end.tv_sec - start.tv_sec);
    showUSec(micros); //Muestra el tiempo
    
    printf("\n---------------------------------------\n");
    
	printf("Merge-sort\n");
    CopyArray(A,temp,N);
    
    gettimeofday(&start,NULL); //Inicia reloj

    MergeSort(temp,0,N-1); //Ordena el arreglo

    gettimeofday(&end,NULL); //Detiene reloj
	
	micros = (end.tv_usec - start.tv_usec); //Calcula el tiempo en microsegundos
	printf("%ld seconds   ",end.tv_sec - start.tv_sec);
    showUSec(micros); //Muestra el tiempo
    
    printf("\n---------------------------------------\n");
	
    printf("Bubble-sort\n");
    CopyArray(A,temp,N);
    
    gettimeofday(&start,NULL); //Inicia reloj

    Bubble(temp,N); //Ordena el arreglo

    gettimeofday(&end,NULL); //Detiene reloj
	
	micros = (end.tv_usec - start.tv_usec); //Calcula el tiempo en microsegundos
	printf("%ld seconds   ",end.tv_sec - start.tv_sec);
    showUSec(micros); //Muestra el tiempo
    
    printf("\n---------------------------------------\n");
}

void showUSec(long micros){
	micros = abs(micros);
	long temp;
	//Divide en milisegundos y microsegundos
	if(micros>1000){
		temp=micros/1000;
		printf("%ld miliseconds  %ld microseconds",temp,micros%1000);
	}else{
		printf("%ld microseconds",micros);
	}
}


