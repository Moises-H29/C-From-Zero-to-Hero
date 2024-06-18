/*
Do While

Sintaxis:

do{
    Instrucciones
}while(Condicional)

El Do While ejecuta las Instrucciones al menos una vez, sin importar si la Condicional se cumple o no. Después
de esto ya verifica con la Condicional para seguir ejecutando o salir del ciclo.
*/

// Mostrar los primeros 20 números

#include <stdio.h>

int main(){

    int i = 200;

    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=20);
    

    return 0;
}