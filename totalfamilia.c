#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <limits.h>
int main() {
	setlocale(LC_ALL, "");
	
	float salario, maiorSalario = INT_MIN, menorSalario = INT_MAX, mediaSalario = 0;
	float mediaFilho, numeroDeFilhos;
	int totalFamilia;
	int i;
	
	do{
		printf("== Código| \t Descrição ==\n");
		printf("==      1| \t Adicionar família ==\n");
		printf("==      2| \t Sair e exibir resultados ==\n");
		scanf("%d", &totalFamilia);
		
		switch(totalFamilia){
			
			case 1:
				
				printf("Digite o valor do salário: ");
				scanf("%f", &salario);
				
				printf("Digite a quantidade de filhos: ");
				scanf("%f", &numeroDeFilhos);
				
				i++;
				
				mediaSalario += salario;
				
				
				
				if(salario > maiorSalario){
					maiorSalario = salario;
				}
				if(salario < menorSalario){
					menorSalario = salario;
				}
				break;
				
				case 2:
					printf("Número de famílias que responderam a pesquisa: %i \n", i);
					printf("Média do salário da população: %.2f \n", mediaSalario / totalFamilia);
					printf("Média do número de filhos: %f \n", mediaFilho / totalFamilia);
					printf("Maior salário: %.2f \n", maiorSalario);
					printf("Menor salário: %.2f \n", menorSalario);
					
					exit(0);
		}
	}while(1);
	
	
}
