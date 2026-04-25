#include <stdio.h>
#include <conio.h>
int main(){
	int nota;
	
	while(nota >= 0 || nota <= 10){
		printf("Digite uma nota de 0 a 10 \n");
		scanf("%i", &nota);
		if (nota > 10 || nota < 0){
			printf("Valor invalido. \n");
		}
	}
	getch();
}
