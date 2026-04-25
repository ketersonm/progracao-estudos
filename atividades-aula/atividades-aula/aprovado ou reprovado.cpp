#include <stdio.h>
#include <conio.h>
main(){
		float media, n1, n2, n3;
	printf("Digite a nota 1:\n");
	scanf("%f", &n1);
	
	printf("Digite a nota 2:\n");
	scanf("%f", &n2);
	
	printf("Digite a nota 3:\n");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3)/3;
	printf("Sua media eh: %1.f \n", media);
	puts("Carregando...");
	getch();
	
	if (media >=7 && media <=10 ){
		printf("Aprovado!");
	}
	
	else{
		printf("Reprovado");
	}
	
	getch();
}
