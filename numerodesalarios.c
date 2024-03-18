#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	float salarioUsuario, numeroSalarios;
	
	printf("Digite o valor do seu salário: ");
	scanf("%f", &salarioUsuario);
	
	numeroSalarios = salarioUsuario / 1412;
	
	printf("Salário do usuário:%f\n", salarioUsuario);
	printf("\nQuantidade de salários do usuário:%1.f\n", numeroSalarios);
	
	return 0
	
}
	
	
	
