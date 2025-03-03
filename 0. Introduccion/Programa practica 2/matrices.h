#ifndef MATRIX_OPERATIONS_H
#define MATRIX_OPERATIONS_H

#include <stdio.h>

#define T 50  // Tamaño máximo de la matriz

// Prototipos de funciones
void fillMatrix(int m, int n, float mat[T][T]);
void printMatrix(int m, int n, float mat[T][T]);
void addMatrix(int m, int n, float mat1[T][T], float mat2[T][T], float result[T][T]);
void subsMatrix(int m, int n, float mat1[T][T], float mat2[T][T], float result[T][T]);
void multMatrix(int m, int n, int p, int q, float mat1[T][T], float mat2[T][T], float result[T][T]);
void multEscalar(float a, int m, int n, float mat[T][T], float result[T][T]);
void transMatrix(int m, int n, float mat[T][T], float result[T][T]);

// Implementación de funciones

void fillMatrix(int m, int n, float mat[T][T]) {
    int row, col;
    for (row = 0; row < m; row++) {
        for (col = 0; col < n; col++) {
            printf("Elemento (%d, %d): ", row + 1, col + 1);
            scanf("%f", &mat[row][col]);
        }
    }
}

void printMatrix(int m, int n, float mat[T][T]) {
    int row, col;
    for (row = 0; row < m; row++) {
        for (col = 0; col < n; col++) {
            printf("%.2f ", mat[row][col]);
        }
        printf("\n");
    }
}

void addMatrix(int m, int n, float mat1[T][T], float mat2[T][T], float result[T][T]) {
    int row, col;
    for (row = 0; row < m; row++) {
        for (col = 0; col < n; col++) {
            result[row][col] = mat1[row][col] + mat2[row][col];
        }
    }
}

void subsMatrix(int m, int n, float mat1[T][T], float mat2[T][T], float result[T][T]) {
    int row, col;
    for (row = 0; row < m; row++) {
        for (col = 0; col < n; col++) {
            result[row][col] = mat1[row][col] - mat2[row][col];
        }
    }
}

void multMatrix(int m, int n, int p, int q, float mat1[T][T], float mat2[T][T], float result[T][T]) {
    int row, col, k;
    for (row = 0; row < m; row++) {
        for (col = 0; col < q; col++) {
            result[row][col] = 0;
            for (k = 0; k < n; k++) {
                result[row][col] += mat1[row][k] * mat2[k][col];
            }
        }
    }
}

void multEscalar(float a, int m, int n, float mat[T][T], float result[T][T]) {
    int row, col;
    for (row = 0; row < m; row++) {
        for (col = 0; col < n; col++) {
            result[row][col] = a * mat[row][col];
        }
    }
}

void transMatrix(int m, int n, float mat[T][T], float result[T][T]) {
    int row, col;
    for (row = 0; row < m; row++) {
        for (col = 0; col < n; col++) {
            result[col][row] = mat[row][col];
        }
    }
}

#endif  // MATRIX_OPERATIONS_H
