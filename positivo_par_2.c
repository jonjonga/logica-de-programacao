#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
   
    int numero, quantidadeNumeros = 0, pares = 0, impares = 0;
    int quantidadePositivos = 0, quantidadeNegativos = 0;
   
    do {
        printf("Digite um número número: ");
        scanf("%i",&numero);
       
        if (numero != 0) {
            quantidadeNumeros++;
        }
       
        if (numero > 0) {
            quantidadePositivos++;
            if (numero % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        } else if (numero < 0) {
            quantidadeNegativos++;
        }
    } while (numero != 0);
   
    printf("\n=== Exibindo resultados ===\n");
    printf("Números pares: %i \n", pares);
    printf("Números ímpares: %i \n\n", impares);
    printf("Números positivos: %i \n", quantidadePositivos);
    printf("Números negativos: %i \n\n", quantidadeNegativos);
    printf("Números inseridos: %i \n", quantidadeNumeros);
   
   
    return 0;
}
