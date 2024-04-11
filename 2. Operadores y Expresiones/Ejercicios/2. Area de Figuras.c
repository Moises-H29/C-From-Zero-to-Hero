/*
Areas de figuras geometricas en C
*/

#include <stdio.h>
#include <math.h>  // Para uso de la función de exponente

int main(){

    /* Area de tirangulo
    printf("Este programa calcula el area de un triangulo\n");

    float base, altura, area = 0;

    printf("Inserta la base y la altura:\n");
    scanf("%f %f",&base,&altura);

    area = (base * altura)/2;

    printf("El area del triangulo es: %.2f",area);

    */
    printf("Este programa calcula el area de un cuadrado\n");

    float lado, area = 0;

    printf("Inserta la longitud del lado del cuadrado:\n");
    scanf("%f",&lado);

    area = pow(lado, 2);  // Función de la librería math.h que toma los valores pow(base, exponente);

    printf("El area del cuadrado es: %.2f",area);

    return 0;
}