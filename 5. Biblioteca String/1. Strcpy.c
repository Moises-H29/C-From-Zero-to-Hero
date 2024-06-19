//* strcpy(cadenaDestino, cadenaOrigen);
//* Permite copiar una cadena de texto en otra.
//! Debes considerar que la dimensión del array destino debe ser igual o mayor que el array de origen
//! y además sobrescribe el contenido del destino (de existir).

#include <stdio.h>
#include <string.h> //? Recordar importar librería String

int main(){

    char origen[] = "Programacion";
    //* Dado que "Programación" tiene 12 caracteres
    //* creamos el array Destino de la misma dimensión

    char destino[12];

    //! Copiamos el contenido y lo mostramos
    strcpy(destino,origen);
    printf("%s",destino);


    return 0;
}