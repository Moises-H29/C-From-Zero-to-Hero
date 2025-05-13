#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <float.h>

typedef struct sucursal {
    int coordenadaX;
    int coordenadaY;
    char nombre[25];
} sucursal;

typedef struct cliente {
    int x;
    int y;
    float monto;
    char formaPago;
    char nombreCompleto[50];
} cliente;

void generarSucursales() {
    FILE *f = fopen("Magos.dat", "wb");
    if (f == NULL) {
        perror("No se pudo generar Magos.dat\n");
        return;
    }

    for (int i = 1; i <= 4; i++) {
        sucursal suc;
        suc.coordenadaX = rand() % 100 + 1;
        suc.coordenadaY = rand() % 100 + 1;
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
    for(i = 1; i <= 20; i++){
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

float distancia(int x1, int y1, int x2, int y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void generaDesignacion(char *archivo, char *nombreSucursal) {
    FILE *f = fopen(archivo, "wb");
    FILE *suc = fopen("Magos.dat", "rb");
    FILE *cli = fopen("ventas.dat", "rb");

    if (f == NULL || suc == NULL || cli == NULL) {
        perror("No se pudo abrir uno o más archivos");
        return;
    }

    sucursal s;
    cliente c;

    while (fread(&c, sizeof(cliente), 1, cli)) {
        float distMin = FLT_MAX;
        char nombre[25];

        rewind(suc);
        while (fread(&s, sizeof(sucursal), 1, suc)) {
            float d = distancia(s.coordenadaX, s.coordenadaY, c.x, c.y);
            if (d < distMin) {
                distMin = d;
                strcpy(nombre, s.nombre);
            }
        }

        if (strcmp(nombre, nombreSucursal) == 0) {
            fwrite(&c, sizeof(cliente), 1, f);
        }
    }

    fclose(f);
    fclose(suc);
    fclose(cli);
}

void leerArchivo(char *archivo) {
    FILE *f = fopen(archivo, "rb");
    if (f == NULL) {
        perror("No se pudo abrir el archivo para lectura\n");
        return;
    }

    cliente c;
    int contado = 0, meses = 0;

    printf("\n--- Clientes asignados a esta sucursal ---\n");

    while (fread(&c, sizeof(cliente), 1, f)) {
        printf("\nNombre: %s\nUbicación: (%d, %d)\nMonto: %.2f\nForma de Pago: %s\n",
               c.nombreCompleto, c.x, c.y, c.monto,
               (c.formaPago == 'P') ? "Contado" : "Meses sin intereses");

        if (c.formaPago == 'P') contado++;
        else if (c.formaPago == 'M') meses++;
    }

    printf("\n--- Resumen ---\n");
    printf("Total pagos de contado: %d\n", contado);
    printf("Total pagos a meses sin intereses: %d\n", meses);

    fclose(f);
}

int main() {
    srand(time(NULL));

    generarSucursales();
    generarClientes();

    printf("\nSeleccione la sucursal de la que quiere generar lista de designación:");
    printf("\n 1) Magos Primer Cuadrante");
    printf("\n 2) Magos Segundo Cuadrante");
    printf("\n 3) Magos Tercer Cuadrante");
    printf("\n 4) Magos Cuarto Cuadrante\n");

    int opc;
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            generaDesignacion("MagosPrimerCuadrante.dat", "Sucursal cuadrante 1");
            leerArchivo("MagosPrimerCuadrante.dat");
            break;
        case 2:
            generaDesignacion("MagosSegundoCuadrante.dat", "Sucursal cuadrante 2");
            leerArchivo("MagosSegundoCuadrante.dat");
            break;
        case 3:
            generaDesignacion("MagosTercerCuadrante.dat", "Sucursal cuadrante 3");
            leerArchivo("MagosTercerCuadrante.dat");
            break;
        case 4:
            generaDesignacion("MagosCuartoCuadrante.dat", "Sucursal cuadrante 4");
            leerArchivo("MagosCuartoCuadrante.dat");
            break;
        default:
            printf("\nNo existe la opción seleccionada\n");
            break;
    }

    return 0;
}
