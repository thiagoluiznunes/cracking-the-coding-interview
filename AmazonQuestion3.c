/*
[Amazon]: Reverse a stack without using an 
additional stack, i.e., doing in place reversal 
(hint: use double recursion).
*/

#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

void reverseStack(tStack *stack, tNode *node){

	if(stack->top->before == NULL){return;}

	//tNode *aux = node;
	node = stack->top;
	stack->top = stack->top->before;

	reverseStack(stack, node);

	if(stack->top->before == NULL){

		stack->top->before = node;
	}
	else{
		node->before = stack->top;
		printf("Node value: %d\n", node->value);
		printf("Node before value: %d\n", node->before->value);
	}

}
void getNodeStack(tStack *stack, tNode *node){
	node = stack->top;
}
int main(void){

	int i, x;
	int array[] = {1,2,3,4,5};
	tStack stack;

	creatStack(&stack);

	for(i=0; i<sizeof(array)/4; i++){
		x = pushStack(&stack, array[i]);
	}

	printf("\n");
	printStack(&stack);

	tNode *node;

	reverseStack(&stack, node);
	printf("\n");
	printStack(&stack);

	system("pause");
	return 0;
}