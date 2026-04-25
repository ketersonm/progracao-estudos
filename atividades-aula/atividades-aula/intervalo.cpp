#include <stdio.h>
#include <conio.h>
main(){
	int n1;
	printf("Digite o primerio numero: ");
	scanf("%i", &n1);
	
	if (n1 >= 10 && n1 <= 50){
		printf("Dentro do intervalo");
	}
	
	else {
		printf("Fora do intervalo");
	}
	
	getch();
}
