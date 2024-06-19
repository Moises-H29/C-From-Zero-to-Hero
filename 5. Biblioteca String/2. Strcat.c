//* strcat(Destino, Origen);
//* Concatena (agrega) la cadena Orígen al final de la cadena Destino.
//! Debes tener en cuenta que la cadena Destino debe tener un tamaño tal que pueda albergar la cadena resultante.

#include <stdio.h>
#include <string.h>  //? Recordar importar la librería String

int main(){

    char cadena1[] = "Moises", cadena2[] = "Hernandez";
    char final[50];

    //* Concatenamos
    strcat(final,cadena1);
    strcat(final,"-");
    strcat(final,cadena2);

    printf("%s",final);  //! Imprime "Moises-Hernandez"

    return 0;
}