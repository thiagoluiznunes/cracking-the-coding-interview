
typedef struct {
	int valor;
	tNo *prox;
}tNo;

typedef struct {
	tNo *cabeca;
	int tamanho; 
}tLista;

void createList(tLista *lista){
	lista->cabeca = NULL;
	lista->tamanho = 0;
}

int voidList(tLista lista){
	if(lista.tamanho == 0){
		return 1;
	}
	else {
		return 0;
	}
}

int getElement(tLista lista, int positon, int *valor){
	
	tNo *node = lista.cabeca;
	int n = 1;
	
	if(lista.cabeca == NULL){return 0;}
	
	while((node != NULL) && (n < position)){
		node = node->prox;
		n++;
	}
	if(node == NULL){return 0;}
	
	*valor = node->valor;
	return 1;
}

int insertVoidList(tLista *lista, int valor){
	tNo *newNode;
	newNode = malloc(sizeof(tNo));
	
	if(node == NULL){return 0;}
	
	newNode->valor = valor;
	newNode->prox = NULL;
	
	lista->cabeca = newNode;
	lista->tamanho++;
	
	return 1;
}

int insertBeginList(tLista *lista, int valor){
	tNo *newNode;
	newNode = malloc(sizeof(tNo));
	
	if(newNode == NULL){return 0;}
	
	newNode-valor = valor;
	newNode->prox = lista->cabeca;
	
	lista->cabeca = newNode;
	lista->tamanho++;
	
	return 1;
}

int insertEndList(tLista *lista, int valor){
	tNo *newNode;
	newNode = malloc(sizeof(tNo));
	
	if(newNode == NULL){return 0;}
	
	newNode->valor = valor;
	
	tNo *aux = lista->cabeca;
	while(aux->prox != NULL){
		aux = aux->prox;
	}
	aux->prox = newNode;
	newNode->prox = NULL;
	lista->tamanho++;
	
	return 1;
}

int insertMidList(tLista *lista, int position, int valor){
	tNo *newNode; 
	tNo *aux = lista->cabeca;
	int n = 1;
	
	while((position < n - 1) && (aux != NULL)){
		aux = aux->prox;
		n++;
	}
	
	if(aux == NULL){return 0;}
	
	newNode = malloc(sizeof(tNo));
	if(newNode == NULL){return 0;}
	
	newNode->valor = valor;
	newNode->prox = aux->prox;
	aux->prox = newNode;
	lista->tamanho++;
	
	return 1;
}

void insertElement(tLista *lista, int position, int valor){
	
	tNo *newNode;
	int aux, tam = lista->tamanho;
	
	if(voidList(lista)){
		
		if(position != 1){return 0;}
		aux = insertVoidList(lista, valor);
		return aux;
	}
	else if (position == 1){
		aux = insertBeginList(lista, valor);
		return aux;
	}
	else if (position == tam +1){
		aux = insertEndList(lista, valor);
		return aux;
	}
	else{
		aux = insertMidList(lista, position, valor);
		return aux;
	}
}

void changePosition(tLista *lista, int position){
	tNo *aux1 = lista->cabeca;
	tNo *aux2;
	
	while()
}










