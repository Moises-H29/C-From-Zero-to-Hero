/*Ingrese un numero y calcule e imprima su raiz cuadrada.
Si el numero es negativo imprima el numero y un mensaje que
diga que tiene raíz imaginaria */

#include <stdio.h>
#include <math.h>

int main(){

    float raizCuadrada, numero;

    printf("Escribe un numero\n");
    scanf("%f",&numero);

    if(numero >= 0){
        raizCuadrada = sqrt(numero);
        printf("\nSu raiz cuadrada es: %.3f",raizCuadrada);
    }else {
        printf("\nEl numero tiene raiz imaginaria");
    }

    return 0;
}