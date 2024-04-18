// ? La principal diferencia entre ellos es cuándo se realiza el incremento en relación
// ? con la evaluación de la expresión en la que se utilizan.
// ! En bucles generalmente es más usado el POSTINCREMENTO

#include <stdio.h>

int main(){
    
    int a = 5;
    int b = ++a; // Aquí a se incrementa antes de asignar su valor a b
    // Ahora a es 6 y b también es 6

    printf("%d\n",a);
    printf("%d\n",b);

    int x = 10;
    int y = x++; // Aquí x se incrementa después de asignar su valor a y
    // Ahora x es 11, pero y es 10

    printf("%d\n",x);
    printf("%d\n",y);

    return 0;
}