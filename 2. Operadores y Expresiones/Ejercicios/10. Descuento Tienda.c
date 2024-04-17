/* Una tienda ofrece el 15% de descuento sobre el total de la compra y
un cliente desea saber cuanto deberá pagar finalmente por su compra */

#include <stdio.h>

int main(){

    float precio_inicial, precio_final, descuento;

    printf("Escribe el precio del producto:\n");
    scanf("%f",&precio_inicial);

    descuento = precio_inicial * 0.15;

    precio_final = precio_inicial - descuento;

    printf("\nSe ha aplicado la oferta y se han descontado $%.2f",descuento);
    printf("\nEl precio total a pagar es de $%.2f",precio_final);

    return 0;
}