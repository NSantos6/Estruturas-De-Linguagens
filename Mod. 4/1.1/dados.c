#include <stdio.h>
#include <stdlib.h>


typedef struct carac_comuns {
	float altura;
	int idade;
}carac_comuns;   // Os personagens têm em comum Altura e Idade


enum CLASSE {Guerreiro, Mago, Sacerdote};

typedef struct Personagem {
	enum CLASSE sub;
	carac_comuns stats;
	union {
		struct { int forca; }; // Característica exclusiva do Guerreiro
		struct { float magia; }; // Característica exclusiva do Mago
		struct { int reza; }; // Característica exclusiva do Sacerdote
	};
} Personagem; //Composição do personagem

int main () {
	Personagem p1 = { Guerreiro, {1.72, 26}, {p1.forca=50}};
	Personagem p2 = { Mago, {1.6, 49}, {p2.magia=65.7}};
	Personagem p3 = { Sacerdote, {1.7, 51}, {p3.reza=62}};
	
	printf("Guerreiro -> Altura: %f - Idade: %d - Forca: %d", p1.stats.altura, p1.stats.idade, p1.forca);
	printf("\n");

	printf("Mago -> Altura: %f - Idade: %d - Magia: %f", p2.stats.altura, p2.stats.idade, p2.magia);
	printf("\n");
	printf("Sacerdote -> Altura: %f - Idade: %d - Reza: %d", p3.stats.altura, p3.stats.idade, p3.reza);
	return 0;
}
