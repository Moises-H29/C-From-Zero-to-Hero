/* Dada una nota de un examen; mediante un codigo escribir
el literal que le corresponde a la nota

A - Excelente
B - Notable
C - Aprobado
D y F - Reprobado 

*/
#include <stdio.h>

int main(){

    char nota;
    printf("Escribe tu nota (A - F)\n");
    scanf("%c",&nota);

    switch (nota)
    {
    case 'A':
        printf("Excelente\n");
        break;
    case 'B':
        printf("Notable\n");
        break;
    case 'C':
        printf("Aprobado\n");
        break;
    case 'D':
    case 'F':
        printf("Reprobado\n");
        break;
    default:
        printf("Nota invalida\n");
        break;
    }

    return 0;
}