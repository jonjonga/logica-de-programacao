#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "");
	
	float nota, soma = 0, media;
	int contador = 0;
	char resposta;
		
	do {
		printf("Digite uma nota: ");
		scanf("%f", &nota);
		
		fflush(stdin);
		
		system("cls || clear");
		printf("Escolha uma das opções abaixo: \n");
		printf("S - Inserir mais uma nota: \n");
		printf("P - Ver quantidade de notas inseridas: \n");
		printf("N - Calcular a média aritmética: \n");
		printf("Resposta: ");
		scanf("%c", &resposta);
		resposta = toupper(resposta);
		
		soma += nota;
		contador++;
		switch(resposta) {
			case 'S':
				system("cls || clear");
				break;
			case 'P':
				printf("Quantidade de notas inseridas: %i \n", contador);
				sleep(5);
				break;
			case 'N':
				system("cls || clear");
				break;
			default:
				printf("Opção inválida! \n");
				sleep(5);
		}
	}while(resposta != 'N');
	
	media = soma / contador;
	
	printf("\n=== Exibindo resultados ===\n");
	printf("Média: %.1f \n", media);
	
	return 0;
	
}
