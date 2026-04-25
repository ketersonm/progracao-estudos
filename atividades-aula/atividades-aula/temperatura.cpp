#include <stdio.h>
#include <conio.h>
main(){
	float temp;
	printf("Qual a temperatura?\n");
	scanf("%f", &temp);
	
	if (temp >= 20 && temp <= 30){
		printf("Temperatura normal");
	}
	
	else {
		printf("Temperatura fora do intervalo ideal");
	}

	getch();
}
