#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int *arrayPOS;
	int *arrayNEG;
	int numbPOS;
	int numbNEG;
}tLista;


void ordenaLista(tLista list){
	int i, x;
	
	printf("\n");
	
	for(i=0; i<list.numbNEG; i++){
		printf("%d ", list.arrayNEG[i]);
	}
	for(x=0; x<list.numbPOS; x++){
		printf("%d ", list.arrayPOS[x]);
	}
	
	printf("\n");
}

int main(void){
	
	int array[] = {1,5,0,-1,-2,-3,0,-1,7,-2};
	int i, z=0, w=0;
	
	tLista lista;
	lista.arrayNEG = malloc(10 * sizeof *lista.arrayNEG);
	lista.arrayPOS = malloc(10 * sizeof *lista.arrayPOS);
	
	for(i=0; i<sizeof(array)/4; i++){
		if(array[i] < 0){
			lista.arrayNEG[z] = array[i];
			z++;
			lista.numbNEG = z;
		}
		
		else{
			lista.arrayPOS[w] = array[i];
			w++;
			lista.numbPOS = w;
		}
	}
	
	ordenaLista(lista);
	
	free(lista.arrayNEG);
	free(lista.arrayPOS);
	
	return 0;
}
