#include <stdio.h>
#include <stdlib.h>


/*
Ex. 3:
Given a string, for example, "a?bc?def?g" write a program to generate all the possible strings by replacing ? with 0 and 1.
*/

void generatePossible(char array[]){
	int i,x;
	char arrayAux[sizeof(array)];
	
	srand( (unsigned)time(NULL) );
	
	while(x != 7){
		for(i=0; i<sizeof(array); i++){
			if(array[i] != '?'){
				arrayAux[i] = array[i];
			}
			if(array[i] == '?'){
				arrayAux[i] = rand()%2;
			}
		}
		if()
	}
	
}


int main(void){
	
	
	char array[] = {'a','?','b','c','?','d','e','f','?','g'};
    int i;
    /*printf("intervalo da rand: [0,%d]\n", 1);
 	srand( (unsigned)time(NULL) );
 	
    for(i=1 ; i <= 10 ; i++){
        printf("Numero %d: %d\n",i, rand()%2);
	} 
 	*/
 	
	
	system("pause");
	
	return 0;
}
