// Funciones

//! Funciones sin retorno de valor

// void nombreFuncion(parametros){
//     //? Instrucciones;
// }

//!  Funciones con retorno de valor

// tipoDeDato nombreFuncion(parametros){
//     //? Instrucciones;
//     return expresion;
// }

#include <stdio.h>

// Prototipo de la funcion (como "declarar" la funcion)
void Mundo();

int main(){

    Mundo();

    return 0;
}

void Mundo(){
    printf("Hola Mundo\n");
}
