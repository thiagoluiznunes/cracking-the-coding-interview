typedef struct node {
	char value;
	struct node *before;

} tNode;

typedef struct {
	struct node *top;
	int size;

} tStack;

void creatStack (tStack *stack) {
	stack->top = NULL;
	stack->size = 0;
}

int pushStack (tStack *stack, char value) {

	tNode *aux = malloc(sizeof(tNode));

	if(aux != NULL){

		if(stack->top == NULL){
			aux->value = value;
			stack->top = aux;
			stack->size++;
		}
		else{
			aux->value = value;
			aux->before = stack->top;
			stack->top = aux;
			stack->size++;
		}
		return 1;
	}
	else{
		return 0;
	}
}

int popStack (tStack *stack) {

	if(stack->size == 0){
		return 0;
	}
	else{
		tNode *aux = malloc(sizeof(tNode));

		if(aux != NULL){
			aux = stack->top;
			stack->top = stack->top->before;
			free(aux);
			stack->size--;

			return 1;
		}
		else{
			return 0;
		}
	}
}

void printStack(tStack *stack){

	tNode *aux = stack->top;
	int x = 0;

	if(aux != NULL){
		for(x; x<stack->size; x++){
			printf("%c\n", aux->value);
			aux = aux->before;
		}
	}
	else{
		return;
	}
	printf("\n");
}

