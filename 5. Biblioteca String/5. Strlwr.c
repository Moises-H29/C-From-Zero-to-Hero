//* strlwr(cadena);
//* Convierte en minúsculas todas las letras de una cadena de texto.

#include <stdio.h>
#include <string.h>  //? Recordar incluir librería String

int main(){

    char texto[30];
    printf("Escribe un texto con mayusculas y minusculas\n");
    fflush(stdin);
    gets(texto);

    printf("El texto en minusculas es el siguiente:\n");
    strlwr(texto);
    puts(texto);

    return 0;
}