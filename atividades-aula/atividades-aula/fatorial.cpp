#include <stdio.h>
#include <conio.h>
int main(){
    int num = 5;
    int i = 4;

    printf("5!\n");

    while (i >= 1){
        printf("%i * %i = %i\n", num, i, num * i);
        num = num * i;
        i--;
    }

    getch();
}
