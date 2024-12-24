#include <stdio.h>

int main()
{
    int arr[5] = {2,4,6,8,10};
    int* p = arr;
    printf("p: %p\n", p);//p es un puntero a la primera posición del array
    printf("arr: %p\n", arr);//arr es un puntero "implícito" a la primera posición del array
    printf("arr[0]: %d\n", arr[0]);
    printf("*arr: %d\n", *arr);//*arr es igual a arr[0] pq es un puntero "implícito" que apunta a la memoria primer elemento del array
    printf("*p: %d\n", *p);//*p es igual a arr[0] pq p apunta a la primera posición del array
    printf("*(a+2): %d\n", *(arr+2));//*(arr+2) es igual a arr[2] pq arr+2 es la dirección de memoria del tercer elemento del array
    printf("*(p+2): %d\n", *(p+2));//*(p+2) es igual a arr[2] pq p+2 es la dirección de memoria del tercer elemento del array
    return 0;
}