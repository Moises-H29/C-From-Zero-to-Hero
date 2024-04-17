/* Calcular el valor de la hipotenusa de un triangulo rectángulo
pidiendo al usuario las medidas de los catetos */

#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c;

    printf("Ingresa los valores de los catetos:\n");
    scanf("%f %f",&a,&b);

    c = sqrt(pow(a,2) + pow(b,2));

    printf("\nLa hipotenusa es de: %.2f",c);

    return 0;
}