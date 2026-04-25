#include <stdio.h>
#include <conio.h>
int main(){
	float pagamento, valor, monitor;
	
	printf("Digite o valor da mensalidade \n");
	scanf("%f", &valor);
	
	printf("Digite o metodo de pagamento: \n 1 para a vista e 2 para parcelado \n");
	scanf("%f", &pagamento);
	
	printf("O aluno eh monitor? \n 1 para sim e 0 para nao \n");
	scanf("%f", &monitor);
	

	
	if(pagamento == 1){
		valor = valor * 0.90;
		
	}
	if (monitor == 1){
		valor = valor * 0.95;
	}
	
	printf("Vaolr da mensalidade = %f", valor);

	getch();
	
	
	
	
	
}
