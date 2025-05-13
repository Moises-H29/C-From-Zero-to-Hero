#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3
#define MAX 50
#define ARCHIVO "cuentas.txt"

typedef struct cuenta {
    int id;
    char nombre[MAX];
    char apellidos[MAX];
    char fechaNacimiento[MAX];
    float saldo;
} CuentaHabiente;

void limpiarBuffer() {
    while (getchar() != '\n');
}

void leerVector(CuentaHabiente *v, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("\n--- Cuenta %d ---\n", i + 1);
        
        printf("ID: ");
        while (scanf("%d", &v[i].id) != 1) {
            printf("Entrada inválida. Intenta de nuevo: ");
            limpiarBuffer();
        }
        limpiarBuffer();

        printf("Nombre: ");
        fgets(v[i].nombre, MAX, stdin);
        v[i].nombre[strcspn(v[i].nombre, "\n")] = 0;

        printf("Apellidos: ");
        fgets(v[i].apellidos, MAX, stdin);
        v[i].apellidos[strcspn(v[i].apellidos, "\n")] = 0;

        printf("Fecha de nacimiento (dd/mm/aaaa): ");
        fgets(v[i].fechaNacimiento, MAX, stdin);
        v[i].fechaNacimiento[strcspn(v[i].fechaNacimiento, "\n")] = 0;

        printf("Saldo: ");
        while (scanf("%f", &v[i].saldo) != 1) {
            printf("Entrada inválida. Intenta de nuevo: ");
            limpiarBuffer();
        }
        limpiarBuffer();
    }
}

void imprimirVector(CuentaHabiente *v, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("\n--- Cuenta %d ---\n", i + 1);
        printf("ID: %d\n", v[i].id);
        printf("Nombre: %s\n", v[i].nombre);
        printf("Apellidos: %s\n", v[i].apellidos);
        printf("Fecha de nacimiento: %s\n", v[i].fechaNacimiento);
        printf("Saldo: %.2f\n", v[i].saldo);
    }
}

void guardarArchivo(CuentaHabiente *v, int tam) {
    FILE *f = fopen(ARCHIVO, "w");
    if (!f) {
        perror("Error al abrir el archivo");
        return;
    }
    for (int i = 0; i < tam; i++) {
        fprintf(f, "%d,%s,%s,%s,%.2f\n", v[i].id, v[i].nombre, v[i].apellidos, v[i].fechaNacimiento, v[i].saldo);
    }
    fclose(f);
    printf("Datos guardados correctamente en el archivo.\n");
}

void mostrarArchivo() {
    FILE *f = fopen(ARCHIVO, "r");
    if (!f) {
        perror("Error al abrir el archivo");
        return;
    }
    char linea[200];
    printf("\nContenido del archivo:\n");
    while (fgets(linea, sizeof(linea), f)) {
        printf("%s", linea);
    }
    fclose(f);
}

