// Decirle algo al aluno con base en sus calificaciones con int y switch
/* 9 - 10 -> Excelente, sigue así!
7 - 8 -> Muy bien, puedes mejorar
6 -> Estudiante regular
0 - 5 -> Esfuerzate, puedes mejorar */
#include <stdio.h>

int main(){

    int calif;

    printf("Digita tu calificacion\n");
    scanf("%i",&calif);

    switch(calif){
        case 1: printf("Esfuerzate, puedes mejorar. Tu calificacion es %d\n",calif); break;
        case 2: printf("Esfuerzate, puedes mejorar. Tu calificacion es %d\n",calif); break;
        case 3: printf("Esfuerzate, puedes mejorar. Tu calificacion es %d\n",calif); break;
        case 4: printf("Esfuerzate, puedes mejorar. Tu calificacion es %d\n",calif); break;
        case 5: printf("Esfuerzate, puedes mejorar. Tu calificacion es %d\n",calif); break;
        case 6: printf("Estudiante regular. Tu calificacion es %d\nPanzaste",calif); break;
        case 7: printf("Muy bien, puedes mejorar. Tu calificacion es %d\nFelicidades",calif); break;
        case 8: printf("Muy bien, puedes mejorar. Tu calificacion es %d\nBuen alumno",calif); break;
        case 9: printf("Excelente, sigue asi! Tu calificacion es %d\nPerfecto!",calif); break;
        case 10: printf("Excelente, sigue asi!. Tu calificacion es %d\nEl mejor!",calif); break;
        default: printf("No es una calificacion valida\n"); break;
    }

    return 0;
}