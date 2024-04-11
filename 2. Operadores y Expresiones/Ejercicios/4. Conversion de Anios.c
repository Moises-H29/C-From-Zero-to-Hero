/*
Transformar años a meses
Meses a Semanas
Semanas a Días
y Días a Horas

Tomando las siguientes equivalencias:
1 año = 12 meses
1 mes = 4 semanas
1 semana = 7 días
1 día = 24 horas
*/

// Pedir al usuario que digite la cantidad de años con las que se hará la conversión

#include <stdio.h>

int main(){
    
    int edad,meses,semanas,dias,horas;

    printf("Digita tu edad en anios:\n");
    scanf("%i",&edad);

    meses = edad * 12;
    semanas = meses * 4;
    dias = semanas * 7;
    horas = dias * 24;

    printf("Tu edad en Meses es de %d\n",meses);
    printf("Tu edad en Semanas es de %d\n",semanas);
    printf("Tu edad en Dias es de %d\n",dias);
    printf("Tu edad en Horas es de %d\n",horas);
    printf("Gracias por usar el programa");


    return 0;
}