#include <stdio.h>
#include <conio.h>
int main(){
	int num;
	do {
	printf("Digite um numero para consultar as opcoes \n");
	scanf("%i", &num);
	
		switch (num){
			case 1: 
			printf("Consultar saldo \n");
			break;
			
			case 2:
				printf("Sacar \n");
			break;
			
			case 3:
				printf("Depositar \n");
			break;
			
			case 4:
				printf("Sair \n");
				break;
				
			default:
				printf("Opcao invalida. \n");
		}
	}
	while (num != 4);
		printf("Voce saiu. \n");
	
	
	getch();
}
