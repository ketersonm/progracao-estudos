#include <stdio.h>
#include <conio.h>
int main(){
	int num, i;
	printf("digite um numero de 1 a 10:");
	scanf("%i", &num);
	for (int i = 1; i <=10; i++){
		printf("%i * %i = %i \n", num, i, num * i);

	}
	
	
	
	
	getch();
}
