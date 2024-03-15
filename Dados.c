#include <stdio.h>

int main() {
	// Declarando variáveis.
	char nome[200] = "Marta"; // Cadeia
	int idade = 20; //Caracter
	char sexo = 'F'; // Inteiro
	float peso = 58.400; // Real
 	
	// Exibindo resultados.
	printf("\n=== Exibindo resultados ===\n");
	printf("Nome: %s \n", nome); // %s -> cadeia -> string
	printf("Sexo: %c \n", sexo); // %c -> char -> caracter
	printf("Idade: %i \n", idade); // %i -> int -> inteiro
	printf("Peso: %f \n", peso); // %f -> float -> real
	
	return 0;
}
