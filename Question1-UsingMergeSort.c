#include<stdio.h>
#include<stdlib.h>

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
		mergeSorte(vetor, metadeTam +1, posicaoFim);
		
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
	
int main(){
	
	int array[10] = {9,5,4,0,4,0,6,7,0};
	int *ptr;
	
	ptr = &array;
	mergeSort(vector, int vetor[0], int vector[vector.sizeof - 1]);
	
	int i;
	int numberZeros;
	for(i=0; i<=array.sizeof; i++){
		if(array[i] == 0){
			numberZeros++;
		}
	}
	
	
	return 0;
}






