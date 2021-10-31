#include <stdio.h>
#include <stdlib.h>

typedef struct Inteiro {
	int valor;
	struct inteiro * prox;
} Inteiro;

void imprime (Inteiro * i) {
	while (i != NULL) {
		printf("%d ", i->valor);
		i = i->prox;
	}
}

int main () {
	Inteiro* n1 = malloc(sizeof(Inteiro));
	Inteiro* n2 = malloc(sizeof(Inteiro));
	Inteiro* n3 = malloc(sizeof(Inteiro));
	Inteiro* n4 = malloc(sizeof(Inteiro));
	
	n4->prox = NULL; // campo próx do último elemento apoontando para Nulo
	n4->valor = 4; // campo valor 
	n3->prox = n4; // campo prox
	n3->valor = 3; // campo valor 
	n2->prox = n3; // campo prox
	n2->valor = 2; // campo valor
	n1->prox = n2; // campo prox
	n1->valor = 1; // campo valor
	
	Inteiro* lista = malloc(sizeof(Inteiro));

	lista->prox = n1; // L ->  1° elemento
	
	imprime(lista->prox);

	return 0;
}
