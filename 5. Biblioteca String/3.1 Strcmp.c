//* Este programa verifica por orden diccionario

#include <stdio.h>
#include <string.h>

int main(){

    char cadena1[] = "era", cadena2[12];

    printf("Digita tu palabra\n");
    fflush(stdin);
    scanf("%s",&cadena2);

    printf("\n%d\n",strcmp(cadena2,cadena1));  //* Imprime el numero de la comparación ASCII

    return 0;
}