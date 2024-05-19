#include <stdio.h>

int main(){

    float numero1, numero2;

    printf("Ingresa el primer numero\n");
    scanf("%f",&numero1);

    printf("Ingresa el segundo numero\n");
    scanf("%f",&numero2);

    numero1 > numero2 ? printf("\nEl primer numero es mayor") : printf("\nEl segundo numero es mayor");

    return 0;
}