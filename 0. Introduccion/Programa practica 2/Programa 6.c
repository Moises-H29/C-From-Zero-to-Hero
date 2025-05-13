#include <stdio.h>
#include <stdlib.h>
int main(){

    int *ptr1, *ptr2, *ptr3;

    
    ptr1 = malloc(sizeof(int));
    ptr2 = malloc(sizeof(int));
    ptr3 = malloc(sizeof(int));

    *ptr1 = 10;
    *ptr2 = 20;

    printf("\nAntes del intercambio de contenidos:\n");
    printf("*ptr1 -> %d\n",*ptr1);
    printf("*ptr2 -> %d\n",*ptr2);
    printf("*ptr3 -> %d\n",*ptr3);

    *ptr3 = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *ptr3;

    printf("\nDespues del intercambio de contenidos:\n");
    printf("*ptr1 -> %d\n",*ptr1);
    printf("*ptr2 -> %d\n",*ptr2);
    printf("*ptr3 -> %d\n",*ptr3);

    free(ptr1);
    free(ptr2);
    free(ptr3);

    return 0;
}