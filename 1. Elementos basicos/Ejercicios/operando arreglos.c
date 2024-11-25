#include <stdio.h>
#define T 10

int main(){

    int arr1[T] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[T] = {2,4,6,8,10,12,14,16,18,20};
    int arr3[T], i,j;

    for(i=0, j=T-1; i<T; i++, j--)
    {
        arr3[i] = arr1[i] + arr2[j];
    }

    for (i = 0; i < T; i++)
    {
        printf("%d\n",arr3[i]);
    }
    

    return 0;
}