#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arrSize;
    printf("Enter the size of the array: ");
    scanf("%d", &arrSize);
    int* p = (int*)malloc(arrSize*sizeof(int));
    for (int i = 0; i < arrSize; i++)
    {
        p[i] = i+1;
    }
    int *p2 = (int*)realloc(p, 2*arrSize*sizeof(int));
    // int *p2 = (int*)realloc(p, (arrSize/2)*sizeof(int)); // si el nuevo tamaño es menor que el original, se truncarán los datos
    // int *p2 = (int*)realloc(p, 0); // esto es equivalente a free()
    // int *p2 = (int*)realloc(NULL, arrSize*sizeof(int)); // esto es equivalente a malloc()
    
    printf("prev block address = %d, new block address = %d\n", p, p2);

    for (int i = 0; i < 2*arrSize; i++) // si cambiamos el realloc() debemos ajustar el tamaño del bucle
    // for (int i = 0; i < arrSize; i++)
    {
        printf("%d ", p2[i]);
    }
    return 0;
}