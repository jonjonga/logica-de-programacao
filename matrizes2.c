#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	char alunos [2][200];
	float notas[2][3];
	int i, j;
	
		printf("=== Solicitando dados do us�rio === \n");
		for(i = 0; i < 2; i++){
		printf("Digite o nome do %i� aluno: ", i + 1);
		scanf("%s", &alunos[i]);
	
		for (j = 0; j < 3; j++) {
		printf("Digite a %i� nota: ", j + 1);
		scanf("%f", &notas[i][j]);		
		}
		printf("\n");
	}
	
	printf("\n\n Exibindo resultados \n\n");
	for(i = 0; i < 2; i++){
		printf("%d� aluno: %s\n", i+1, alunos[i]);
		
		for(j = 0; j < 3; j++){
			printf("%d� nota %.1f \n", j+i, notas [i][j]);
		}
		printf("\n");
	}
	

}
