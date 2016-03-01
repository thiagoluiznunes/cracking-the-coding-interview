/*
Ex2 [Amazon]: Given a singly link list and a number K; swap the Kth node from the start with the Kth node from the last. Check all the edge cases.
Sample Input: 1->;2->;3->;4->;5->;6->;7->;8 and K = 3
Sample Output : 1->;2->;6->;4->;5->;3->;7->;8
Sample Input: 1->;2->;3->;4->;5->;6->;7->;8 and K = 10
Sample Output: print error "LIST IS OF LESSER SIZE";

*/

#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"



int main(void){
	
	tLista lista;

	createList(&lista);

	int array[] = {1,2,3,4,5,6,7,8};

	for(i=0; i<sizeof(array)/4; i++){
		int x = insertElement(lista, i, array[i]);
	}

	return 0;
}
