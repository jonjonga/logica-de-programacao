#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

int main() {
	setlocale(LC_ALL, "");
	
	int numeros[TAM];
	int i;
	
	printf("Digite os notas\n");
	for (i = 0; i < TAM; i++){
		printf("nota %d: \n", i + 1);
		scanf("%d",&numeros[i]);
		
	}
	for (i = 0; i < TAM; i++){
		printf("nota %d: %d\n", i + 1, numeros[i]);
}
 	
	

}
