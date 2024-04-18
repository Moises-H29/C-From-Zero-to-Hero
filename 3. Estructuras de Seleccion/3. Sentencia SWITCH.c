/*
Sentencia switch()

switch(selecciona){
    caso 1:
        opción 1;
        break;
    caso 2:
        opción 2;
        break;
    caso n:
        opción n;
        break;
    default:
        ninguno de los anteriores;
        break;
}
*/

#include <stdio.h>

int main(){

    int dia;
    char letra;

    puts("Selecciona uno de los dias de la semana (del 1 al 7)\n");
    scanf("%i",&dia);

    switch (dia)
    {
    case 1:
        printf("Seleccionaste el Lunes\n");
        break;
    case 2:
        printf("Seleccionaste el Martes\n");
        break;
    case 3:
        printf("Seleccionaste el Miercoles\n");
        break;
    case 4:
        printf("Seleccionaste el Jueves\n");
        break;
    case 5:
        printf("Seleccionaste el Viernes\n");
        break;
    case 6:
        printf("Seleccionaste el Sabado\n");
        break;
    case 7:
        printf("Seleccionaste el Domingo\n");
        break;
    default:
        printf("No seleccionaste ningun dia valido\n");
        break;
    }

    fflush(stdin);

    printf("Selecciona una vocal\n");
    scanf("%c",&letra);



    switch (letra)
    {
    case 'a':
        puts("Primera vocal\n");
        break;
    case 'e':
        puts("Segunda vocal\n");
        break;
    case 'i':
        puts("Tercera vocal\n");
        break;
    case 'o':
        puts("Cuarta vocal\n");
        break;
    case 'u':
        puts("Quinta vocal\n");
        break;
    default:
        puts("No es una vocal\n");
        break;
    }

    
    return 0;
}