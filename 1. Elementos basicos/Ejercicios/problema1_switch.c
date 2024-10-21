// Importe por peso de animales
#include <stdio.h>
#include <ctype.h>

main()
{
    char ani;
    int num, peso, pesoAni;
    float importe;
    printf("Ferrocarriles S.A.\n");
    printf("Tipo Animal: ");
    scanf("%c",&ani);
    ani = tolower(ani);
    printf("#animales: ");
    scanf("%d",&num);

    if(num>0 && ani == 't' || ani == 'c' || ani == 'j')
    {
        switch (ani)
        {
        case 't':
            pesoAni = 140;
            printf("Nombre = TORTUGAS\n");
            break;
        case 'c':
            pesoAni = 210;
            printf("Nombre = CEBRAS\n");
            break;
        case 'j':
            pesoAni = 500;
            printf("Nombre = JIRAFAS\n");
            break;
        }

        peso = num * pesoAni;
        printf("Peso kgs= %d\n", peso);

        importe = (peso/100)*200;

        if(peso%100 >= 50)
            importe += 200;

        printf("A pagar= %.2f", importe);

    }
    else
    {
        printf("ERROR EN ALGUN DATO");
    }

}