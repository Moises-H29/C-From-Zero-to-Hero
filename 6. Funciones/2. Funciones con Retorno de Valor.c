// Escribir una función que sume dos numeros

//! Cuando una función retorna un valor, el llamado de la función devolverá los valores del return 

#include <stdio.h>

// Prototipo de la funcion
int sumar(int, int);

int main(){

    int a, b, suma = 0;

    printf("Escribe dos numeros que vas a sumar\n");
    scanf("%d %d",&a,&b);

    printf("La suma de los numeros es: %d",sumar(a,b));  // Llamar a la función para que se ejecute //! Si no se llama, no se ejecutará

    return 0;
}

int sumar(int num1, int num2){
    int suma = 0;  // Variable local en sumar(int, int); 
    suma = num1 + num2;
    return suma;
}



