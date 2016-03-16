/*Ex1: [Amazon] Give an algorithm that finds 
duplicated parenthesis in an expression:
((a + b) + ((c + d)))*/
#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"


int main(void){

	int i, x;
	char array[] = {'(','(','a','+','b',')','+','(','(',
					'c','+','d',')',')',')'};

	size_t tam = sizeof(array) / sizeof(array[0]);

	tStack stack;

	creatStack(&stack);

	for(i=0; i<tam; i++){
		if(array[i] == '('){
			x = pushStack(&stack, array[i]);
		}
		if((array[i] == ')') && (i>0)){
			x = popStack(&stack);
		}
	}

	if(stack.size == 0){
		printf("\nAccepted\n");
	}
	else{
		printf("\nRejected\n");
	}

	printStack(&stack);


	system("pause");

	return 0;
}