/* Calcular la cantidad de segundos que están incluidos en el numero de horas,
minutos y segundos ingresados por el usuario. */

#include <stdio.h>

int main(){

    int horas, min, seg, tiempoHoras, tiempoMinutos, total;

    printf("Ingresa las horas\n");
    scanf("%i",&horas);

    printf("Ingresa los minutos\n");
    scanf("%i",&min);

    printf("Ingresa los segundos\n");
    scanf("%i",&seg);

    // Convertir horas a segundos y minutos a segundos 
    tiempoHoras = horas * 3600;
    tiempoMinutos = min * 60;

    //  Sumarlo con los segundos que dio el usuario
    total = tiempoHoras + tiempoMinutos + seg;

    printf("\nEl tiempo total en segundos es de: %d",total);




    return 0;
}