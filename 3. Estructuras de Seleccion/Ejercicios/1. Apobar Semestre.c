// Ver si un alumno va a pasar de año o no
// Un alumno tiene derecho a reprobar hasta 3 materias para poder pasar de año
// Si reprueba 4 materias no puede pasar de año y recursa
#include <stdio.h>

int main(){

    int materiasReprobadas;

    puts("Cuantas materias has reprobado?\t");
    scanf("%d",&materiasReprobadas);   

    if(materiasReprobadas > 3){
        printf("\nEstas reprobado, tienes que repetir anio, por deber %d materias", materiasReprobadas);
    }else if(materiasReprobadas == 0){
        printf("\nFelicidades, has exentado todas tus materias y has pasado de anio!");
    }else{
        printf("\nHas pasado de anio, pero debes %d materias", materiasReprobadas);
    }

    return 0;
}