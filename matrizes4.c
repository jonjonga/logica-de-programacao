#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	char materia [3][200];
	float notas[3][2];
	float media[4], soma = 0;
	int i, j;
	
		printf("=== Solicitando dados do us�rio === \n");
		for(i = 0; i < 3; i++){
		printf("Digite o nome da %i� mat�ria : ", i + 1);
		scanf("%s", &materia[i]);
	
		for (j = 0; j < 2; j++) {
		printf("Digite a %i� nota: ", j + 1);
		scanf("%f", &notas[i][j]);
		
			soma += notas[i][j];		
		}
		media[i] = soma / 2;
		soma = 0;
	
		
		printf("\n");
		
	}
	
	printf("\n\n Exibindo resultados \n\n");
	for(i = 0; i < 3; i++){
		printf("%d� mat�ria: %s\n", i+1, materia[i]);
		
		for(j = 0; j < 2; j++){
			printf("%d� nota %.1f \n", j+i, notas [i][j]);
		}
		printf("M�dia: %.1f \n", media[i]);
		printf("\n");
	}
	

}
