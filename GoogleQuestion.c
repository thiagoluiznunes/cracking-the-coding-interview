/*
[Google] Give you an array which has n integers,it 
has both positive and negative integers. Now you 
need sort this array in a special way.After that,
the negative integers should in the front,and the
 positive integers should in the back.
Also the relative position should not be changed.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 1001;

typedef struct {
	int TAM;
	int arrayPOS[10];
	int arrayNEG[10];
	int numbPOS;
	int numbNEG;
}tLista;

void ordenaLista(tLista lista){
	int i, x;
	
	printf("\n");
	
	for(i=0; i<=lista.numbPOS; i++){
		printf("%d ", lista.arrayPOS[i]);
	}
	for(x=0; i<=lista.numbNEG; i++){
		printf("%d ", lista.arrayNEG[i]);
	}
	
	printf("\n");
}

int main(void) {
	
	int array[] = {0,1,2,-2,6,2,-2,3,0,-1};
	int i;
	
	tLista *lista = malloc(sizeof(tLista));
	lista->TAM = sizeof(array)/4;
	printf("%d\n", lista->TAM);
	
	/*
	for(i=0; i<=sizeof(array); i++){
		if(array[i] < 0){
			lista->arrayNEG[i] = array[i];
			lista->numbNEG++;
		}
		else{
			lista->arrayPOS[i] = array[i];
			lista->numbPOS++;
		}
	}*/
	printf("Aqui estou\n");
	//ordenaLista(lista);
	
	system("pause");
	
	return 0;
}
