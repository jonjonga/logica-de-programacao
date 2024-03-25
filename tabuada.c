#include <stdio.h>

int main() {
	//declarando variaveis
	int i;

//calculando resultados
printf("\nTabuada de 2");
	for(i = 1; i <= 10; i++) {
		printf("\n%d x %d = %d \n", 2, i, i*2);
	}
	
	printf("\nTabuada de 3");
		for(i = 1; i <= 10; i++) {
		printf("\n%d x %d = %d \n", 3, i, i*3);
	}
	printf("\nTabuada de 5");
			for(i = 1; i <= 10; i++) {
		printf("\n%d x %d = %d \n", 5, i, i*5);
	}
	return 0;
	
	
}
