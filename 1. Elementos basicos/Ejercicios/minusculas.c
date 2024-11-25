#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#define T 100

int main(){

    int i;

    char cadena[T];

    printf("Cadena: ");

    gets(cadena);

    for(i=0; cadena[i]!='\0'; i++)
    {
        cadena[i] = tolower(cadena[i]);
    }
    puts(cadena);




    return 0;
}