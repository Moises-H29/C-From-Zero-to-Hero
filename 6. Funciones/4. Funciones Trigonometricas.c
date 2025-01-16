/*
    Funciones Trigonometricas

        (Si requiere la libreria math.h)

acos(x) -> Calcula el Arco Coseno de x
asin(x) -> Calcula el Arco Seno de x
atan(x) -> Calcula el Arco Tangente de x
cos(x) -> Calcula el Coseno de x
sin(x) -> Calcula el Seno de x
tan(x) -> Calcula la Tangente de x
*/
#include <stdio.h>
#include <math.h>

void funcionTrigonometrica();

int main() {
    funcionTrigonometrica();
    return 0;
}
void funcionTrigonometrica(){

    float x,cambio=0;
        printf("Escribe un numero\n");
        scanf("%f",&x);

    cambio=asin(x);
    printf("El resultado es %f",cambio);

}