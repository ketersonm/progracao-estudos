#include <stdio.h>
#include <conio.h>
int main(){
	int lado1, lado2, lado3, soma;
	printf("Digite o primeiro lado do traingulo \n");
	scanf("%i", &lado1);
	
	printf("Digite o segundo lado do traingulo \n");
	scanf("%i", &lado2);
	
	printf("Digite o terceiro lado do traingulo \n");
	scanf("%i", &lado3);
	
	soma = lado1 + lado2;
	
	if (soma > lado3){
		if (lado3 == lado2 && lado1 == lado3 && lado2 == lado1){
		printf("Triangulo equilatero \n");
	}
	else if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
		printf("Triangulo  Isosceles \n");
	}
	}
	else {
		printf("Lados diferentes");
	}
	getch();
	
}
