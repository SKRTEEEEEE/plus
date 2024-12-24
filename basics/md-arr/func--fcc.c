#include <stdio.h>
void oneD(int *arr){}
// void twoD(int arr[][2]){}
void twoD(int (*arr)[2]){}
void threeD(int (*arr)[2][2]){}
// void threeD(int arr[][2][2]){}
int main()
{
    int a[2]={1,2};
    oneD(a);
    int b[2][2] = {{1,2},{3,4}};
    int c[2][3] = {{1,2,5},{3,4,6}};
    twoD(b);
    // twoD(c);// no funciona -> peligro: no se pueden pasar arrays de diferentes tamaños

    int arr[3][2][2] = {
        {{1,2},{3,4}},
        {{5,6},{7,8}},
        {{9,10},{11,12}}
    };
    threeD(arr);
    
    return 0;
}