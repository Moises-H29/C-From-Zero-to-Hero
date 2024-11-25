#include <stdio.h>
#include <string.h>
#define T 40
int main(){

    char cadena[T];
    int i, pal=0, letras=0;
    printf("*** Uso de cadenas y caracteres ***\n");

    printf("Digitar una Cadena: ");
    gets(cadena);

    for(i = 0; cadena[i]!='\0'; i++)
    {
        if(cadena[i]!=' ')
            letras++;
        else
        {
            if(letras==3)
                pal++;
            letras = 0;
        }
    }
    if(letras==3)
        pal++;

    printf("\nPalabras con 3 letras=%d",pal);

    return 0;
}