#include <stdio.h>
#include <conio.h>
int main(){
	int x1,y1,x2,y2,x3,y3,x4,y4;
	
	printf("Digite a coordenada x1: \n");
	scanf("%i", &x1);
	
		printf("Digite a coordenada y1: \n");
	scanf("%i", &y1);
	
		printf("Digite a coordenada x2: \n");
	scanf("%i", &x2);
	
		printf("Digite a coordenada y2: \n");
	scanf("%i", &y2);
	
		printf("Digite a coordenada x3: \n");
	scanf("%i", &x3);
	
		printf("Digite a coordenada y3: \n");
	scanf("%i", &y3);
	
		printf("Digite a coordenada x4: \n");
	scanf("%i", &x4);
	
		printf("Digite a coordenada y4: \n");
	scanf("%i", &y4);
	
	if (x2 < x3 || x1 > x4 || y2 < y3 || y1 > y4)
        printf("Nao colidem");
    else
        printf("Colidem");
        
    getch();
}
