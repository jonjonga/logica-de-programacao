#include <stdio.h>
#include <locale.h>
int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int primeiroNumero, segundoNumero;
	int soma, subtracao, multiplicacao, divisao;
	
	printf("Digite o primeiro n�mero:\n ");
	scanf("%i",&primeiroNumero);
	
	printf("Digite o segundo n�mero:\n ");
	scanf("%i",&segundoNumero);
	
	soma = primeiroNumero + segundoNumero;
	subtracao = primeiroNumero - segundoNumero;
	multiplicacao = primeiroNumero * segundoNumero;
	divisao = primeiroNumero / segundoNumero;
	
	printf("soma:%i\n", soma);
	printf("subtra��o:%i\n", subtracao);
	printf("multiplica��o:%i\n", multiplicacao);
	printf("divis�o:%i\n", divisao);
	
	
	
}
