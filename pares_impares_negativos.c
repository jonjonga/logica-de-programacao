#include <stdio.h>
#include <locale.h>

#define TAM 5

int main() {
	setlocale(LC_ALL, "");
	
	int numeros[TAM];
	int i;
	int numerosPares = 0, numerosImpares = 0, numerosPositivos, numerosNegativos;
	
	printf("=== Solicitando dados do usuário === \n");
	for (i = 0; i < TAM; i++){
			printf("Digite o %iº número: ", i + 1);
			scanf("%i", &numeros[i]);
	
	if(numeros[i] % 2 == 0){
		numerosPares++;
	}else{
		numerosImpares++;
	}
	if(numeros[i] > 0){
		numerosPositivos++;
	}else{
		numerosNegativos++;
	}
}
	printf("=== Exibindo resultados ===\n");
	printf("Quantidade de números inseridos: %d\n", i);
	printf("Números pares: %d\n", numerosPares);
	printf("Números impares: %d\n", numerosImpares);
	printf("Números positivos: %d\n", numerosPositivos);
	printf("Números negativos: %d\n", numerosNegativos);	
	}
