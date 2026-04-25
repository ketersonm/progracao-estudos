#include <stdio.h>
#include <conio.h>
int main(){
	int percentual;
	printf("Digite o percentual de dados ausentes: ");
	scanf("%i", &percentual);
	
	if (percentual < 5) {
		printf("Excluir linhas");
	}
		
	else if (percentual >= 5 || percentual <= 30){
		printf("Preencher com a mediana");
	}
		
	else if (percentual > 30){
		printf("Excluir colunas de analise");
	}
	
	getch();
	
	
}
