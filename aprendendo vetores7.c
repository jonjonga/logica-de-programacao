#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

#define TAM 6
int main() {
	setlocale(LC_ALL, "");
	
	int numero[TAM];
	int numeroPar = 0, numeroImpar = 0;
	int i;
	
	printf("Digite os valores: \n");
	for(i = 0; i < TAM; i++){
		printf("digite numero: \n");
		scanf("%d", &numero[i]);
	}
	printf("\nExibindo as notas informadas: \n");
	for (i = 0; i < TAM; i++){
		printf("numero: %d \n",numero[i]);
		
		
		if (numero[i] % 2 == 0) {
		 	numeroPar ++;
			
		} else {
			numeroImpar++;
		}

	}
	printf("\n=== Exibindo resultados ===\n");
	printf("Pares: %i \n", numeroPar);
	printf("Impares: %i \n", numeroImpar);
	return 0;
}
	

	


