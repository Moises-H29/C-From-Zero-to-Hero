#include <stdio.h>
#define T 50
int main(){
    int m, n, i, j;
    printf("\n***Ingrese las dimensiones de su matriz***");
    printf("\nNumero de filas: ");
    scanf("%d",&m);
    printf("\nNumero de columnas: ");
    scanf("%d",&n);

    int mat1[T][T], mat2[T][T];

    for(i = 0; i<m; i++){
        for(j=0; j<n; j++){
            printf("(%d, %d): ",i+1,j+1);
            scanf("%f",&mat1[i][j]);
        }
    }
    for(i = 0; i<m; i++){
        for(j=0; j<n; j++){
            printf("[%d] ",mat1[i][j]);
        }
        printf("\n");
    }



    return 0;
}