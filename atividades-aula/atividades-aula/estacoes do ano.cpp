#include <stdio.h>
#include <conio.h>
int main(){
	int numero;
	printf("Digite um numero para saber a estacao correspondente: ");
	scanf("%i", &numero);
	
	switch (numero){
		case 1:
			printf("Primavera");
			break;
	
		case 2:
			printf("Verao");
			break;
	
	
		case 3:
			printf("Outono");
			break;
	
	
		case 4:
			printf("Inverno");
			break;
	
	
	default :
		printf("Numero invalido!");
		break;
	}
	getch();
}
