#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

#define TAM 5
int main() {
	setlocale(LC_ALL, "");
	
	int numero[TAM];
	int numeroMaior = INT_MIN, numeroMenor = INT_MAX;
	int i;
	
	printf("Digite os valores: \n");
	for(i = 0; i < TAM; i++){
		printf("digite numero: \n");
		scanf("%d", &numero[i]);
	}
	printf("\nExibindo as notas informadas: \n");
	for (i = 0; i < TAM; i++){
		printf("numero: %d \n",numero[i]);
			if(numero[i] > numeroMaior){
		numeroMaior = numero[i];
	}
	if(numero[i] < numeroMenor){
		numeroMenor = numero[i];
	}
	}
	printf("Menor valor: %d\n", numeroMenor);
	printf("Maior valor: %d\n", numeroMaior);
	

	
}

