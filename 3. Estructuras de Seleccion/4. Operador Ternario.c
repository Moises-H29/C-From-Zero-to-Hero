/* Expresion condicional Operador Ternario '?'

Sintaxis:

Condición ? expresion1 (Si Verdadero) : expresion2 (Si Falso);

*/

#include <stdio.h>

int main(){

    int numero;

    puts("Escribe un numero\n");
    scanf("%d",&numero);

    (numero % 2 == 0) ? printf("EL numero es par\n") : printf("El numero es impar\n");


    return 0;
}