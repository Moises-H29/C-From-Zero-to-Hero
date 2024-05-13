// Hacer un programa que borre la pantalla al pulsar 1
#include <stdio.h>
#include <stdlib.h>  // Librería con comandos para el sistema (no son lo mismo que las llamadas al sistema)

int main(){

    int numero;

    printf("\nPrograma que borra pantalla al pulsar el numero 1\n");
    printf("-------------------------------------------------\n");
    printf("\nEscribe el numero 1\n");
    scanf("%d",&numero);


    if(numero == 1){
        system("cls");
        printf("\nHa borrado la pantalla");
    }else if(numero == 2){
        system("dir");
        printf("Contenido en el directorio actual\n");
    }else{
        printf("\nEl numero ingresado no es 1, por favor ingrese el numero 1 para borrar pantalla\n");
        scanf("%d",&numero);
        if(numero == 1){
            system("cls");
            printf("\nHa borrado la pantalla");
        }
    }
    return 0;
}