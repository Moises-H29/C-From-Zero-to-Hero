// Aumentar un 10% el salario de un trabajador en una empresa

#include <stdio.h>

int main(){
    
    char nombre[40];
    float salario, aumentoSalario;

    printf("Por favor introduzca su nombre\n");
    gets(nombre);

    printf("Bienvenido, %s\n",nombre);
    printf("Por favor introduzca su salario $");
    scanf("%f",&salario);

    aumentoSalario = (salario * 0.1) + salario;

    printf("Felicidades %s tu salario ahora es de $%.2f",nombre,aumentoSalario);






    return 0;
}