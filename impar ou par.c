#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	int numero;
	
	printf("Digite um número: ");
	scanf("%i", &numero);
	
	switch(numero % 2){
		
		case 0:
			printf("Numero par\n");
			break;
			
			case 1:
				printf("Número impar\n");
				break;
				
				default:
					printf("Dados inválidos\n");
	}
	
	
}
