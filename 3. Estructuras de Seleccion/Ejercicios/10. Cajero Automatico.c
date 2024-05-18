/* Hacer un programa que simule un cajero automático
con un saldo inicial de 1000 dólares */
#include <stdio.h>

int main(){

    float saldo = 1000, cantidad;
    int opcionElegida;

    printf("Bienvenido a tu cajero virtual\n");
    printf("\nEscribe lo que quieres hacer");

    printf("1) Depositar dinero a la cuenta\n"
    "2) Retirar dinero de la cuenta\n"
    "3) Mostrar saldo actual\n"
    "4) Salir\n");
    scanf("%d",&opcionElegida);

    switch (opcionElegida)
    {
    case 1:
        printf("***DEPOSITAR DINERO***\n");
        printf("Escriba la cantidad que desea ingresar\n");
        scanf("%f",&cantidad);
        saldo += cantidad;
        printf("Su saldo actual es de $%.2f",saldo);
        break;
    case 2:
        printf("***RETIRAR DINERO***\n");
        printf("Escriba la cantidad que desea retirar\n");
        scanf("%f",&cantidad);
        if(cantidad <= 0 || cantidad > saldo){
            printf("Cantidad invalida, su saldo es de: $%.2f\n",saldo);
            printf("Ingrese otra cantidad a retirar\n");
            scanf("%f",&cantidad);
        }
        saldo -= cantidad;
        printf("Ha retirado exitosamente, su saldo actual es de $%.2f",saldo);
        break;
    case 3:
        printf("***MOSTRAR SALDO ACTUAL***\n");
        printf("Su saldo actual es de $%.2f\n",saldo);
        break;
    case 4:
        
        break;
    default:
        break;
    }

    return 0;
}