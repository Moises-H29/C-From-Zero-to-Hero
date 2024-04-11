/*Ejercicios básicos de operaciones aritméticas empleando
entradas y salidas de datos en lenguaje C*/

// Pedirle al usuario que digite 2 números y
// tenemos que sumarlos, restarlos, multiplicarlos y dividirlos

#include <stdio.h>

int main (){

    float num1, num2, suma, resta, multiplicacion, division;

    /*
    printf("Escribe el primer numero\t");
    scanf("%f",&num1);

    printf("Escribe el segundo numero\t");
    scanf("%f",&num2);
    */

    printf("Escribe los dos numeros\n");
    scanf("%f %f",&num1,&num2);  // Pedir más de un valor en un scanf

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;


    // printf en varias lineas

    printf("La suma de los numeros es: %.2f\n"
    "La resta de los numeros es: %.2f\n"
    "La multiplicacion de los numeros es: %.2f\n"
    "La division de los numeros es: %.2f\n",
    suma,
    resta,
    multiplicacion,
    division);
    // Cuidar el orden de las variables para evitar errores semánticos
    
    printf("Gracias por usar el programa\n");
    return 0;
}