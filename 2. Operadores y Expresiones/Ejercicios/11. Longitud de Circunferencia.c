/* Hacer un programa que calcule la longitud de una circunferencia a partir del radio */
// Formula de circunferencia: pi * diametro
#include <stdio.h>
#define PI 3.1416
int main(){

    float radio, diametro, longitudCircunferencia;

    printf("Ingresa la longitud del radio:\n");
    scanf("%f",&radio);

    diametro = radio * 2;  // La variable se podría omitir pero la dejé porque va más acorde a la fórmula

    longitudCircunferencia = PI * diametro;

    printf("La circunferencia es de: %.2f",longitudCircunferencia);

    return 0;
}