#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAM 7
typedef enum{
    imprime = 'a',
    primo,
    diago,
    salir
}opcion;

// Prototipos
void caratula();
int numeroAleatorio();
void llenar(int mac[TAM][TAM]);
void imprimir(int mac[TAM][TAM]);
int esPrimo(int n);
int primos(int mac[TAM][TAM]);
int diagonal(int mac[TAM][TAM]);

int main(){
    srand(time(NULL));
    time_t tiempoInicial, tiempoFinal;
	tiempoInicial = time(NULL);
    printf("BIENVENIDO A ARREGLO MAC\n");
    caratula();
    char resp='s';
    do
    {
        int mac[TAM][TAM];
        llenar(mac);
        printf("\nSeleccione la opcion deseada: "
                "\na) Imprimir"
                "\nb) Cambiar numeros primos"
                "\nc) Suma de diagonal principal"
                "\nd) Salir\n");
        opcion opc;
        scanf(" %c",&opc);
        printf("\nHas elegido: ");
        switch (opc)
        {
        case imprime:
            printf("Imprimir matriz\n\n");
            imprimir(mac);
            break;
        case primo:
            printf("Cambiar numeros primos\n\n");
            printf("Matriz original:\n");
            imprimir(mac);
            printf("\nMatriz modificada:\n");
            printf("\nLa cantidad de valores modificados es %d: \n",primos(mac));
            imprimir(mac);
            break;
        case diago:
            printf("Sumar diagonal principal\n\n");
            printf("Su matriz es: \n");
            imprimir(mac);
            printf("\nLa suma de su diagonal princpal es: %d",diagonal(mac));
            break;
        case salir:
            printf("Salir\n\n");
            printf("Hasta luego!\n");
            resp='N';
            break;
        default:
            printf("\nNo existe la opcion seleccionada, intente de nuevo");
            break;
        }
        if(resp=='S' || resp=='s'){
            printf("\n\nDesea volver a usar el sistema? (Presione S o s para continuar, cualquier otra letra para salir)  ");
            scanf(" %c",&resp);
        }

    } while (resp=='S' || resp=='s');
    
    
    tiempoFinal = time(NULL);
	
	printf("\n Hora de entrada: %s",asctime(localtime(&tiempoInicial)));
	printf("\n Hora de salida: %s",asctime(localtime(&tiempoFinal)));
	printf("\n Tiempo de permanencia: %4.2f seg",difftime(tiempoFinal,tiempoInicial));
    return 0;
}


void caratula(){
	printf("\nUniversidad Nacional Autonoma de Mexico"
			"\nFacultad de Estudios Superiores Acatlan"
			"\nLicenciatura en Matematicas Aplicadas y Computacion"
            "\nHernandez Pacheco Moises"
            "\nFlores Vidal Alan Miguel"
            "\nMartinez Gonzalez Christian"
            "\nSampayo Aguirre Daniela Fernanda"
			"\nProgramacion 2"
			"\nGrupo 2251\n\n");
}

int numeroAleatorio(){
    return 5 + rand()%(71 - 5);
}

void llenar(int mac[TAM][TAM]){
    int i, j;
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            mac[i][j] = numeroAleatorio();
        }
    }
}

void imprimir(int mac[TAM][TAM]){
    int i, j;
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            printf("[%d]\t",mac[i][j]);
        }
        printf("\n");
    }
}

int esPrimo(int n){
    if(n<2) return 0;

    int lim = sqrt(n);
    int i = 2;
    while(i<=lim){
        if(n%i==0) return 0;
        i++;
    }
    return 1;
}

int primos(int mac[TAM][TAM]){
    int i, j, cont=0;
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            if(esPrimo(mac[i][j])){
                mac[i][j] = -1;
                cont++;
            }
        }
    }
    return cont;
}

int diagonal(int mac[TAM][TAM]){
    int i, cont=0;
    for(i=0; i<TAM; i++){
        cont += mac[i][i];
    }
    return cont;
}