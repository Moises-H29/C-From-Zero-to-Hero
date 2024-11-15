#include <stdio.h>
#include <ctype.h>
#define T 40

int main(){

    // Ejercicio 3

    char oso[T], var; //T vale 40
    int cta=0, x;
    // Pide/Solicita una cadena mientras el carácter sea diferente del enter (‘\n’)
    //y no pase de la longitud del arreglo que en este caso es de 40
    for(x=0 ; (var = getchar()) != '\n' && x < T ; ++x) //primero hace el getchar(), segundo la asigna
    { //a la variable var y luego pregunta si es != ‘\n’
    oso[x] = var; //introduce el carácter en el arreglo oso
    ++cta; //cuenta carácter x caracter
    }
    printf("%d\n",cta);
    puts(oso); //imprime toda la cadena hasta llegar al ('\0') y salta

    // Ejercicio 4

    char aux;
    cta = 0;
    gets(oso);
    // Imprime la cadena caracer x carácter mientras no encuentre el carácter ‘\0’
    // RECUERDE que el carácter ‘\0’ solo se encuentra en el arreglo, despues de usar gets
    for(x=0 ; oso[x]!= '\0' ; ++x)
    {
        aux = tolower(oso[x]); //Convierte la letra, esto se hace con el propósito de
        if(aux == 'a') //no preguntar también si oso[x] == 'A'
            ++cta;
        printf("%c", oso[x]) ; //Imprime carácter x carácter, también se puede usar putchar()
        putchar(oso[x]);
    }
    printf(" Las A's o a's encontradas fueron =%d\n", cta);

    return 0;
}