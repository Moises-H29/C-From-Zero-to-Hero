/* Seleccionar un vehículo e indicar el peaje a pagar 
según un valor numérico 
1 - turismo, peaje = $500.
2 - autobus, peaje = $3000.
3 - motocicleta, peaje = $300 
otro caso - Vehíulo no autorizado */

#include <stdio.h>
#include <string.h>

int main(){

    int vehiculo, peaje;
    char tipoVehiculo[20];

    printf("Seleccione su vehiculo\n");
    printf("1) Turismo\n2) Autobus\n3) Motocicleta\n");
    scanf("%d",&vehiculo);

    switch (vehiculo)
    {
    case 1:
        peaje =  500;
        strcpy(tipoVehiculo,"Turismo"); 
        break;
    case 2:
        peaje =  3000;
        strcpy(tipoVehiculo,"Autobus");
        break;
    case 3:
        peaje =  300;
        strcpy(tipoVehiculo,"Motocilceta");
        break;
    default:
        printf("Vehiculo No Autorizado\n");
        return 1;
        break;
    }
    
    printf("El su vehiculo es %s y su peaje a pagar es de $%d\n",tipoVehiculo,peaje);

    return 0;
}