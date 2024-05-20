// Comprobar si un numero digitado por el usuario es positivo o negativo

#include <stdio.h>

int main(){

    int numero;

    printf("Digite el numero\n");
    scanf("%d",&numero);

    if(numero > 0){
        printf("El numero %d es positivo\n",numero);
    }else if (numero < 0){
        printf("El numero %d es negativo\n",numero);
    }else{
        printf("El numero %d es igual a cero\n",numero);
    }
    

    return 0;
}