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

float detMatrix(int n, float mat[T][T]) {
    if (n == 1) {
        return mat[0][0]; // Determinante de una matriz 1x1
    }
    if (n == 2) {
        return (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]); // Fórmula para 2x2
    }

    float det = 0;
    float subMat[T][T];

    for (int col = 0; col < n; col++) {
        // Construir la submatriz excluyendo la primera fila y la columna actual
        int subi = 0;
        for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
                if (j == col) continue; // Saltar la columna actual
                subMat[subi][subj] = mat[i][j];
                subj++;
            }
            subi++;
        }
        // Recursión y alternar signo
        det += (col % 2 == 0 ? 1 : -1) * mat[0][col] * detMatrix(n - 1, subMat);
    }

    return det;
}

// Función para calcular la matriz de cofactores
void cofactorMatrix(int n, float mat[T][T], float cof[T][T]) {
    float subMat[T][T];

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            int subi = 0;
            for (int i = 0; i < n; i++) {
                if (i == row) continue; // Saltar fila actual
                int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == col) continue; // Saltar columna actual
                    subMat[subi][subj] = mat[i][j];
                    subj++;
                }
                subi++;
            }
            // Cofactor con alternancia de signos
            cof[row][col] = ((row + col) % 2 == 0 ? 1 : -1) * detMatrix(n - 1, subMat);
        }
    }
}

// Función para transponer una matriz
void transposeMatrix(int n, float mat[T][T], float trans[T][T]) {
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            trans[col][row] = mat[row][col];
        }
    }
}

// Función para calcular la inversa de una matriz
int invMatrix(int n, float mat[T][T], float inverse[T][T]) {
    float det = detMatrix(n, mat);
    
    if (det == 0) {
        printf("\nLa matriz no tiene inversa (determinante = 0).\n");
        return 0; // Indica que la matriz no es invertible
    }

    float cof[T][T], adj[T][T];

    // Calcular la matriz de cofactores
    cofactorMatrix(n, mat, cof);
    
    // Calcular la adjunta (transpuesta de la matriz de cofactores)
    transposeMatrix(n, cof, adj);

    // Calcular la inversa dividiendo cada elemento de la adjunta por el determinante
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            inverse[row][col] = adj[row][col] / det;
        }
    }

    return 1; // Indica que la matriz es invertible
}

