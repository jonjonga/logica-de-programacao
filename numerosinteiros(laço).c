#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "");
	
	float media, mediaPar;
	int numero, numPar = 0, numImpar = 0, soma = 0;
	int i; 
	
	while(1){
		
		printf("Digite um n�mero: ");
		scanf("%d", &numero);
		
		
		if(numero <= 0){
			break;
	
		}
		
		soma += numero;
		i++;
		
		if(numero % 2 == 0){
			numPar++;
		}
		else{
			numImpar++;
		}
	}
	
	mediaPar = soma / numPar;
	
	media = soma / i;
	
	printf("Resultado:\n");
	printf("Quantidade de numeros pares: %d\n", numPar);
	printf("Quantidade de numeros impares: %d\n", numImpar);
	printf("M�dia dos valores pares: %.1f\n", mediaPar);
	printf("M�dia dos n�meros: %.1f\n", media);
	
	
}
