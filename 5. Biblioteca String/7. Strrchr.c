//* strrchr(Cadena, Caracter);
//* Regresa el RESTANTE de la cadena a partir de la primera aparición del caracter indicado (incluyendo al caracter).

#include <stdio.h>
#include <string.h>  //? No olvidar importar librería String

int main(){

    char abecedario[] = "abcdefghijklmnopqrstuvwxyz";
    char corte;

    printf("Ingrese la letra a partir de la cual se mostrara el abecedario:\t");
    fflush(stdin);
    scanf("%c",&corte);
    printf("\n%s",strrchr(abecedario,corte));

    return 0;
}