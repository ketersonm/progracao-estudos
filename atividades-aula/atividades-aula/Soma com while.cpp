#include <stdio.h>
#include <conio.h>
int main(){
	int num1, num2;
	int soma;
	
	 printf("Digite numeros positivos:\n ");
	 
	while(1){
		scanf("%i", &num1);
		scanf("%i", &num2);
		
	if (num1 < 0 || num2 < 0) {
		printf("Mumero negativo eh invalido.");
		break;
	
}
	
	soma = num1 + num2;
	printf("Soma = %i", soma);
}

	
	getch();
}
