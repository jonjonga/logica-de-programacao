#include <stdio.h>
#include <locale.h>
int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	char nome[200];
	int idade;
	float primeiraNota, segundaNota, terceiraNota, quartaNota;
	float media;
	
	printf("Digite o nome do aluno: ");
	scanf("%s",&nome);
	
	printf("Digite a idade do aluno: ");
	scanf("%i",&idade);
	
	printf("Digite a primeira nota: ");
	scanf("%f",&primeiraNota);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&segundaNota);
	
	printf("Digite a terceira nota: ");
	scanf("%f",&terceiraNota);
	
	printf("Digite a quarta nota: ");
	scanf("%f",&quartaNota);
	
	media = (primeiraNota + segundaNota + terceiraNota + quartaNota) / 4;
	system("cls || clear");
	printf("Nome do aluno:%s\n",nome);
	printf("\nIdade do aluno:%i\n",idade);
	printf("\nNota da primeira unidade:%f\n",primeiraNota);
	printf("\nNota da segunda unidade:%f\n",segundaNota);
	printf("\nNota da terceira unidade:%f\n",terceiraNota);
	printf("\nNota da quarta unidade:%f\n",quartaNota);
	printf("\nMédia:%f\n",media);
}
