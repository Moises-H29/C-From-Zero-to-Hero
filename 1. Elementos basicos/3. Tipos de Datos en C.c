// Tipos de Datos en C

#include <stdio.h>
#include <stdbool.h>  // Librería para poder usar booleanos en C 
// Debido a que los booleanos no se incluye por defecto

int main(){
    
    int a = 1.5;  // 2 bytes Rango desde -32768 -> 32767
    char b = 'z';  // 1 byte Rango desde 0 -> 255
    float c = 1.5456456;  // 4 bytes
    // bool
    double d = 155555555.5555555555;  // 8 bytes
    short v = 2;  // 2 bytes Rango desde -128 -> 127
    // Casi como un int pero almacena menor cantidad en memoria. Aunque tienen el mismo tamaño, los valores asignados a short deben ser
    // iguales o menores a un int
    long e = 12345;  // 4 bytes | Como int pero almacena mayor cantidad de memoria
    long double f = 12.2232345343445;  // Como double pero almacena mayor cantidad de memoria
    unsigned int f = 123; // Solo valores positivos 
    // unsigned int | 2 bytes Rango 0 -> 65535

    printf("El valor del entero es de %i \n", a);  // Ignora el valor decimal y escribe 1
    printf("El valor del char es de %c \n", b);
    printf("El valor del flotante es de %f \n", c);
    printf("El valor del double es de %lf \n", d);
    printf("El valor del short es de %d \n", v);
    printf("El valor del long es de %li \n", e);
    printf("El valor del entero unsigned es de %u \n", f);


    return 0;
}