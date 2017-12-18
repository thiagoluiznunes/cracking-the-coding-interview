/*
 * Ex. 1: Write an algorithm that brings all nonzero elements to the left of the array and returns the number of nonzero elements:
 * Example input: [ 1, 0, 2, 0, 0, 3, 4]
 * Ouput: 4
 * [ 1, 4, 2, 3, 0, 0, 0 ]

 * Use the Merge Sort algorithm to sort inverted Array
 */

#include <stdio.h>
#include <stdlib.h>

void mergeSort(int* vector, int initialPosition, int endPosition){
		int i, j, k, half, *vectorTemp;
		
		if(initialPosition == endPosition){
			return;
		}
		
		half = (initialPosition + endPosition)/2;
		
		mergeSort(vector, initialPosition, half);
		mergeSort(vector, half +1, endPosition);
		
		i = initialPosition;
		j = half +1;
		k = 0;
		vectorTemp = (int *) malloc(sizeof(int) * (endPosition - initialPosition + 1));
		
		while(i < half + 1 || j  < endPosition + 1) {
	        if (i == half + 1 ) { 
	            vectorTemp[k] = vector[j];
	            j++;
	            k++;
	        } 
	        else {
	            if (j == endPosition + 1) { 
	                vectorTemp[k] = vector[i];
	                i++;
	                k++;
	            } 
	            else {
	                if (vector[i] < vector[j]) { 
	                    vectorTemp[k] = vector[i];
	                    i++;
	                    k++;
	                } 
	                else { 
	                    vectorTemp[k] = vector[j];
	                    j++;
	                    k++;
	                }
	            }
	        }
		}
		for(i = initialPosition; i <= endPosition; i++) {
        vector[i] = vectorTemp[i - initialPosition];
    	}
    	free(vectorTemp);
	}
	
	void printArray(int *ar, int tam){
		int x = 0;
		int i = 0;
		int noZeros = 0;
		int numberZeros = 0;
		
		printf("Array ordened: ");
		for(i; i<tam; i++){
			printf("%d ", ar[i]);
		}
		printf("\n");
		for(x; x<tam; x++){
			if(ar[x] != 0){
				printf("%d ", ar[x]);
				noZeros++;
			}
			else {
				numberZeros++;
			}
		}
		printf("\nAmount of the not zeros: %d", noZeros);
		printf("\nZeross number: %d", numberZeros);
	}
	
int main(void){
	
	int array[10] = {9,5,4,0,4,0,6,7,0,2};
	int *ptr;
	
	ptr = &array;
	mergeSort(ptr, 0, 10-1);
	printArray(ptr, 10);
	
	return 0;
}
