#include <stdio.h>
#include <conio.h>
main(){
	int produtos, estoque;
	printf("Digite a quantidade de produtos em estoque: ");
	scanf("%i", &estoque);
	
	printf("O produto esta ativo?\n Digite 1 para sim, ou 0 para nao \n");
	scanf("%i", &produtos);
	
	
	if (estoque > 0 && produtos == 1){
		printf("Produto disponivel para vendas!");
	}
	
	else {
		printf("Produto indisponivel");
	}
	getch();
	
}
