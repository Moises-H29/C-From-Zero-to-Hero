// Simular una tienda con entradas y salidas de capital

#include <stdio.h>
int main(){

    int opcion;
    float agregar, retirar, saldo = 3000;

    puts("\t*********************************************\n");
    puts("\t***Este es un simulador de Tienda o Cajero***\n");
    puts("\t*********************************************\n\n");

    printf("\tSelecciona una Opcion\n");

    printf("\n\t1) Depositar Dinero"
          "\n\t2) Retirar Dinero"
          "\n\t3) Salir del Cajero\n");

    printf("\nIntroduce tu opcion: ");
    scanf("%d",&opcion);
    
    printf("\n\nOpcion %d seleccionada\n",opcion);

    switch (opcion)
    {
    case 1:

        printf("Ingrese la cantidad que va a Depositar\n");
        scanf("%f",&agregar);
        if(agregar <= 0){
            printf("Cantidad a depositar invalida\n");
            break;
        }
        saldo += agregar;
        printf("Cantidad depositada\nTu saldo actual es de %.2f",saldo);
        
        break;
    case 2:

        printf("Ingrese la cantidad que va a Retirar\n");
        scanf("%f",&retirar);
        if(retirar > saldo){
            printf("No es posible retirar la cantidad ingresada, su saldo disponible es de %.2f",saldo);
            break;
        }
        saldo -= retirar;
        printf("Cantidad depositada\nTu saldo actual es de %.2f",saldo);
        
        break;
    case 3:
        printf("Gracias por usar la aplicacion\nHasta la proxima\n");
        break;
    default:
        printf("\nOpcion no valida");
        break;
    }






    return 0;
}