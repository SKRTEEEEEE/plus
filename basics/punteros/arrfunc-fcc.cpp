#include <iostream>
// int sumOfElements(int A[], int size)
int sumOfElements(int* arr, int size)
{
    int i, sum = 0;
    std::cout << "SOC - Size of A: " << sizeof(arr) << " Size of A[0]: "<< sizeof(arr[0]) << std::endl; // No puede saber la longitud de A/arr, ya que este realmente es un puntero y no el array completo. Los arrays son pasados por referencia- ¡siempre!, por lo que el tamaño del array no es conocido.
    for(i=0;i<size;i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(int);
    std::cout << "Main - Size of A: " << sizeof(A) << " Size of A[0]: "<< sizeof(A[0]) << std::endl;
    int total = sumOfElements(A,size);
    std::cout << total << std::endl;
    return 0;
}