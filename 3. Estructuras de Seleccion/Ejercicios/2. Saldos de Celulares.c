/*
Calcular tarifas de saldo en celulares
y poner precios
De 1000 a 1500 Premium
De 500 a 999 Intermedia
De 100 a 499 Basica
*/
// SOLAMENTE USANDO IF (sin else)
#include <stdio.h>
#define Tarifa1 "Basico"
#define Tarifa2 "Intermedio"
#define Tarifa3 "Premium"

int main(){
    
    float precio;

    printf("Digite el monto que esta dispuesto a pagar por su plan\n");
    scanf("%f",&precio);

    if(precio > 99 && precio < 500){
        printf("El plan que se ajusta al precio que quiere pagar es\n%s",Tarifa1);
    }
    if (precio >= 500 && precio < 1000){
        printf("El plan que se ajusta al precio que quiere pagar es\n%s",Tarifa2);
    }
    if (precio >= 1000 && precio <= 1500){
        printf("El plan que se ajusta al precio que quiere pagar es\n%s",Tarifa3);
    }
    


    return 0;
}

