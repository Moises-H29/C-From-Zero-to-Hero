//* strlen(cadena);
//* Devuelve un entero que representa la longitud de una cadena de texto (incluyendo espacios
//* en blanco, pero excluyendo el caracter nulo).

#include <stdio.h>
#include <string.h>  //? Recordar siempre incluir la libreria String

int main(){

    //? La longitud del array es de 200 pero la cadena puede ser menor.

    char nombre[200];

    printf("Ingrese su nombre\n");
    fflush(stdin);
    scanf("%s",&nombre);

    int longitud;

    longitud = strlen(nombre);

    printf("Su nombre tiene %i letras\n",longitud);

    return 0;
}