//* strupr(cadena);
//* Contrario a strlwr(), esta función convierte en mayúsculas todas las letras de una cadena de texto.

#include <stdio.h>
#include <string.h>  //? Recordar incluir librería String

int main(){

    char texto[30];
    printf("Escribe un texto con mayusculas y minusculas\n");
    fflush(stdin);
    gets(texto);

    printf("El texto en minusculas es el siguiente:\n");
    strupr(texto);
    printf("%s\n",texto);

    return 0;
}