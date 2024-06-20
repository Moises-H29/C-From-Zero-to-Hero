//* strrev(cadena);
//* Invierte una cadena

#include <stdio.h>
#include <string.h>  //? No olvidar incluir librería String

int main(){

    char cadena[] = "Hola amigos";

    strrev(cadena);  // Se invierte la cadena con la función Strrev

    printf("\nCadena invertida: %s",cadena);  // Mostramos la cadena invertida

    return 0;
}