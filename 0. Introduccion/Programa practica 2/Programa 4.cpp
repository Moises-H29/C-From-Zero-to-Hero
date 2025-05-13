#include<stdio.h>
#include<stdlib.h>
typedef struct nodo{
    int valor;
    struct nodo *next;
}nodo;

int main(){

    nodo *inic;
    inic = new nodo;
    inic->valor = 300;
    inic->next = new nodo;
    inic->next->valor = 80;
    inic->next->next = new nodo;
    inic->next->next->valor = 3;
    inic->next->next->next = inic;

    printf("inic -> |%d| -> |%d| -> |%d| -> |%d|",inic->valor,inic->next->valor,inic->next->next->valor,inic->next->next->next->valor);

    delete inic;
    delete inic->next;
    delete inic->next->next;

    return 0;
}