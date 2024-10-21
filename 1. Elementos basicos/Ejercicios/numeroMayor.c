#include <stdio.h>
main()
{
    int num;
    printf("Ingrese numero: ");
    scanf("%d",&num);

    if(num>0)
    {
        printf("POSITIVO\n");
    }
    else
    {
        if(num<0)
        {
            printf("NEGATIVO\n");
        }
        else
        {
            printf("NULO\n");
        }
    }

}