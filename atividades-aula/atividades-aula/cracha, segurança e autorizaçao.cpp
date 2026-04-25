#include <stdio.h>
#include <conio.h>
main(){
	int idade, cracha, equipamento, autorizacao;
	printf("Digite a sua idade: ");
	scanf("%i", &idade);
	
	printf("Voce possui cracha?\n Digite 1 para sim, ou 0 para nao \n");
	scanf("%i", &cracha);
	
		printf("Voce esta usando equipamento de seguranca?\n Digite 1 para sim, ou 0 para nao \n");
	scanf("%i", &equipamento);
	
		printf("Voce possui autorizacao especial?\n Digite 1 para sim, ou 0 para nao \n");
	scanf("%i", &autorizacao);
	
	if (idade >= 18 && equipamento == 1 &&  cracha == 1 && autorizacao == 1 ){
		printf("Voce pode entrar!");
	}
	
	else if (autorizacao == 1){
		printf("Pode entrar!");
	}
	else {
		printf("Acesso negado!");
	}
	getch();
	
}
