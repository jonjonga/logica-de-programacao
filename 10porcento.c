#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int valor, desconto, valorFinal;
	
	printf("Digite o valor do produto: ");
	scanf("%i", &valor);
	
	desconto = valor * 0.10;
	valorFinal = valor - desconto;
	printf("Valor do desconto:%i\n", desconto);
	printf("Valor final do produto:%i\n", valorFinal);
	return 0;
	
}
