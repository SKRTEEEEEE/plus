#include <iostream>
// int sumOfElements(int A[], int size)
void multTwo(int* arr, int size)
{
    int i, sum = 0;
    for(i=0;i<size;i++){
        arr[i] = arr[i]*2;
    }
}
int main()
{
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(int);
    multTwo(A,size);
    for (int i = 0; i < size; i++)
    {
        std::cout << A[i] << std::endl;
    }
    return 0;
}