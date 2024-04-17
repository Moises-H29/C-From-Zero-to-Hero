/* Calcular el nuevo salario de un obrero
si obtuvo un incremento del 25% sobre su salario anterior */

#include <stdio.h>

int main(){

    float salario, aumento_salario, nuevo_salario;

    printf("Ingrese la cantidad de dinero que percibe mensualmente $");
    scanf("%f",&salario);

    aumento_salario = salario * 0.25;

    nuevo_salario = salario + aumento_salario;

    printf("\nFelicitaciones, ha recibido un aumento de $%.2f\nAhora, usted estara percibiendo $%.2f mensuales", aumento_salario,nuevo_salario);

    return 0;
}