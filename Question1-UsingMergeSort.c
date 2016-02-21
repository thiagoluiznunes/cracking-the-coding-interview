#include<stdio.h>
#include<stdlib.h>

/*
Ex. 1: Write an algorithm that brings all nonzero elements to the left of the array and returns the number of nonzero elements:
Example input: [ 1, 0, 2, 0, 0, 3, 4]
Ouput: 4
[ 1, 4, 2, 3, 0, 0, 0 ]

Use the Merge Sort algorithm to sort inverted Array
*/

void mergeSort(int* vetor, int posicaoInicio, int posicaoFim){
		int i, j, k, metadeTam, *vetorTemp;
		
		if(posicaoInicio == posicaoFim){
			return;
		}
		
		metadeTam = (posicaoInicio + posicaoFim)/2;
		
		mergeSort(vetor, posicaoInicio, metadeTam);
		mergeSort(vetor, metadeTam +1, posicaoFim);
		
		i = posicaoInicio;
		j = metadeTam +1;
		k = 0;
		vetorTemp = (int *) malloc(sizeof(int) * (posicaoFim - posicaoInicio + 1));
		
		
		while(i < metadeTam + 1 || j  < posicaoFim + 1) {
	        if (i == metadeTam + 1 ) { 
	            vetorTemp[k] = vetor[j];
	            j++;
	            k++;
	        } 
	        else {
	            if (j == posicaoFim + 1) { 
	                vetorTemp[k] = vetor[i];
	                i++;
	                k++;
	            } 
	            else {
	                if (vetor[i] < vetor[j]) { 
	                    vetorTemp[k] = vetor[i];
	                    i++;
	                    k++;
	                } 
	                else { 
	                    vetorTemp[k] = vetor[j];
	                    j++;
	                    k++;
	                }
	            }
	        }
		}
		for(i = posicaoInicio; i <= posicaoFim; i++) {
        vetor[i] = vetorTemp[i - posicaoInicio];
    	}
    	free(vetorTemp);
	}
	
	void printArray(int *ar, int tam){
		int x = 0;
		int i = 0;
		int noZeros = 0;
		int numberZeros = 0;
		
		printf("Array ordenado: ");
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
		printf("\nNumeros nao zeros: %d", noZeros);
		printf("\nNumeros de zeros: %d", numberZeros);
	}
	
int main(void){
	
	int array[10] = {9,5,4,0,4,0,6,7,0,2};
	int *ptr;
	
	ptr = &array;
	mergeSort(ptr, 0, 10-1);
	printArray(ptr, 10);
	
	return 0;
}
