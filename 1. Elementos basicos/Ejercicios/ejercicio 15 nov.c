#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define T 5
#define P 25
int main()
{
    // Ejercicio 1
    
    char dato;
    dato = getchar();
    printf("El caracter que entro fue %c\n",dato);
    if(dato>='A' && dato <= 'Z')
        printf("El character en minuscula es = %c\n", tolower(dato)); //dato conserva su valor
    printf("El valor de dato no se modifico porque no se reasigno entonces dato=%c\n",dato);
    
    
    //Ejercicio 2
    
    char cars[T];
    int i;
    for(i=0; i < T - 1; ++i) // T-1 para tener la ultima posición del arreglo vacia
    {
        printf("Digitar character");
        fflush(stdin);
        cars[i] = getchar();    
    }
    cars[i] = '\0'; // marcar la ultima posición en el arreglo con el nulo
    printf("Impresion del Arreglo \n");
    for(i=1; cars[i] != '\0' ; ++i)
     {
        putchar( cars[i]);
    }
    printf("\n\n");
    // Ejercicio 3
    int x;
    char oso[P] ; //declara un arreglo , T vale 5
    for(x=1 ; x <=5 ; ++x) //el proceso que se ponga dentro del for() lo realiza 5 veces
    {
        gets(oso);
        fflush(stdin);
    }
    puts(oso) ; //imprime la última cadena que quedo en arreglo oso[]


    return 0;
}
