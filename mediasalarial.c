#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
	
	setlocale(LC_ALL, "");
	
	char sexo;
	int idade, maiorIdade = -100, menorIdade = 100;
	float salario, mediaSalarial = 0;
	int i;
	int quantidadeDeMulheres;
	
	do{
		
		int quantidadeDePessoas;
		
		
		printf("Código| \t Descrição \n");
		printf("     1| \t *Adicionar pessoa* \n");
		printf("     2| \t *Exibir resultados e sair* \n");
		scanf("%d", &quantidadeDePessoas);
		
		switch(quantidadeDePessoas){
			case 1:
				
				printf("Digite sua idade: ");
				scanf("%i", &idade);
				
				printf("Digite o seu sexo: ");
				scanf("%s", &sexo);
				
				printf("Digite o valor do seu salário: ");
				scanf("%f", &salario);
				
				mediaSalarial += salario;
				
				if(idade > maiorIdade){
					maiorIdade = idade;
				}
				
				if(idade < menorIdade){
					menorIdade = idade;
				}
				
				if(sexo == 'F' && salario >= 5000){
					quantidadeDeMulheres = quantidadeDeMulheres + 1;
				}
				
				break;
				
				case 2:
					printf("Média salarial do grupo: %.2f \n", mediaSalarial / quantidadeDePessoas);
					printf("Maior idade do grupo: %i \n", maiorIdade);
					printf("Menor idade do grupo: %i \n", menorIdade);
					printf("Quantidade de mulheres com salário a partir de R$5000,00: %i\n", quantidadeDeMulheres);
					
					exit(0);
		}
	}while(1);
	
}
