#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	float salarioUsuario, numeroSalarios;
	
	printf("Digite o valor do seu sal�rio: ");
	scanf("%f", &salarioUsuario);
	
	numeroSalarios = salarioUsuario / 1412;
	
	printf("Sal�rio do usu�rio:%f\n", salarioUsuario);
	printf("\nQuantidade de sal�rios do usu�rio:%1.f\n", numeroSalarios);
	
	return 0
	
}
	
	
	
