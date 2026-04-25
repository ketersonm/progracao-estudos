#include <stdio.h>
#include <conio.h>
main(){
		int idade;
	printf("Digite a sua idade: ");
	scanf("%i", &idade);
	
	if (idade >= 16){
		printf("Voce pode votar!");
	}
	
	else {
		printf("Voce eh novo demais. Nao pode votar!");
	}
	getch();
}
