#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <stdlib.h>
#define TAM 10


int main() {
	setlocale(LC_ALL, "");
	
	float numerosReais[TAM];
	int quantidadeDeNumerosNegativos;
	int somaNumeroPositivos = 0;
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Digite o numero: ");
		scanf("%f", &numerosReais[i]);
		
		if(numerosReais[i] < 0){
			quantidadeDeNumerosNegativos++;
		}else if(numerosReais[i] > 0){
			somaNumeroPositivos += numerosReais[i];
		}else{
		printf("Dados inv�lidos:");
		}
	}
		
		for(i = 0; i < TAM; i++){
		printf("n�mero %d: %.2f \n", i + 1, numerosReais[i]);
	}
		printf("\nQuantidade de n�meros negativos: %d \n", quantidadeDeNumerosNegativos);
		printf("Soma de n�meros reais: %d \n", somaNumeroPositivos);
	


}
	
