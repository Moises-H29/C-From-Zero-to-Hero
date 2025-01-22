/* srand(time(NULL));
variable = limiteInferior + rand()%((limiteSuperior + 1) - limiteInferior)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void funcionAleatoria();

int main(){

    funcionAleatoria();

    return 0;
}

void funcionAleatoria(){

    int num;
    srand(time(NULL));

    num = 1 + rand()%((10 - 1) - 1);
    printf("%d",num);

}