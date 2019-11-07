#include <stdio.h>
#include <stdlib.h>
void enlistar ();
int main (void){
	enlistar();
	return 0;

}
void enlistar(Nodo * numero){
	Nodo *aux = numero;
	while (aux -> sig != NULL){
		printf("%s\n",aux -> nombre);
		aux = *aux-> sig;
	}
printf("%s\n",aux -> nombre);

}
