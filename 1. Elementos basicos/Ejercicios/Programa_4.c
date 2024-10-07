// Hernandez Pacheco Moises
#include <stdio.h>

main(){

    int a, x, sa = 23, po = 32;

    printf("Practica\n");
    printf("Dato = ");
    scanf("%d %d",&a,&x);
    
    sa = sa + po + a + x;

    if (sa > 1000)
        printf("Mayor\n");
    else
        printf("Menor\n");
    
    printf("Hernandez Pacheco Moises\n");
    
}