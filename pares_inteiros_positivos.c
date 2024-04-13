#include <stdio.h>
#include <locale.h>

#define TAM 5

int main() {
	setlocale(LC_ALL, "");
	
	int numeros[TAM]; 
	int i;
	
	printf("=== Solicitando dados do usuário === \n");
	for (i = 0; i < TAM; i++) {
		do{
			printf("Digite o %iº número: ", i+1);
			scanf("%i", &numeros[i]);
		}while (numeros[i] < 0 || numeros[i] % 2 == 1);
	}
	
	printf("\n=== Exibindo dados para o usuário na ordem inversa ===\n");
	for (i = TAM - 1; i >= 0; i--){
		printf("%iº número: %i \n", i+1, numeros[i]);
	}
	return 0;
}
