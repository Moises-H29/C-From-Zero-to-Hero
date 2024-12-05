#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define PI 3.1416

main() 
{
    int opcion;

    printf("\n\t\t\tM E N U\n");
    printf("================================================\n");
    printf("1 Determinacion de un numero Primo o No primo\n");
    printf("2 Obtiene serie de Ulam\n");
    printf("3 Importe por peso de animales\n");
    printf("4 Superficie y volumen de una esfera\n");
    printf("5 Triangulo de asteriscos recargado hacia la derecha\n");
    printf("6 Convertir cadena a minusculas\n");
    printf("7 Contar palabras en una cadena\n");
    printf("8 Imprimir abecedario en mayusculas y minusculas\n");
    printf("9 Programa 4 del Examen 2\n");
    printf("10 Programa 2 del Examen 2\n");
    printf("================================================\n");
    printf("SELECCIONAR OPCION: ");
    scanf("%d", &opcion);

    switch (opcion) 
    {
        case 1: 
        {
            int num, i, esPrimo = 1;

            printf("*** Determinar si un numero es Primo o NO ***\n");

            do
            {
                printf("Ingrese un numero mayor a 2: ");
                scanf("%d", &num);

                if (num <= 2) 
                    printf("El numero debe ser mayor a 2. Intente nuevamente.\n");
            }
            while (num <= 2);

            for (i = 2; i <= num / 2; i++) 
                if (num % i == 0) 
                    esPrimo = 0;

            if (esPrimo) 
                printf("El numero %d es primo.\n", num);
            else 
                printf("El numero %d NO es primo.\n", num);
            break;
        }
        case 2: 
        {
            int numero;

            printf("*** Serie de Ulam ***\n");

            do
            {
                printf("Numero: ");
                scanf("%d", &numero);
            }
            while (numero <= 0);

            printf("Serie:");

            do
            {
                if (numero % 2 == 1)
                    numero = (numero * 3) + 1;
                else
                    numero /= 2;

                printf(" %d", numero);
            }
            while (numero != 1);

            printf("\n");
            break;
        }
        case 3: 
        {
            char ani;
            int num, peso, pesoAni;
            float importe;

            printf("*** Importe por peso de animales ***\n");
            printf("Tipo Animal (t: Tortugas, c: Cebras, j: Jirafas): ");
            scanf(" %c", &ani);
            ani = tolower(ani);

            printf("#animales: ");
            scanf("%d", &num);

            if (num > 0 && (ani == 't' || ani == 'c' || ani == 'j')) 
            {
                switch (ani) 
                {
                    case 't':
                        pesoAni = 140;
                        printf("Nombre = TORTUGAS\n");
                        break;
                    case 'c':
                        pesoAni = 210;
                        printf("Nombre = CEBRAS\n");
                        break;
                    case 'j':
                        pesoAni = 500;
                        printf("Nombre = JIRAFAS\n");
                        break;
                }

                peso = num * pesoAni;
                printf("Peso kgs = %d\n", peso);

                importe = (peso / 100) * 200;

                if (peso % 100 >= 50)
                    importe += 200;

                printf("A pagar = %.2f\n", importe);
            } 
            else 
                printf("ERROR EN ALGUN DATO\n");
            break;
        }
        case 4: 
        {
            float radio, superficie, volumen;

            printf("*** Superficie y volumen de una esfera ***\n");

            do
            {
                printf("Ingrese el radio de la esfera (debe ser mayor a 0): ");
                scanf("%f", &radio);

                if (radio <= 0) 
                    printf("Error: el radio debe ser mayor a 0. Intente nuevamente.\n");
            }
            while (radio <= 0);

            superficie = 4 * PI * pow(radio, 2);
            volumen = (4.0 / 3) * PI * pow(radio, 3);

            printf("Superficie = %.2f\n", superficie);
            printf("Volumen = %.2f\n", volumen);
            break;
        }
        case 5: 
        {
            int n, i, j;

            printf("*** Triangulo de asteriscos recargado hacia la derecha ***\n");
            printf("Ingrese el numero de filas: ");
            scanf("%d", &n);

            for (i = 1; i <= n; i++) 
            {
                for (j = 1; j <= n - i; j++) 
                    printf("  ");
                for (j = 1; j <= i; j++) 
                    printf("* ");
                printf("\n");
            }
            break;
        }
        case 6:
        {
            char cadena[100];
            int i = 0;

            printf("*** Convertir cadena a minusculas ***\n");
            printf("Ingrese una cadena: ");
            gets(cadena);

            printf("Cadena en minusculas: ");
            while (cadena[i] != '\0') 
            {
                if (cadena[i] >= 'A' && cadena[i] <= 'Z') 
                    printf("%c", cadena[i] + 32);
                else 
                    printf("%c", cadena[i]);
                i++;
            }
            printf("\n");
            break;
        }
        case 7:
        {
            char cadena[100];
            int i = 0, palabras = 0;

            printf("*** Contar palabras en una cadena ***\n");
            printf("Ingrese una cadena: ");
            gets(cadena);

            while (cadena[i] != '\0') 
            {
                if (cadena[i] == ' ' && cadena[i + 1] != '\0') 
                    palabras++;
                i++;
            }

            if (cadena[0] != ' ' && cadena[0] != '\0') 
                palabras++;

            printf("La cadena contiene %d palabras.\n", palabras);
            break;
        }
        case 8:
        {
            char letra;

            printf("*** Imprimir abecedario en mayusculas y minusculas ***\n");

            for (letra = 'A'; letra <= 'Z'; letra++) 
                printf("%c %c\n", letra, letra + 32);
            break;
        }
        case 9:
        {
            int i, com0, err;
            float venta, com10 = 0, com17 = 0, com22 = 0;
            com0 = err = 0;
            
            printf("RESUMEN DE COMISIONES\n");
            
            for (i = 1; i <= 20; i++) 
            {
                printf("Emp: ");
                scanf("%f", &venta);
                
                if (venta > 0)
                    if (venta >= 5000 && venta <= 10000)
                        com10 += venta * 0.1;
                    else if (venta > 10000 && venta <= 20000)
                        com17 += venta * 0.17;
                    else if (venta > 20000)
                        com22 += venta * 0.22;
                    else
                        com0++;
                else
                    err++;
            }
            printf("TOTAL DE COMISIONES X RANGO\n");
            printf("RANGO 1 = %.2f\n", com10);
            printf("RANGO 2 = %.2f\n", com17);
            printf("RANGO 3 = %.2f\n", com22);
            printf("SIN COMISION = %d\n", com0);
            printf("DATOS ERRONEOS = %d\n", err);
            break;
        }
        case 10:
        {
            char opc;
            int i, almacen = 0, planeacion = 0, control = 0, err = 0, tot;

            printf("*** Programa 2 del Examen 2 ***\n");

            for (i = 0; i < 500; i++) 
            {
                printf("Depto: ");
                scanf(" %c", &opc);
                opc = toupper(opc);

                if (opc == 'A' || opc == 'P' || opc == 'C') 
                {
                    switch (opc) 
                    {
                        case 'A':
                            almacen++;
                            break;
                        case 'P':
                            planeacion++;
                            break;
                        case 'C':
                            control++;
                            break;
                    }
                } 
                else 
                    err++;
            }

            tot = almacen + planeacion + control;

            printf("Total de Empleados por Categoria\n");
            printf("Almacen = %d\n", almacen);
            printf("Planeacion = %d\n", planeacion);
            printf("Control de Calidad = %d\n", control);
            printf("TOTAL DE EMPLEADOS A-P-C = %d\n", tot);
            printf("TOTAL DE EMPLEADOS CATEGORIA NO EXISTE = %d\n", err);
            break;
        }
        default: 
        {
            printf("Opcion no valida. Intente de nuevo.\n");
            break;
        }
    }
}
