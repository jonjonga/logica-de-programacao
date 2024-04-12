#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

#define TAM 5

int main() {
	setlocale(LC_ALL, "");
	int idade[TAM];
	char nome[TAM] [200];
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Digite o %iº nome: ", i + 1);
		scanf("%s", &nome[i]);
			
		printf("Digite a %iª idade: ", i + 1);
		scanf("%i", &idade[i]);
	}
	for(i = 0; i < TAM; i++){
		printf("Nome: %s \n",nome[i]);
		printf("Idade: %i \n",idade[i]);		
	}
	return 0;
	}

