#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <limits.h>
int main() {
	setlocale(LC_ALL, "");

	float salario, maiorSalario = INT_MIN, menorSalario = INT_MAX, mediaSalario = 0;
	float mediaFilho, numeroDeFilhos, somaSalario, somaFilho; 
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

				somaSalario += salario;
				somaFilho += numeroDeFilhos;



				if(salario > maiorSalario){
					maiorSalario = salario;
				}
				if(salario < menorSalario){
					menorSalario = salario;
				}
				break;

				case 2:
				break;

					
					
					
		}
	}while(totalFamilia != 2);
				
				mediaSalario = somaSalario / i;
				mediaFilho = somaFilho / i;
				
				printf("Número de famílias que responderam a pesquisa: %i \n", i);
					printf("Média do salário da população: %.2f \n", mediaSalario );
					printf("Média do número de filhos: %.1f \n", mediaFilho );
					printf("Maior salário: %.2f \n", maiorSalario);
					printf("Menor salário: %.2f \n", menorSalario);
				 

return 0;

}
