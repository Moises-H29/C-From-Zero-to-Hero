// Determinar si un numero es par o impar

#include <stdio.h>

int main(){

    int numero;

    printf("Ingrese un numero entero\n");
    scanf("%d",&numero);

    if(numero % 2 == 0){
        printf("El numero es par\n");
    }else{
        printf("El numero es impar\n");
    }

    return 0;
}