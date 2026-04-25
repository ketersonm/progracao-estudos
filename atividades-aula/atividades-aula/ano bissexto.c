#include <stdio.h>
#include <conio.h>
int main(){
	int ano;
	printf("Digite o ano que voce quer saber ");
	scanf("%i", &ano);
	
	
		if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
				printf("Esse ano eh bissexto");
			}
			
		else {
			printf("Esse ano nao eh bissexto");
		}
			
			
			
			

			
	
	getch();
				
			

}
