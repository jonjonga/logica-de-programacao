#include <stdio.h>
#include <locale.h>
int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int primeiroNumero, segundoNumero;
	int soma, subtracao, multiplicacao, divisao;
	
	printf("Digite o primeiro número:\n ");
	scanf("%i",&primeiroNumero);
	
	printf("Digite o segundo número:\n ");
	scanf("%i",&segundoNumero);
	
	soma = primeiroNumero + segundoNumero;
	subtracao = primeiroNumero - segundoNumero;
	multiplicacao = primeiroNumero * segundoNumero;
	divisao = primeiroNumero / segundoNumero;
	
	printf("soma:%i\n", soma);
	printf("subtração:%i\n", subtracao);
	printf("multiplicação:%i\n", multiplicacao);
	printf("divisão:%i\n", divisao);
	
	
	
}
