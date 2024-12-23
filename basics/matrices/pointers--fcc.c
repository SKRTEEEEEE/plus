#include <stdio.h>

int main()
{
    int arr[2][3] = {
        {0,2,4},
        {1,3,5}
    };
    // int* p = arr;//✖️ devolverá un error de compilación - pq debemos indicar que es un puntero a un array de 3 elementos
    int(*p)[3] = arr;//✔️ esto devolverá la dirección de memoria del primer elemento del array

    printf("p: %p\n", p);
    printf("arr: %p\n", arr);
    printf("arr[0][0] (value %d) => *arr: %d, arr[0]: %d, &arr[0][0]: %d\n",arr[0][0], *arr, arr[0], &arr[0][0]);
    printf("arr[1][0] (value %d) => *(arr+1): %d, arr + 1: %d, &arr[1]: %d, arr[1], &arr[1][0]\n", arr[1][0], *(arr+1), arr + 1, &arr[1]);
    printf("arr[1][2] (value %d) => *(arr+1)+2: %d, arr[1]+2: %d, &arr[1][2]: %d\n", arr[1][2], *(arr+1)+2, arr[1]+2, &arr[1][2]);
    printf("arr[0][2] (value %d) => *(arr)+2: %d, arr[0]+2: %d, &arr[0][2]: %d\n *(*arr+2): %d", arr[0][2], *arr+2, arr[0]+2, &arr[0][2],*(*arr+2));


    // printf("\np[0]: %d\n p[1] (value %d): %d\n p[2] (value %d): %d\n", p[0], (*p)[1], p[1], (*p)[2], p[2]);❌
    // printf("\np[3] (value %d): %d\n",(*p)[3] , p[3]);
    // printf("\np[0] (value %d): %p\n p[1] (value %d): %p\n p[2] (value %d): %p\n", 
    //    (*p)[0], p[0],         // Primera fila: valor y dirección
    //    (*p+1)[0], p[1],       // Segunda fila: valor y dirección
    //    (*p+2)[0], p[2]);      // Tercera posición (fuera del array): valor y dirección
    return 0;
}