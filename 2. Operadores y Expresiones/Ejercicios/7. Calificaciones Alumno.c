/* Un alumno desea saber cuál será su calificación final en la 
materia de Algoritmos.
Dicha calificación se compone de los siguientes porcentajes:

55% del promedio de sus tres calificaciones parciales
30% de la calificación del examen final
15% de la calificación de un trabajo final */

#include <stdio.h>

int main(){

    float p1, p2, p3, parciales, examen_final, trabajo_final;  // Datos para pedir al usuario
    float promedio_parciales, promedio_examen, promedio_trabajo, calificacion_final = 0;  // Datos que vamos a calcular

    printf("Ingresa las calificaciones de los tres parciales\n");
    scanf("%f %f %f",&p1, &p2, &p3);

    parciales = (p1 + p2 + p3)/3;

    printf("Ingresa la calificacion de tu examen final\n");
    scanf("%f",&examen_final);

    printf("Ingresa la calificacion de tu trabajo final\n");
    scanf("%f",&trabajo_final);

    promedio_parciales = parciales * 0.55;
    promedio_examen = examen_final * 0.3;
    promedio_trabajo = trabajo_final * 0.15;

    calificacion_final = promedio_examen + promedio_parciales + promedio_trabajo;

    printf("\nTu calificacion final es %.2f",calificacion_final);


    return 0;
}