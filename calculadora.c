#include <stdio.h>

int main() {
	
	int primeiroNumero, segundoNumero;
	int soma, subtracao, multiplicacao, divisao;
	
	printf("Digite o primeiro numero:\n ");
	scanf("%i",&primeiroNumero);
	
	printf("Digite o segundo numero:\n ");
	scanf("%i",&segundoNumero);
	
	soma = primeiroNumero + segundoNumero;
	subtracao = primeiroNumero - segundoNumero;
	multiplicacao = primeiroNumero * segundoNumero;
	divisao = primeiroNumero / segundoNumero;
	
	printf("soma:%i\n", soma);
	printf("subtracao:%i\n", subtracao);
	printf("multiplicacao:%i\n", multiplicacao);
	printf("divisao:%i\n", divisao);
	
	
	
}
