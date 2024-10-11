// Programa con fflush(stdin)
#include <stdio.h>
main() {
    float peso, pagar=100;
    char tipo;
    
    printf("Peso: ");
    scanf("%f", &peso); 
    printf("Tipo: ");
    fflush(stdin);
    scanf("%c", &tipo);

    if(peso > 0)
    {
        pagar = pagar * peso;
        printf("A pagar %.2f\n",pagar);
    }
    else
        printf("ALGUN DATO ERRONEO\n");

    if (tipo == 'T' || tipo == 't' || tipo == 'J' || tipo == 'j' || tipo == 'C' || tipo == 'c')
        printf("TIPO CORRECTO\n");
    else
        printf("TIPO INCORRECTO\n");

}
