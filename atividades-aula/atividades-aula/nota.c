#include <stdio.h>
#include <conio.h>
int main(){
	float nota;
	
	printf("Digite sua nota: \n");
	scanf("%f", &nota);
	
	if (nota >= 7 && nota <= 10){
		printf("Aprovado!");
	}
	else if (nota >= 5 && nota <= 6.9f){
		printf("Em exame");
	}
	else if (nota >= 1 && nota < 5 ){
		printf("Reprovado");
	}
	else {
		printf("Nota invalida");
	}
	getch();
}
