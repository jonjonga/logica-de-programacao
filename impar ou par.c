#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	int numero;
	
	printf("Digite um n�mero: ");
	scanf("%i", &numero);
	
	switch(numero % 2){
		
		case 0:
			printf("Numero par\n");
			break;
			
			case 1:
				printf("N�mero impar\n");
				break;
				
				default:
					printf("Dados inv�lidos\n");
	}
	
	
}
