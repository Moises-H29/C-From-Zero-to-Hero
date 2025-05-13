#include <stdio.h>
#include <conio.h>
typedef struct panaderia
{
    int idPan;
    char nombrePan[15];
    char ingrediente[15];
    float precioVenta;
    float precioCompra;
} pan;

void alto(){
    printf("\n\t[PULSE TECLA PARA CONTINUAR]");
    getch();
}

void leePan(pan &p){
    printf("\nIdentificador Pan: ");
    scanf("%d", &p.idPan);
    printf("\nTipo de Pan: ");
    fflush(stdin);
    gets(p.nombrePan);
    printf("\nIngrediente Principal: ");
    gets(p.ingrediente);
    printf("\nPrecio Venta: ");
    scanf("%f", &p.precioVenta);
    printf("\nPrecio Compra: ");
    scanf("%f", &p.precioCompra);
}

void imprimePan(pan p){
    printf("\n\nIdentificador Pan: %d",p.idPan);
    printf("\nTipo de Pan: %s",p.nombrePan);
    printf("\nIngrediente Principal: %s",p.ingrediente);
    printf("\nPrecio Venta: %.2f",p.precioVenta);
    printf("\nPrecio Compra: %.2f",p.precioCompra);
}

void almacenaPan(pan p){
    FILE *arch;
    arch = fopen("C:/panaderia/panes.dat","a");
    if(arch == NULL){
        printf("\nError al acceder a C:/panaderia/panes.dat");
        alto();
        return;
    }
    fwrite(&p,sizeof(pan),1,arch);
    fclose(arch);
    printf("\n[PAN ALMACENADO CON EXITO]");
}

void listaRegistroPanes(){
    FILE *arch;
    pan aux;
    arch = fopen("C:/panaderia/panes.dat","r");
    if(arch == NULL){
        printf("\nError al acceder a C:/panaderia/panes.dat");
        alto();
        return;
    }
    while(fread(&aux,sizeof(pan),1,arch)){
        imprimePan(aux);
    }
    fclose(arch);
    alto();
}

int main(){

    pan pancito;
    leePan(pancito);
    imprimePan(pancito);
    alto();
    almacenaPan(pancito);
    listaRegistroPanes();

    return 0;
}