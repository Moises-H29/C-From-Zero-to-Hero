/*
Funciones Matemáticas

ceil(x) -> Redondea al entero MAYOR más cercano
fabs(x) -> Devuelve el valor absoluto de x
floor(x) -> Redondea al entero MENOR más cercano
sqrt(x) -> Saca la raíz cuadrada de x
fmod(x,y) -> Calcula el residuo de la división de x/y
pow(x,y) -> Calcula x elevado a la potencia y

*/

#include <stdio.h>
#include <math.h>
// Prototipo de la funcion
void funcionMate(); 

int main(){

    funcionMate();
    return 0;
}

void funcionMate() {

    float x, y, cambio = 0;

    printf("Escribe dos numeros:\n");
    scanf("%f %f",&x,&y);

    cambio = pow(x,y);  // Redondea al siguiente número entero 2.1 -> 3
    printf("%.2f",cambio);

}

