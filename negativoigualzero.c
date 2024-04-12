#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <stdlib.h>
#define TAM 5


int main() {
	setlocale(LC_ALL, "");
	
	float numeros[TAM];
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Digite o numero: ");
		scanf("%f", &numeros[i]);
		
		if(numeros[i] < 0){
			numeros[i] = 0;
		}
	}
		
		for(i = 0; i < TAM; i++){
		printf("número %d: %.2f \n", i + 1, numeros[i]);
	}
		
	


}
