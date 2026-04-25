#include <stdio.h>
#include <conio.h>
main(){
	int usuario, senha;
	printf("Digite o numero do seu usuario: ");
	scanf("%i", &usuario);
	
	printf("Digite a senha: ");
	scanf("%i", &senha);
	
	if (usuario == 1234 && senha == 2024){
		printf("Acesso permitido");
	}
	else {
		printf("Acesso negado!");
	}
	
	getch();
}
