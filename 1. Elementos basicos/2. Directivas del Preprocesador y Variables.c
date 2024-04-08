// Dicrectivas de Preprocesador (librerías y macros) y Variables

#include <stdio.h>  // Librería estándar de entrada y salida de datos 
// (Librería que pide y devuelve cosas al usuario (Input / Output))


// Ejemplos de librerias
#include <string.h>
#include <math.h>
#include <stdlib.h>

// También existen macros como directivas de preprocesador
// Ambas son directivas al preprocesador, tanto las librerías como las macros
#define PI 3.1416 // Macro, define un valor constante en el programa (NO LLEVA PUNTO Y COMA)

int y = 5;  // Variable Global

int main(){

    int x = 10;  // Variable local a la función main() (dentro de su scope)

    int z;  // Declarar variable z

    z = 3;  // Inicializar o instanciar variable z  (importante para que no se asigne basura al espacio de memoria)

    float suma;  // Declarar (con tipo de dato float para que no omita valores decimales)
    suma = 0;  // Asignar

    suma = PI + x;

    printf("La Suma es: %.2f", suma);  // Limitar la salida a dos numeros decimales



    return 0;
}