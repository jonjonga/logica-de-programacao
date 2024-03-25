#include <stdio.h>
#include <locale.h>
int main() {
	 
	 setlocale(LC_ALL, "");
	int numero;
	int i = 0;
	
	printf("Digite o número desejado: ");
	scanf("%d", &numero);
	
	for (i = 0; i <= 10; i++){
		printf("%d x %d = %d \n", numero, i, i*numero);
	}
	return 0;

	}
	
	
	

