#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int valor, desconto;
	
	printf("Digite o valor do produto: ");
	scanf("%i", &valor);
	
	desconto = valor * 0.10;
	
	printf("Valor do desconto:%i\n", desconto);
	
	return 0;
	
}
