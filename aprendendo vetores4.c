#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 4

int main() {
	setlocale(LC_ALL, "");
	
	float notas[TAM];
	float media, soma = 0;
	int i;
	
	printf("Digite as notas: \n");
	for (i = 0; i < TAM; i++){
		printf("nota %d: \n", i + 1);
		scanf("%f",&notas[i]);
		
		soma += notas[i];
		
	}	
	media = soma / (float) TAM;
	
	printf("\nExibindo as notas informadas: \n");
	for (i = 0; i < TAM; i++){
		printf("%d� nota: %.1f \n", i+1, notas[i]);
	}
	printf("\nM�dia: %.1f \n", media);
	
	return 0;
}
