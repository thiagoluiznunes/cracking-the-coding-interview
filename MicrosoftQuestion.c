/*
[Microsoft] 
Given a linked list with next and high pointers, 
populate high pointers to the next higher node, 
inplace and O(n).
*/

#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"


int main(void){

	tLista lista;

	createList(lista);

	int array[] = {3,6,4,5,10,2,0,9};
	int i, x;

	for(i=0; i<sizeof(array)/4; i++){
		x = insertList(&lista, i+1, array[i]);
	}

	system("pause");
	return 0;
}