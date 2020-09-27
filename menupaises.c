#include <stdio.h>

int main(void){

	char x = 0;
	int i = 1;
	while ( i >= 1 && i <= 9) {

		printf("Digite um número: \n");
    printf("1 - França: \n");
		printf("2 - Bélgica: \n");
		printf("3 - Portugal: \n");
		printf("4 - Espanha: \n");
		printf("5 - Inglaterra: \n");
		printf("6 - Suécia: \n");
		printf("7 - Itália: \n");
		printf("8 - Polônia: \n");
		printf("9 - Grécia: \n");
		printf("0 - SAIR: \n \n");

		scanf("%d", &x);
		getchar();
		switch (x) {

			case 1 : printf("Bem vindo a França! \n \n");
				break;

			case 2 : printf("Bem Vindo a Bélgica! \n \n");
				break;

			case 3 : printf("Bem Vindo a Portugal! \n \n");
				break;

			case 4 : printf("Bem Vindo a Espanha! \n \n");
				break;

			case 5 : printf("Bem Vindo a Inglaterra! \n \n");
				break;

			case 6 : printf("Bem Vindo a Suécia! \n \n");
				break;

			case 7 : printf("Bem Vindo a Itália! \n \n");
				break;

			case 8 : printf("Bem Vindo a Polônia! \n \n");
				break;

			case 9 : printf("Bem Vindo a Grécia! \n \n");
				break;

			case 0 : printf("Obrigado Volte Sempre");
				break;

			default:
				printf("Tente novamente!");
				break;
		}
  	printf("\a");
    i = x;
    system("pause");
    }
}
