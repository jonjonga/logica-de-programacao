#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int maca;
	float custoMaca, valorTotal;
	
	
	
	printf("Digite o n�mero de ma��s: ");
	scanf("%i", &maca);
	
	system("cls||clear");
	
	if(maca >= 12){
		custoMaca = 1;
	}
	else
	{
		custoMaca = 1.3;
	}
	
	valorTotal = custoMaca * maca;
	
	printf("Valor � pagar:%.2f\n", valorTotal);
}
