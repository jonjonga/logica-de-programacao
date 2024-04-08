#include <stdio.h>
#include <locale.h>
#include <string.h>
int main() {
	setlocale(LC_ALL, "");
	
	char senhaSalvo [500] = "jon";
	char loginSalvo [500] = "2203206";
	char login [500];
	char senha [500];


	while(1){
	
	
		printf("Digite seu login: \n");
		scanf("%s", &login);
		printf("Digite a sua senha: \n");
		scanf("%s", &senha);
	
		if(strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalvo) == 0){
			printf("\n\nACESSO CONCEDIDO\n\n");
		}else{
			printf("\n\nACESSO NEGADO\n\n");
		}
		
		
	}
}
