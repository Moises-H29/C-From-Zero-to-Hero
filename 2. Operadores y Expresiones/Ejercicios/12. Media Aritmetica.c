/* Calcular la media aritmética de tres números cualesquiera dados por el usuario */

#include <stdio.h>

int main(){
    
    int num1, num2, num3;
    float media_aritmetica = 0;
    
    printf("Escribe los tres numeros\n");
    scanf("%d %d %d",&num1, &num2, &num3);

    media_aritmetica = (float)(num1 + num2 + num3)/3;  // Casting explícito para que nuestra media tenga decimales y no sea una división de enteros (que dará otro entero)

    printf("\nLa media aritmetica es: %.2f",media_aritmetica);

    

    return 0;
}