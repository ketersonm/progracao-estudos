#include <stdio.h>
#include <conio.h>
main(){
	int num1, num2;
	printf("Digite o primeiro numero \n");
	scanf("%i", &num1);
	printf("Digite o segundo numero \n");
	scanf("%i", &num2);
	printf("Digite qualquer tecla para seguir \n");
	getch();
	if(num1 == num2){
		printf("Seus numeros sao iguais \n");
	}
	else{
		printf("Seus numeros sao diferentes \n");
	}
	getch(); }

