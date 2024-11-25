#include <stdio.h>
#include <string.h>
int main(){

    char cadena[] = "Buenos dias amigos mios como estan";
    int contador = 0, longitud, i;

    longitud = strlen(cadena);

    if(strcmp(cadena,"")==0)
        printf("No hay palabras en el arreglo");
    else
    {
        for(i = 0; i < longitud; i++)
        {
            if(cadena[i]==' ')
                contador++;
        }
        contador++;
        printf("El numero de palabras en el arreglo es: %d",contador);
    }




    return 0;
}