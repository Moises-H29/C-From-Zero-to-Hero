//* continue sirve para terminar una iteración y pasar a la siguiente (generalmente si se cumple una condición).
//* break no sólo termina con una iteración, sino con el ciclo completo (generalmente si se cumple una condición).

#include <stdio.h>

int main() {

    int numero,i;
    printf("Escribe el numero que sera ignorado\n");
    scanf("%i",&numero);

    for (i = 0; i < 100; i++){
        if (i == numero)
            continue;
            printf("\n%i",i);
    }
        printf("\n\n");
//* El ciclo esta definido hasta 99

for (i = 0; i < 100; i++){
    if (i == 5)
    break;
    printf("\n%i",i);
    
}

    return 0;
}