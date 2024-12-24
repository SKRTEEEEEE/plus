#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; // goes on stack
    int *p;
    p = (int *)malloc(sizeof(int)); // goes on heap, y p contiene la dirección de memoria donde se encuentra el espacio reservado en el heap
    *p = 10; // asignamos el valor 10 al espacio de memoria reservado en el heap, solo por medios educativos
    // ❌ Si reasignamos p a otro valor (*p = 20), perderemos la dirección de memoria original y no podremos liberar la memoria reservada, para eso
    free(p); // liberamos la memoria reservada en el heap
    p = (int*)malloc(20*sizeof(int)); // reservamos un nuevo espacio de memoria en el heap
    p[0] = 1; // asignamos el valor 1 al primer elemento del array
    p[1] = 2; // asignamos el valor 2 al segundo elemento del array
    // etc...
    free(p); // liberamos la memoria reservada en el heap

}