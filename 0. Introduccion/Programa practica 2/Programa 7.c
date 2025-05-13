#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct pers{
    char nombre[20];
    struct pers *next;
}persona;
typedef struct nums{
    float cal;
    struct nums *next;
}numero;
typedef struct caja{
    persona *ptrA;
    numero *ptrB;
}cajonera;

int main(){

    cajonera *ptr1 = malloc(sizeof(cajonera));

    ptr1->ptrA = malloc(sizeof(persona));
    strcpy(ptr1->ptrA->nombre,"Juan");
    ptr1->ptrA->next = malloc(sizeof(persona));
    strcpy(ptr1->ptrA->next->nombre,"Rocio");
    ptr1->ptrA->next->next = NULL;

    printf("ptr1->ptrA->nombre->|%s|\n",ptr1->ptrA->nombre);
    printf("ptr1->ptrA->next->nombre->|%s|\n",ptr1->ptrA->next->nombre);
    printf("ptr1->ptrA->next->next->|NULL|\n\n");

    ptr1->ptrB = malloc(sizeof(numero));
    ptr1->ptrB->cal = 9.5;
    ptr1->ptrB->next = malloc(sizeof(numero));
    ptr1->ptrB->next->cal = 10.0;
    ptr1->ptrB->next->next = NULL;

    printf("ptr1->ptrB->cal->|%.2f|\n",ptr1->ptrB->cal);
    printf("ptr1->ptrB->next->cal->|%.2f|\n",ptr1->ptrB->next->cal);
    printf("ptr1->ptrB->next->next->|NULL|\n");
    
    free(ptr1->ptrB->next);
    free(ptr1->ptrB);
    free(ptr1->ptrA->next);
    free(ptr1->ptrA);
    free(ptr1);



    return 0;
}