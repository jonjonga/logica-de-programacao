#include <stdio.h>

int main() {

char nome[200];
char sexo;
int idade;
float peso;

printf("Digite seu nome: ");
scanf("%s",&nome);

fflush(stdin);

printf("Digite seu sexo - M ou F: ");
scanf("%c",&sexo);

printf("Digite sua idade: ");
scanf("%i",&idade);

printf("Digite seu peso: ");
scanf("%f",&peso);

printf("\n=== Exibindo resultados ===\n");
printf("Nome: %s \n", nome);
printf("Sexo: %c \n", sexo);
printf("Idade: %i \n", idade);
printf("Peso: %f \n", peso);

}
