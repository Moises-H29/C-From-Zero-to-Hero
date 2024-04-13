/* Dadas las horas trabajadas de una persona y el valor por hora.
Calcular su salario e imprimirlo*/

#include <stdio.h>

int main(){
    int horas;
    float salario_hora, salario_total;

    printf("Digite las horas trabajadas\n");
    scanf("%d",&horas);

    printf("Digite el salario por hora\n");
    scanf("%f",&salario_hora);

    salario_total = horas * salario_hora;

    printf("El salario total es: %.2f", salario_total);



    return 0;
}