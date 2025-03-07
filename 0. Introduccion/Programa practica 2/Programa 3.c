// Programa 3
#include "matrices.h"
#include <time.h>
#define T 50
void caratula();  // Prototipo
// Procedimiento
void stop(){
	char w;
	printf("\n[PULSAR TECLA PARA CONTINUAR]\n");
	fflush(stdin);
	scanf("%c",&w);
}
enum opciones {
    suma = 1,
    resta,
    multiplicacion,
    multiplicacion_e,
    transpuesta,
    inversa,
    determinante,
    singular,
    salir
};
int main(){
	int opc;
	float x, y;
	time_t tiempoInicial, tiempoFinal;
	tiempoInicial = time(NULL);
	caratula();
	do{

        printf("\n==== MENU ====\n");
        printf("%d. Suma de matrices\n", suma);
        printf("%d. Resta de matrices\n", resta);
        printf("%d. Multiplicacion de matrices\n", multiplicacion);
        printf("%d. Multiplicacion escalar\n", multiplicacion_e);
        printf("%d. Transpuesta de una matriz\n", transpuesta);
        printf("%d. Inversa de una matriz\n", inversa);
        printf("%d. Determinante de una matriz\n", determinante);
        printf("%d. Verificar si una matriz es singular\n", singular);
        printf("%d. Salir\n", salir);
        printf("\nElija una opcion: ");
        scanf("%d", &opc);
        switch (opc) {
            case suma:
                {
                    int m, n;
                    float mat1[T][T], mat2[T][T], result[T][T];
            
                    printf("\n*** Has elegido Suma de matrices ***\n");
                    printf("\nIngresa el numero de filas: ");
                    scanf("%d", &m);
                    printf("\nIngresa el numero de columnas: ");
                    scanf("%d", &n);
            
                    printf("\nIngresar matriz A:\n");
                    fillMatrix(m, n, mat1);
                    printf("\nIngresar matriz B:\n");
                    fillMatrix(m, n, mat2);
            
                    // Realizar la suma de matrices
                    addMatrix(m, n, mat1, mat2, result);
            
                    // Imprimir resultado
                    printf("\n***** Suma *****\n\n");
                    printMatrix(m, n, mat1);
                    printf("\n + \n");
                    printMatrix(m, n, mat2);
                    printf("\n = \n");
                    printMatrix(m, n, result);
                }
                break;        
                case resta:
                {
                    int m, n;
                    float mat1[T][T], mat2[T][T], result[T][T];
            
                    printf("\n*** Has elegido Resta de matrices ***\n");
                    printf("\nIngresa el numero de filas: ");
                    scanf("%d", &m);
                    printf("\nIngresa el numero de columnas: ");
                    scanf("%d", &n);
            
                    printf("\nIngresar matriz A:\n");
                    fillMatrix(m, n, mat1);
                    printf("\nIngresar matriz B:\n");
                    fillMatrix(m, n, mat2);
            
                    // Realizar la resta de matrices
                    subsMatrix(m, n, mat1, mat2, result);
            
                    // Imprimir resultado
                    printf("\n***** Resta *****\n\n");
                    printMatrix(m, n, mat1);
                    printf("\n - \n");
                    printMatrix(m, n, mat2);
                    printf("\n = \n");
                    printMatrix(m, n, result);
                }
                break;
            
            case multiplicacion:
                {
                    int m, n, p, q;
                    float mat1[T][T], mat2[T][T], result[T][T];
            
                    printf("\n*** Has elegido Multiplicacion de matrices ***\n");
                    printf("\nIngresa las dimensiones de la primera matriz (filas columnas): ");
                    scanf("%d %d", &m, &n);
                    printf("\nIngresar matriz A:\n");
                    fillMatrix(m, n, mat1);
            
                    printf("\nIngresa las dimensiones de la segunda matriz (filas columnas): ");
                    scanf("%d %d", &p, &q);
                    printf("\nIngresar matriz B:\n");
                    fillMatrix(p, q, mat2);
            
                    // Verificar si la multiplicacion es posible
                    if (n != p) {
                        printf("\nNo se pueden multiplicar matrices de dimensiones %dx%d y %dx%d.\n", m, n, p, q);
                    } else {
                        // Realizar la multiplicacion
                        multMatrix(m, n, p, q, mat1, mat2, result);
            
                        // Imprimir resultado
                        printf("\n***** Multiplicacion *****\n\n");
                        printMatrix(m, n, mat1);
                        printf("\n * \n");
                        printMatrix(p, q, mat2);
                        printf("\n = \n");
                        printMatrix(m, q, result);
                    }
                }
                break;
            
            case multiplicacion_e:
                {
                    int m, n;
                    float escalar;
                    float mat[T][T], result[T][T];
            
                    printf("\n*** Has elegido Multiplicacion escalar ***\n");
                    printf("\nIngresa el numero de filas: ");
                    scanf("%d", &m);
                    printf("\nIngresa el numero de columnas: ");
                    scanf("%d", &n);
                    printf("\nIngresar matriz:\n");
                    fillMatrix(m, n, mat);
            
                    printf("\nIngrese el escalar: ");
                    scanf("%f", &escalar);
            
                    // Realizar la multiplicacion escalar
                    multEscalar(escalar, m, n, mat, result);
            
                    // Imprimir resultado
                    printf("\n***** Multiplicacion por escalar *****\n\n");
                    printf("%.2f * \n", escalar);
                    printMatrix(m, n, mat);
                    printf("\n = \n");
                    printMatrix(m, n, result);
                }
                break;
            
            case transpuesta:
                {
                    int m, n;
                    float mat[T][T], result[T][T];
            
                    printf("\n*** Has elegido Transpuesta de una matriz ***\n");
                    printf("\nIngresa el numero de filas: ");
                    scanf("%d", &m);
                    printf("\nIngresa el numero de columnas: ");
                    scanf("%d", &n);
                    printf("\nIngresar matriz:\n");
                    fillMatrix(m, n, mat);
            
                    // Realizar la transposicion
                    transMatrix(m, n, mat, result);
            
                    // Imprimir resultado
                    printf("\n***** Transpuesta *****\n\n");
                    printMatrix(m, n, mat);
                    printf("\nTranspuesta:\n");
                    printMatrix(n, m, result);
                }
                break;            
                case inversa:
                {
                    int n;
                    float mat[T][T], inverse[T][T];
            
                    printf("\n*** Has elegido Inversa de una matriz ***\n");
                    printf("\nIngresa el tamanio de la matriz cuadrada (n x n): ");
                    scanf("%d", &n);
            
                    if (n <= 0 || n > T) {
                        printf("\nTamanio invalido.\n");
                        break;
                    }
            
                    printf("\nIngresar matriz:\n");
                    fillMatrix(n, n, mat);
            
                    if (invMatrix(n, mat, inverse)) {
                        printf("\n***** Matriz Inversa *****\n\n");
                        printMatrix(n, n, inverse);
                    }
                }
                break;            
            case determinante:
                {
                    int n;
                    float mat[T][T];
                    printf("\n*** Has elegido Determinante de una matriz ***\n");
                    printf("\nIngresa el tamanio de la matriz cuadrada (n x n): ");
                    scanf("%d", &n);
            
                    printf("\nIngresar matriz:\n");
                    fillMatrix(n, n, mat);
            
                    float det = detMatrix(n, mat);
                    printf("\nDeterminante: %.2f\n", det);
                }
                break;
            case singular:
                {
                    int n;
                    float mat[T][T];
                    printf("\nHas elegido Verificar si una matriz es singular.\n");
                    printf("\nIngresa el tamanio de la matriz cuadrada (n x n): ");
                    scanf("%d", &n);
            
                    printf("\nIngresar matriz:\n");
                    fillMatrix(n, n, mat);
            
                    float det = detMatrix(n, mat);
                    det == 0 ? printf("\nMATRIZ SINGULAR") : printf("\nMATRIZ NO SINGULAR");
                }
                break;
            case salir:
                printf("\nSaliendo del programa...\n");
                break;
            default:
                printf("\nOpcion no valida, intenta de nuevo.\n");
        }
    }while(opc!=salir);


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
			"\nGrupo 2251");
}