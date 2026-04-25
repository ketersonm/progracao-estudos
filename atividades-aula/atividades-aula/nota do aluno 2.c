#include <stdio.h>
#include <conio.h>
int main(){
	float nota,nota_final, atraso, erro,  ponto_extra, penalidade;
	 ponto_extra = 1;
	
	printf("Digite a nota: \n");
	scanf("%f", &nota);
	penalidade = nota * 0.8;
	
	
	printf("houve erro de compilacao? (1 para sim e 0 para nao) \n");
	scanf("%f", &erro);
	
	printf("houve atraso? (1 para sim e 0 para nao) \n");
	scanf("%f", &atraso);
	
	if (erro == 1){
		printf("Nota zerada!");
	}
	
	if (erro == 0 && atraso ==  1){ 
		printf("Perdeu 20 porcento: %.2f", penalidade);
	}
	
	if (erro == 0 && atraso == 0){
		printf("Ponto extra! %f ",  ponto_extra + nota);
	}
	
	getch();

}
