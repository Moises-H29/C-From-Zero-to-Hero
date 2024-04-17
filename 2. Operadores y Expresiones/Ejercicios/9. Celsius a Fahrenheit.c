// Conversión de grados Celsius a grados Fahrenheit

#include <stdio.h>

int main(){

    float gradosCelsius, gradosFahrenheit;

    printf("Ingresa la cantidad de grados Celsius\n");
    scanf("%f",&gradosCelsius);

    gradosFahrenheit = gradosCelsius * 1.8 + 32;

    printf("\nEl equivalente en grados Fahrenheit es de: %.2f F",gradosFahrenheit);

    return 0;
}