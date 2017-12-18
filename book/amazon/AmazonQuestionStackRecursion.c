/*
[Amazon]: Reverse a stack without using an 
additional stack, i.e., doing in place reversal 
(hint: use double recursion).
*/

#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

void reverseStack(tStack *stack, tNode *node, int size){
	int x = size;
	
	if(size == 1){
		stack->top->before = node;
		return;
	}
	tNode *aux = stack->top;
	stack->top = stack->top->before;
	size--;
	
	reverseStack(stack, aux, size);
	aux->before = node;
}

int main(void){

	int i, x;
	int array[] = {'T','H','I','A','G','O'};
	tStack stack;

	creatStack(&stack);

	for(i=0; i<sizeof(array)/4; i++){
		x = pushStack(&stack, array[i]);
	}

	printf("\n");
	printf("<<<<<<Stack>>>>>>\n");
	printStack(&stack);

	reverseStack(&stack, stack.top, stack.size);
	printf("\n");
	printf("<<<<<<Reverse Stack>>>>>>\n");
	printStack(&stack);

	system("pause");
	return 0;
}
