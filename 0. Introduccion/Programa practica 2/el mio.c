#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <float.h>
typedef struct sucursal{
    int coordenadaX;
    int coordenadaY;
    char nombre[25];
} sucursal;
typedef struct cliente{
    int x;
    int y;
    float monto;
    char formaPago;
    char nombreCompleto[50];
} cliente;

void generarSucursales(){
    FILE *f;
    f = fopen("Magos.dat","wb");
    if(f == NULL){
        perror("No se pudo generar Magos.dat\n");
        return;
    }
    int i;
    srand(time(NULL));
    for(i = 1; i <= 4; i++){
        sucursal suc;
        int x = rand() % 100 + 1;
        int y = rand() % 100 + 1;
        suc.coordenadaX = x;
        suc.coordenadaY = y;
        sprintf(suc.nombre, "Sucursal cuadrante %d", i);
        fwrite(&suc, sizeof(sucursal), 1, f);
    }
    fclose(f);

}
void generarClientes(){
    FILE *f;
    f = fopen("ventas.dat","wb");
    if(f == NULL){
        perror("No se pudo generar ventas.dat\n");
        return;
    }
    int i;
    for(i = 1; i <= 3; i++){
        cliente c;
        int x = rand() % 100 + 1;
        int y = rand() % 100 + 1;
        float monto;
        char pago;
        char nombre[50];
        c.x = x;
        c.y = y;

        printf("\nNombre del cliente: ");
        gets(nombre);
        strcpy(c.nombreCompleto,nombre);

        printf("\nIngrese el monto total: ");
        scanf("%f",&monto);
        c.monto = monto;

        printf("\nIngrese forma de pago: \nPresione 'P' para Pago de Contado\nPresione 'M' Pagos a Meses sin Intereses ");
        scanf(" %c",&pago);
        c.formaPago = pago;

        fwrite(&c, sizeof(cliente), 1, f);
        getchar();
    }
    fclose(f);

}

float distancia(int x1,int y1,int x2,int y2){
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

void generaDesignacion(char *archivo, char *nombre) {
    FILE *f, *suc, *cli;
    f = fopen(archivo, "wb");
    suc = fopen("Magos.dat", "rb");
    cli = fopen("ventas.dat", "rb");

    if (f == NULL || suc == NULL || cli == NULL) {
        perror("No se abrio el archivo");
        return;
    }

    sucursal s;
    cliente c;

    while (fread(&c, sizeof(cliente), 1, cli)) {
        float dist = FLT_MAX;
        char nom[25] = "";

        rewind(suc);

        while (fread(&s, sizeof(sucursal), 1, suc)) {
            float d = distancia(s.coordenadaX, s.coordenadaY, c.x, c.y);
            if (d < dist) {
                dist = d;
                strcpy(nom, s.nombre);
            }
        }

        if (strcmp(nom, nombre) == 0) {
            fwrite(&c, sizeof(cliente), 1, f);
        }
    }

    fclose(suc);
    fclose(cli);
    fclose(f);
}

void leerArchivo(){
    FILE *f;
    f = fopen("MagosPrimerCuadrante.dat","rb");
    if(f == NULL){
        perror("No se pudo generar ventas.dat\n");
        return;
    }
    cliente c;
    while (fread(&c, sizeof(cliente), 1, f)) {
        printf("\n\nUbicacion: (%d, %d)\nMonto: %.2f\nForma Pago: %c\nNombre: %s",c.x,c.y,c.monto,c.formaPago,c.nombreCompleto);
    }

    fclose(f);
    
}

int main(){
    generarSucursales();
    generarClientes();
    srand(time(NULL));
    printf("\nSeleccione la sucursal de la que quiere generar lista de designacion");
    printf("\n 1) Magos Primer Cuadrante");
    printf("\n 2) Magos Segundo Cuadrante");
    printf("\n 3) Magos Tercer Cuadrante");
    printf("\n 4) Magos Cuarto Cuadrante");
    int opc;
    scanf("%d",&opc);

    switch(opc){
        case 1:
            generaDesignacion("MagosPrimerCuadrante.dat", "Sucursal cuadrante 1");
            leerArchivo();
            break;
        case 2:
            generaDesignacion("MagosSegundoCuadrante.dat", "Sucursal cuadrante 2");
            leerArchivo();
            break;
        case 3:
            generaDesignacion("MagosTercerCuadrante.dat", "Sucursal cuadrante 3");
            leerArchivo();
            break;
        case 4:
            generaDesignacion("MagosCuartoCuadrante.dat", "Sucursal cuadrante 4");
            leerArchivo();
            break;
        default:
            printf("\nNo existe la opcion señalada");
            break;
    }
    return 0;
}