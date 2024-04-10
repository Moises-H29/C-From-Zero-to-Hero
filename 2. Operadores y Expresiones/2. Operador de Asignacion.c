// Operador de Asignación en C

#include <stdio.h>

int main(){

    /* 
    int a;
    a = 2;

    printf("El valor de a es = %i",a);
    */

    int a, b, c;  // Declaración de variables en la misma línea
    a = b = c = 20;  // Asignación múltiple

    printf("El valor de a es = %i\n",a);
    printf("El valor de b es = %i\n",b);
    printf("El valor de c es = %i\n",c);

    int x = 10;
    // Operador de suma en asingación
    x += 3;  // Es igual a poner x = x + 3;

    printf("El valor de x es: %i\n", x);

    x = 10;

    x -= 8;  // Es igual a poner x = x - 8;
    
    printf("El nuevo valor de x es: %i\n", x);

    // a *= 2; es igual a poner a = a * 2;
    // a /= 2; es igual a poner a = a / 2;

    // Ejemplo:

    x = 10;

    x /= 2;

    printf("El valor de x es: %i\n", x);

    return 0;
}