void buscarRegistro() {
    int idBuscado;
    printf("Ingrese ID a buscar: ");
    while (scanf("%d", &idBuscado) != 1) {
        printf("Entrada inválida. Intenta de nuevo: ");
        limpiarBuffer();
    }
    limpiarBuffer();

    FILE *f = fopen(ARCHIVO, "r");
    if (!f) {
        perror("Error al abrir el archivo");
        return;
    }

    CuentaHabiente c;
    int encontrado = 0;
    while (fscanf(f, "%d,%[^,],%[^,],%[^,],%f\n", &c.id, c.nombre, c.apellidos, c.fechaNacimiento, &c.saldo) == 5) {
        if (c.id == idBuscado) {
            printf("\nRegistro encontrado:\n");
            printf("ID: %d\nNombre: %s\nApellidos: %s\nFecha Nacimiento: %s\nSaldo: %.2f\n",
                   c.id, c.nombre, c.apellidos, c.fechaNacimiento, c.saldo);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Registro no encontrado.\n");
    }

    fclose(f);
}

void modificarRegistro() {
    int idMod;
    printf("Ingrese ID del registro a modificar: ");
    while (scanf("%d", &idMod) != 1) {
        printf("Entrada inválida. Intenta de nuevo: ");
        limpiarBuffer();
    }
    limpiarBuffer();

    FILE *f = fopen(ARCHIVO, "r");
    if (!f) {
        perror("Error al abrir archivo");
        return;
    }

    CuentaHabiente temp[100];
    int count = 0;

    while (fscanf(f, "%d,%[^,],%[^,],%[^,],%f\n", &temp[count].id, temp[count].nombre, temp[count].apellidos, temp[count].fechaNacimiento, &temp[count].saldo) == 5) {
        count++;
    }
    fclose(f);

    int encontrado = 0;
    for (int i = 0; i < count; i++) {
        if (temp[i].id == idMod) {
            printf("Nuevo nombre: ");
            fgets(temp[i].nombre, MAX, stdin); temp[i].nombre[strcspn(temp[i].nombre, "\n")] = 0;
            printf("Nuevo apellido: ");
            fgets(temp[i].apellidos, MAX, stdin); temp[i].apellidos[strcspn(temp[i].apellidos, "\n")] = 0;
            printf("Nueva fecha nacimiento: ");
            fgets(temp[i].fechaNacimiento, MAX, stdin); temp[i].fechaNacimiento[strcspn(temp[i].fechaNacimiento, "\n")] = 0;
            printf("Nuevo saldo: ");
            while (scanf("%f", &temp[i].saldo) != 1) {
                printf("Entrada inválida. Intenta de nuevo: ");
                limpiarBuffer();
            }
            limpiarBuffer();
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("ID no encontrado.\n");
        return;
    }

    FILE *nuevo = fopen("temp.txt", "w");
    for (int i = 0; i < count; i++) {
        fprintf(nuevo, "%d,%s,%s,%s,%.2f\n", temp[i].id, temp[i].nombre, temp[i].apellidos, temp[i].fechaNacimiento, temp[i].saldo);
    }
    fclose(nuevo);
    remove(ARCHIVO);
    rename("temp.txt", ARCHIVO);

    printf("Registro modificado correctamente.\n");
}

void eliminarRegistro() {
    int idEliminar;
    printf("Ingrese ID a eliminar: ");
    while (scanf("%d", &idEliminar) != 1) {
        printf("Entrada inválida. Intenta de nuevo: ");
        limpiarBuffer();
    }
    limpiarBuffer();

    FILE *f = fopen(ARCHIVO, "r");
    if (!f) {
        perror("Error al abrir archivo");
        return;
    }

    CuentaHabiente temp[100];
    int count = 0;

    while (fscanf(f, "%d,%[^,],%[^,],%[^,],%f\n", &temp[count].id, temp[count].nombre, temp[count].apellidos, temp[count].fechaNacimiento, &temp[count].saldo) == 5) {
        count++;
    }
    fclose(f);

    FILE *nuevo = fopen("temp.txt", "w");
    int eliminado = 0;
    for (int i = 0; i < count; i++) {
        if (temp[i].id != idEliminar) {
            fprintf(nuevo, "%d,%s,%s,%s,%.2f\n", temp[i].id, temp[i].nombre, temp[i].apellidos, temp[i].fechaNacimiento, temp[i].saldo);
        } else {
            eliminado = 1;
        }
    }
    fclose(nuevo);
    remove(ARCHIVO);
    rename("temp.txt", ARCHIVO);

    if (eliminado)
        printf("Registro eliminado correctamente.\n");
    else
        printf("ID no encontrado.\n");
}

int main() {
    CuentaHabiente *vector = (CuentaHabiente *) malloc(TAM * sizeof(CuentaHabiente));
    int opcion;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Leer vector\n");
        printf("2. Imprimir vector\n");
        printf("3. Guardar en archivo\n");
        printf("4. Mostrar archivo\n");
        printf("5. Buscar en archivo\n");
        printf("6. Modificar archivo\n");
        printf("7. Eliminar registro\n");
        printf("8. Salir\n");
        printf("Elige una opcion: ");
        while (scanf(" %d", &opcion) != 1) {
            printf("Entrada inválida. Intenta de nuevo: ");
            limpiarBuffer();
        }

        switch (opcion) {
            case 1: leerVector(vector, TAM); break;
            case 2: imprimirVector(vector, TAM); break;
            case 3: guardarArchivo(vector, TAM); break;
            case 4: mostrarArchivo(); break;
            case 5: buscarRegistro(); break;
            case 6: modificarRegistro(); break;
            case 7: eliminarRegistro(); break;
            case 8: printf("Saliendo del programa.\n"); break;
            default: printf("Opción no válida.\n");
        }

    } while (opcion != 8);

    free(vector);
    return 0;
}
