#include <stdio.h>
#include <conio.h>
main(){
	int n1;
	printf("Digite o numero: ");
	scanf("%i", &n1);
	
	if (n1 % 2 == 1){
		printf("Seu numero eh impar");
	}
	else {
		printf("Seu numero eh par");
	}
	getch();
}
