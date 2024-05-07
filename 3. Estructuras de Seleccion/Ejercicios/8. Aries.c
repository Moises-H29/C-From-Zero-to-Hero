/* Ingrese por teclado el nombre y el signo de cualquier
persona e imprima el nombre solo si la persona es signo Aries,
en caso contrario, imprima "No es signo Aries" */
#include <stdio.h>
#include <string.h>

int main(){

    char nombre[40], signo[15];

    printf("Ingrese su nombre\n");
    fgets(nombre,40,stdin);  // fgets(string, maximo de caracteres (para evitar una inyección), entrada);
    strtok(nombre,"\n");  // strtok(string, delimitador);

    printf("Ingrese su signo\n");
    fgets(signo,15,stdin);
    strtok(signo,"\n");

    if (strcmp(signo,"aries") == 0 || strcmp(signo,"Aries") == 0)
        printf("\nSu nombre es: %s",nombre);
    else
        printf("\nUsted no es Aries"); 


    return 0;
}