#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int arrayPOS[10];
	int arrayNEG[10];
	int numbPOS;
	int numbNEG;
}tLista;

void ordenaLista(tLista *list){
	int i, x;
	
	printf("\n");
	
	for(i=0; i<list->numbNEG; i++){
		printf("%d ", list->arrayNEG[i]);
	}
	for(x=0; x<list->numbPOS; x++){
		printf("%d ", list->arrayPOS[x]);
	}
	
	printf("\n");
}

int main(void){
	
	printf("Hello word\n");
	
	int array[] = {0,1,2,-2,6,2,-2,3,0,-1};
	int i, z = 0, w = 0;
	
	tLista *lista = malloc(sizeof(tLista));
	
	for(i=0; i<10; i++){
		if(array[i] < 0){
			lista->arrayNEG[z] = array[i];
			z++;
			lista->numbNEG++;
		}
		else{
			lista->arrayPOS[w] = array[i];
			w++;
			lista->numbPOS++;
		}
	}
	
	ordenaLista(lista);
	
	return 0;
}
