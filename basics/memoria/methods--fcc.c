/*
# allocate block of memory

- malloc -> void* malloc(size_t size); // returns a pointer to the block of memory or NULL if the request fails, the input will be the size of the block of memory in bytes in a unsigned integer

- calloc -> void* calloc(size_t num, size_t size); // returns a pointer to the block of memory or NULL if the request fails, the input will be the number of elements and the size of each element in bytes in a unsigned integer. The main difference between malloc and calloc is that calloc initializes the memory to zero

- realloc -> void* realloc(void* ptr, size_t size); // returns a pointer to the block of memory or NULL if the request fails, the input will be a pointer to the block of memory and the new size of the block of memory in bytes in a unsigned integer. If the new size is smaller than the original size, the data will be truncated. If the new size is larger than the original size, the data will be copied to the new block of memory and the old block of memory will be deallocated

# deallocate block of memory

- free




->###1 Después de usar free(), técnicamente no se debería poder acceder a la memoria:

1. La memoria ha sido devuelta al sistema operativo
2. Es comportamiento indefinido (undefined behavior) en C
3. Podría causar errores o crashes

Sin embargo, a veces se puede acceder porque:
- El sistema operativo no limpia inmediatamente esa memoria física
- La memoria virtual mantiene temporalmente los datos hasta que se reasigna

Para evitar problemas:
- Asignar NULL al puntero después de free()
- No intentar acceder a memoria liberada
- Usar herramientas como Valgrind para detectar errores de memoria

Ejemplo de uso correcto:

```c
free(p);
p = NULL; // Buena práctica
```
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arrSize;
    printf("Enter the size of the array: ");
    scanf("%d", &arrSize);
    // int arr[arrSize];// does not work, the size of the array must be a constant or be stored in the heap
    int* p = (int*)malloc(arrSize*sizeof(int));// works, the size of the array is stored in the heap
    // int *p = (int*)calloc(arrSize, sizeof(int));// works, the size of the array is stored in the heap and the memory is initialized to zero

    for (int i = 0; i < arrSize; i++)
    {
        p[i] = i+1; // recorremos los elementos del array y les asignamos un valor
    } // no es necesario, podemos observar que los elementos del array ya están inicializados a 0
    free(p); // liberamos la memoria reservada en el heap, pero p sigue apuntando a la dirección de memoria -> ###1
    p = NULL; // MUY Buena practica. Ahora si que petaria si intentamos acceder a la memoria liberada
    p[2] = 39; // no funciona, ya que la memoria ha sido liberada
    for (int i = 0; i < arrSize; i++)
    {
        printf("%d ", p[i]); // recorremos los elementos del array e imprimimos su valor
    }
}