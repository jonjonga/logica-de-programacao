#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
   
    int numero, quantidadeNumeros = 0, pares = 0, impares = 0;
    int quantidadePositivos = 0, quantidadeNegativos = 0;
   
    do {
        printf("Digite um n�mero n�mero: ");
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
    printf("N�meros pares: %i \n", pares);
    printf("N�meros �mpares: %i \n\n", impares);
    printf("N�meros positivos: %i \n", quantidadePositivos);
    printf("N�meros negativos: %i \n\n", quantidadeNegativos);
    printf("N�meros inseridos: %i \n", quantidadeNumeros);
   
   
    return 0;
}
