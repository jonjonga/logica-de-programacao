#include <stdio.h>
#include <locale.h>

#define TAM 5

int main() {
	setlocale(LC_ALL, "");
	
	int numeros[TAM];
	int i;
	int numerosPares = 0, numerosImpares = 0, numerosPositivos, numerosNegativos;
	
	printf("=== Solicitando dados do usu�rio === \n");
	for (i = 0; i < TAM; i++){
			printf("Digite o %i� n�mero: ", i + 1);
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
	printf("Quantidade de n�meros inseridos: %d\n", i);
	printf("N�meros pares: %d\n", numerosPares);
	printf("N�meros impares: %d\n", numerosImpares);
	printf("N�meros positivos: %d\n", numerosPositivos);
	printf("N�meros negativos: %d\n", numerosNegativos);	
	}
