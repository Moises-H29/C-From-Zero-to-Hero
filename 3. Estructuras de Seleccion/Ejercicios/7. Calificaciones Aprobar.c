/* Comprobar a través de un programa si un alumno aprobó o reprobó un examen 
(Aprueba si su nota es mayor o igual a 5.5) */
#include <stdio.h>

int main(){

    float calificacion_examen;
    printf("Escribe la calificacion del examen\n");
    scanf("%f",&calificacion_examen);

    if(calificacion_examen >= 5.5)
        printf("Felicidades! Aprobaste el examen\n");
    else
        printf("Reprobado\n");

    return 0;
}