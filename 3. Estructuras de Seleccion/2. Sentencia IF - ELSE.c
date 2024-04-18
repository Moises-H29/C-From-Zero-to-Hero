// Sentencia If - Else o Sentencia Doble

/*
if(algo){
    accion 1;
}
else{
    accion 2;
}
*/

#include <stdio.h>

int main(){

/*     float a, b, c;
    
    printf("Digite el numero a\n");
    scanf("%f",&a);

    printf("Digite el numero b\n");
    scanf("%f",&b);

    c = a + b;

    if(a > 200){
        
        printf("\nTu resultado es mayor a 200 y es %f",c);

    }
    else{  //* No recibe argumentos y se ejecuta en caso de no cumplirse el argumento del IF (en caso de que sea false)
    
        printf("\nTu resultado no es mayor que 200 y es %f",c);

    }
 */

    float calificacion;

    printf("Escribe tu calificacion\n");
    scanf("%f",&calificacion);

    if(calificacion > 6)
        printf("Aprobado\n");  // * Si dentro de un bloque SOLO HABRÁ UNA LINEA, podemos omitir el uso de llaves
    else if(calificacion == 6)  // ? Si queremos pasar argumentos a nuestra sentencia else, para un segundo caso específico, agregamos if(condición) por delante del else
        printf("Pasaste de panzaso\n");
    else
        printf("Reprobadote xd\n");
        printf("Hola\n");  // ! Este "Hola" se imprimirá afuera del bloque de if/else

    return 0;
}