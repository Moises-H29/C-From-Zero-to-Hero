// Pedir 2 numeros al usuario, sumarlos, restarlos, multiplicarlos y dividirlos.

#include <stdio.h>

int main(){
    
    float num1, num2;
    float suma, resta, mult, div;

    printf("Ingresa el primer numero\n");
    scanf("%f",&num1);

    printf("Ingresa el segundo numero\n");
    scanf("%f",&num2);

    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("\nLa suma es: %.2f",suma);
    printf("\nLa resta es: %.2f",resta);
    printf("\nLa multiplicacion es: %.2f",mult);
    printf("\nLa division es: %.2f",div);

    return 0;
}