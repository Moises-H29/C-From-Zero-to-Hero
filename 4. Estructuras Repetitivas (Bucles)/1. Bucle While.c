/*
La sentencia While

Sintaxis:
    while(condición){
        Instrucciones
    }

*/

#include <stdio.h>
int main(){

    int i = 0;

    while(i <= 100){
        printf("El valor de i es %d\n",i);
        i++;
    }

    return 0;
}