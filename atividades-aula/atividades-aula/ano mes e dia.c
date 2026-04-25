#include <stdio.h>
#include <conio.h>
int main(){
	int mes, ano, dia;
	printf("Digite o dia \n");
	scanf("%i", &dia);
	
	printf("Digite o numeo do mes \n");
	scanf("%i", &mes);
	
	printf("Digite o ano \n");
	scanf("%i", &ano);
	
	if (dia < 1 || dia > 29){
		printf("Dia invalido  \n");
	}
	
	if (mes > 12 || mes < 1){
		printf("Mes invalido \n");
}
	
	if (mes <= 12 && mes >= 1){
		printf("Mes valido \n");
}
	
	if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
		printf("Esse ano eh bissexto \n");
}

	else if (ano % 4 != 0 && ano % 100 == 0 || ano % 400 != 0){
		printf("Esse ano nao eh bissexto \n");
}
	
	if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        
    if (dia >= 1 && dia <= 30) {
        printf("Dia valida \n");
        
    if (dia >= 1 && dia <= 29){
		printf("Dia valido \n");
}
} 	else {
        printf("Data invalida \n");
	
}
}
	else {
    if (dia >= 1 && dia <= 31) {
        printf("Data valida\n");
}	else {
    	printf("Data invalida\n");
}
}
	getch();
}
