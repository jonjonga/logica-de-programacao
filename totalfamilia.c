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
		printf("== C�digo| \t Descri��o ==\n");
		printf("==      1| \t Adicionar fam�lia ==\n");
		printf("==      2| \t Sair e exibir resultados ==\n");
		scanf("%d", &totalFamilia);
		
		switch(totalFamilia){
			
			case 1:
				
				printf("Digite o valor do sal�rio: ");
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
					printf("N�mero de fam�lias que responderam a pesquisa: %i \n", i);
					printf("M�dia do sal�rio da popula��o: %.2f \n", mediaSalario / totalFamilia);
					printf("M�dia do n�mero de filhos: %f \n", mediaFilho / totalFamilia);
					printf("Maior sal�rio: %.2f \n", maiorSalario);
					printf("Menor sal�rio: %.2f \n", menorSalario);
					
					exit(0);
		}
	}while(1);
	
	
}
