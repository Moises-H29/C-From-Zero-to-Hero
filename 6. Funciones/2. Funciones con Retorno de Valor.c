// Escribir una función que sume dos numeros
#include <stdio.h>

// Prototipo de la funcion
int sumar(int, int);

int main(){

    int a, b, suma = 0;

    printf("Escribe dos numeros que vas a sumar\n");
    scanf("%d %d",&a,&b);

    printf("La suma de los numeros es: %d",sumar(a,b));

    return 0;
}

int sumar(int num1, int num2){
    int suma = 0;  // Variable local en sumar(int, int); 
    suma = num1 + num2;
    return suma;
}



