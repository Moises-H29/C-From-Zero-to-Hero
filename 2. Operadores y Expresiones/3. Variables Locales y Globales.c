#include <stdio.h>

int main() {

//? Variables Locales
    //* Variable i solo es accesible dentro del ciclo 
    for (int i = 0; i < 16; i++){
        printf("\nValor de i: %i",i);
        i += 3;
    }
    //! Esto dará un error por que la variable i ya no existe aquí
    printf("\nValor final de i: %d",i);
    



    return 0;
}
// //? Variables Globales
// //! La variable esta afuera de la funcion principal
// int variable = 0;
// int main() {

//     printf("\nVariable = %i",variable);
//     //* Le cambiamos el valor y la incrementamos
//     for (variable = 2; variable <= 20; variable+=2)
//         continue;
//     printf("\nVariable = %i",variable);
//     variable = 10 + 5;
//     printf("\nValor final de la variable = %i",variable);
    
//     return 0;
// }
