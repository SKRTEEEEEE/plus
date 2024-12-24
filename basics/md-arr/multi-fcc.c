#include <stdio.h>

int main()
{
    int arr[3][2][2] = {
        {{1,2},{3,4}},
        {{5,6},{7,8}},
        {{9,10},{11,12}}
    };
    printf("arr: %d, *arr: %d, arr[0]: %d, &arr[0][0]: %d\n", arr, *arr, arr[0], &arr[0][0]);
    printf("*(arr[0][0]+1): %d", *(arr[0][0]+1));
    return 0;
}