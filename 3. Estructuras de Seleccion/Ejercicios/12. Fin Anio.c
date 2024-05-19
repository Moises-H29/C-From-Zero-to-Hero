/* Una distribuidora de motocicletas tiene una promocion de
fin de año que consiste en lo siguiente.
Las motos marca Honda tienen un descuento del 5%,
las marca Yamaha tienen un descuento del 8% y las Suzuki del 10%, las otras marcas del 2% */
#include <stdio.h>
#include <string.h>

int main(){

    char marca[10];
    float precio, precioFinal = 0;

    printf("Ingrese el precio de su motocicleta\n");
    scanf("%f",&precio);

    printf("Ingrese la marca de su motocicleta\n");
    scanf("%s",&marca);

    strlwr(marca);
    printf("%s",marca);

    if(strcmp(marca,"honda") == 0)
        precioFinal = precio - (precio * 0.05);
    else if(strcmp(marca,"yamaha") == 0)
        precioFinal = precio - (precio * 0.08);
    else if(strcmp(marca,"suzuki") == 0)
        precioFinal = precio - (precio * 0.1);
    else 
        precioFinal = precio - (precio * 0.02);

    printf("\nSu total a pagar, despues del descuento es de: $%.2f",precioFinal);

    return 0;
}