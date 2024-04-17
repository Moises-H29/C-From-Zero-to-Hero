// Condicionales

/* Sentencia if

if (algo){
    accion
}
*/

#include <stdio.h>

int main(){

    float a, b, c;
    
    printf("Digite el numero a\n");
    scanf("%f",&a);

    printf("Digite el numero b\n");
    scanf("%f",&b);
    
    c = a + b;

    /*
    a = b = 3;
    c = a + b;

    if(a + b == 6){

        printf("El resultado es: %i",c);

    }
    */
    
    // Tricotomía :)
    
    if(c > 200){
        printf("\nLa suma de tus numeros es mayor a 200 y es: %.2f",c);
    }
    if(c == 200){
        printf("\nLa suma es igual a %.2f",c);
    }
    if(c < 200){
    
        printf("\nLa suma de tus numeros es menor a 200 y es: %.2f",c);

    }

    if(0 == 0.0){
        printf("\n\nEsto se va a imprimir porque es true");
    }
    if(0.0){
        printf("\n\nEsto NO se va a imprimir porque es false");
    }

    return 0;
}