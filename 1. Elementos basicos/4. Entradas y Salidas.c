// Entradas y Salidas en C

#include <stdio.h>

int main(){

    /*int hola = 1;

    printf("2 menos 1 es igual a %d", hola);*/
    /*
    int q = 12;
    float w = 12.232;
    char  e = 'w';

    printf("%i %.3f %c",q,w,e);
    */

   int q;
   float w;
   char e;

   printf("Escribe el valor de la variable 'a' (int)\n");
   scanf("%i",&q);

   printf("El valor que escribiste es %i \n",q);

   printf("Digita el valor de la variable 'w' (float)\n");
   scanf("%f",&w);
   
   fflush(stdin);  // Limpia el buffer de entrada
   printf("El valor que escribiste es %.2f \n",w);

   fflush(stdin);  // Limpia el buffer de entrada
   printf("Escribe el valor de la variable 'e' (char)\n");
   scanf("%c",&e);

   printf("El valor que escribiste es %c \n",e);

   fflush(stdin);

   // Arreglos de caracteres

   char n[40];

   printf("Escribe tu nombre\n");
   /*
   scanf("%s",&n);  // scanf no guarda los espacios y truncará la entrada después del espacio
   printf("Hola %s",n);
   */
   gets(n);  // get string
   printf("Bienvenido %s\n",n);

   puts("Adios amigos :)");  // put string escribe un string en pantalla pero no imprime variables como %i, %c, etc.




    return 0;
}