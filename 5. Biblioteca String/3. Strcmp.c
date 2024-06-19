//* strcmp(Cadena1, Cadena2)
//* Compara 2 cadenas de texto caracter a caracter, es case-sensitive (sensible a mayúsculas y
//* minúsculas). Cuando se encuentra una diferencia, esta función devuelve un valor entero
//* correspondiente a la diferencia de valor decimal según el código ASCII. El cual corresponde a
//* la siguiente tabla.


//?   Si Cadena1 es             Entonces devuelve
//? Igual que Cadena2                   0
//? Mayor que Cadena2                 n > 0
//? Menor que Cadena2                 n < 0

#include <stdio.h>
#include <string.h> //? Recuerda incluir la nueva biblioteca
#include <stdlib.h> //* Libreria para funcion exit()


int main() {

char ClaveSecreta[] = "Hola";
char UsuarioDigito[128];
int IntentosRestantes = 3;

do{
    printf("\n\n Escribe la clave secreta: ");
    fflush(stdin);
    scanf("%s",&UsuarioDigito);

    //! Validacion de Contraseña

    if (strcmp(ClaveSecreta,UsuarioDigito) == 0){
        printf("\nBienvenido al sistema");
        break;
    }else{
        IntentosRestantes--;
        if(IntentosRestantes == 0){
            printf("Ha excedido el numero de intentos permitidos\n");
            exit(-1);
        }
        printf("Clave Secreta Incorrecta, le quedan: %i intentos",IntentosRestantes);
    }
} while (IntentosRestantes > 0);

printf("\nHa accedido al sistema");

    return 0;
}