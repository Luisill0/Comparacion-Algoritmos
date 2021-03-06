#include <stdio.h>
#include "Insercion.h"
#include "Arrays.h"

void InsertionSort(int A[],int length){
    int i,key,j;

    for(j=1;j<length;j++){
        key=A[j];
        i=j-1;
        while(i>=0 && A[i]>key){
        	A[i+1]=A[i];
            i--;
        }
        A[i+1]=key;
    }
}


