#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	char alunos [4][200];
	float notas[4][3];
	float media[4], soma = 0;
	int i, j;
	
		printf("=== Solicitando dados do us�rio === \n");
		for(i = 0; i < 4; i++){
		printf("Digite o nome do %i� aluno: ", i + 1);
		scanf("%s", &alunos[i]);
	
		for (j = 0; j < 3; j++) {
		printf("Digite a %i� nota: ", j + 1);
		scanf("%f", &notas[i][j]);
		
		soma += notas[i][j];		
		}
		media[i] = soma / 3;
		soma = 0;
		
		printf("\n");
	}
	
	printf("\n\n Exibindo resultados \n\n");
	for(i = 0; i < 4; i++){
		printf("%i� aluno: %s\n", i+1, alunos[i]);
		
		for(j = 0; j < 3; j++){
			printf("%i� nota %.1f \n", j+i, notas [i][j]);
		}
		printf("\nM�dia: %.1f", media[i]);
		printf("\n");
	}
	

}
