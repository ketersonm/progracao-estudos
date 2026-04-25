#include <stdio.h>
#include <conio.h>
main(){
	int idade, convite;
	printf("Digite a sua idade: ");
	scanf("%i", &idade);
	
	printf("Voce possui convite?\n Digite 1 para sim, ou 0 para nao \n");
	scanf("%i", &convite);
	
	
	if (convite == 1 && idade >= 18){
		printf("Voce pode entrar!");
	}
	
	else if (convite == 1 && idade <= 17){
		printf("Voce nao pode entrar. Es menor de idade!");
	}
	else {
		printf("Voce nao pode entrar!");
	}
	getch();
	
}
