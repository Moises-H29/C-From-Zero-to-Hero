// Programa con uso de if
#include <stdio.h>

main(){

    float cal1, cal2, prom;
    printf("Promedio Calificaciones ***\n");
    printf("Calificacion 1: ");
    scanf("%f",&cal1);
    printf("Calificacion 2: ");
    scanf("%f",&cal2);

    if(cal1 < 0 || cal1 > 10 || cal2 < 0 || cal1 > 10)
        printf("ERROR EN ALGUN DATO");
    else
    {
        prom = (cal1 + cal2)/2;
        printf("Tu promedio es: %.2f",prom);
    }

}