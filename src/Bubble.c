#include <stdio.h>
#include "Arrays.h"

void Bubble(int A[], int length){
	int i,j;
	
	for(i=1;i<length;i++){
		for(j=0;j<length-i;j++){
			if(A[j]>A[j+1]){
				Swap(&A[j],&A[j+1]);
			}
		}
	}
}


