#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	
	char nome;
	float primeiraNota, segundaNota, media;
	
	
	printf("Digite o nome do aluno: ");
	scanf("%s", &nome);
	
	printf("Digite a primeira nota: ");
	scanf("%f", &primeiraNota);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &segundaNota);
	
	media = (primeiraNota + segundaNota) / 2;
	
	if (media >= 9) 
	{
		printf("=== Nota = *A*\n APROVADO ===");
	}else if (media >= 7.5 && media <= 9)
	{
		printf("=== Nota = *B*\n APROVADO ===");
		
	}else if (media >= 6 && media <= 7.5)
	{
		printf("=== Nota = *C*\n APROVADO ===");
	}else if (media >= 4 && media <= 6 )
	{
		printf("=== Nota = *D*\n REPROVADO ===");
	}else if (media <= 4)
	{
		printf("=== Nota = *E*\n REPROVADO ===");
	}
	
	return 0;
	
}
