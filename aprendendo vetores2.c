#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	int numeros[5];
	int i;
	
	printf("Digite os elemntos do vetor:\n");
	for (i = 0; i < 5; i++){
		printf("Elemento %d: ", i + 1);
		scanf("%d",&numeros[i]);
		
	}
	for (i = 0; i < 5; i++){
		printf("Elemento %d: %d\n", i + 1, numeros[i]);
}
 		return 0;
	

}
