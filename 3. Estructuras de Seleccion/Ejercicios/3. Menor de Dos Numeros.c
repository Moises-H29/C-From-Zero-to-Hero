// Calcular el menor de dos numeros

#include <stdio.h>

int main(){

    float num1, num2;

    printf("Digita dos numeros\n");
    scanf("%f %f",&num1,&num2);

    if(num1 < num2){
        printf("El primer numero es el menor, el cual es %.3f\n", num1);
    }else if(num2 < num1){
        printf("El segundo numero es el menor, el cual es %.3f\n", num2);
    }else{
        printf("Los numeros son iguales\n");
    }

    return 0;
}