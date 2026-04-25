/* ===========================================
* Nome do programa: verificador de positivo, negativo, impar e par
* Objetivo
*/
#include <stdio.h>
#include <conio.h>
int main(){
	int numero; //aqui dou nome à variavel
	
	printf("Digite um numero: \n"); 
	scanf("%i", &numero); 
	
	if (numero == 0){ // Verifico se é zero
		printf("Zero.");
	}
	else if (numero % 2 != 0){ //Verifico se o numero é impar
		printf("Impar! \n"); 
	}
	else if (numero % 2 == 0){ //Verifico se o numero é par
		printf("Numero par \n");
	}
	
	if(numero > 0){ // Aqui verifico se o numero é positivo (maior do que zero
		printf("Numero positivo \n"); 
	}
	else if (numero < 0) { //
		printf("Numero negativo \n"); // Verifico se o numero é negativo (menor do que zero)
	}

	getch(); 
}
