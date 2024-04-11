// Ejercicio Area de Trapecio

#include <stdio.h>

int main(){

    float base_Mayor, base_menor, altura, area = 0;

    printf("Introduzca la base mayor\n");
    scanf("%f",&base_Mayor);

    printf("Introduzca la base mayor\n");
    scanf("%f",&base_menor);

    printf("Introduzca la altura\n");
    scanf("%f",&altura);

    area = ((base_Mayor + base_menor) * altura) / 2;

    printf("El area del trapecio es de: %.2f", area);  // También se puede poner %.0f para truncar todos los decimales del float (no tiene mucho sentido)

    return 0;
}