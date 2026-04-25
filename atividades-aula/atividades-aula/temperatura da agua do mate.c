#include <stdio.h>
#include <conio.h>
int main(){
	int temp;
	
	printf("Qual eh a temperatura da agua?");
	scanf("%i", &temp);
	
	if (temp >= 70 && temp <= 80){
		printf("temperatura ideal");
	}
	else if (temp < 70){
		printf("Agua fria!");
	}
	else {
		printf("Agua muito quente!");
	}
	getch();
}
