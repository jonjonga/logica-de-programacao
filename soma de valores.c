#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "");
	
	int numero[5], soma = 0;
	int i;
	
	for(i = 0; i <5; i++){
		printf("Numero: %dº\n", i + 1);
		scanf("%d", &numero[i]);
	}
	
	for(i = 0; i < 5; i++){
		soma += numero[i];
	}
	
	printf("A soma dos numeros é de: %d\n", soma);
	
	return 0;
}
