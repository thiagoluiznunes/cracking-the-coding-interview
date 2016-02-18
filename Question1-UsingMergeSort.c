#include <stdio.h>
#include <stdlib.h>

/*
Ex. 1: Write an algorithm that brings all nonzero elements to the left of the array and returns the number of nonzero elements:
Example input: [ 1, 0, 2, 0, 0, 3, 4]
Ouput: 4
[ 1, 4, 2, 3, 0, 0, 0 ]
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
	        if (i == metadeTam + 1 ) { // i passou do final da primeira metade, pegar v[j]
	            vetorTemp[k] = vetor[j];
	            j++;
	            k++;
	        } 
	        else {
	            if (j == posicaoFim + 1) { // j passou do final da segunda metade, pegar v[i]
	                vetorTemp[k] = vetor[i];
	                i++;
	                k++;
	            } 
	            else {
	                if (vetor[i] < vetor[j]) { 
	                    vetorTemp[k] = vetor[j];
	                    j++;
	                    k++;
	                }
	                else { 
	                    vetorTemp[k] = vetor[i];
	                    i++;
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
	
	void print(int* ar, int tam){
		int i = 0;
		
		printf("\n");
		
		for(i = 0; i < tam; ++i){
			printf("%d%s", ar[i], (tam != i ? " " : ""));
		}
	}
	
	void printNoZero(int* ar, int tam){
		int i = 0;
		int number = 0;
		for(i; i<tam; i++){
			if(ar[i] != 0){
				number++;
			}
		}
		printf("\nNumber of NonZero: %d", number);
	}
int main(void){
	
	int array[10] = {9,5,4,0,4,0,6,7,0,2};
	int *ptr;
	
	ptr = array;
	print(ptr, 10);
	mergeSort(ptr, 0, 10-1);
	print(ptr, 10);
	printNoZero(ptr, 10);
	
	return 0;
}






