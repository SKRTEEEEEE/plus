#include <stdio.h>
#include <stdlib.h>

// int add(int a, int b) {
//     printf("Dirección de memoria de a: %p\n", &a);
//     return a + b;
// }
// int main() {
//     int x = 10;
//     int y = 20;
//     printf("Dirección de memoria de x: %p\n", &x);
//     int z = add(x, y); // en este caso estamos pasando por valor (call by value), osea estamos copiando el valor de x e y en una nueva dirección de memoria
//     printf("Suma: %d\n", z);
//     return 0;
// }
int* add(int* a, int* b) {
    printf("Dir de memoria de a -&a-: %p\n", &a);
    printf("Valor de a dentro de la func add -a-: %d\n", a);
    printf("Valor de la dir de memoria de a dentro de la func add -*a-: %p\n", *a);
    int c = (*a) + (*b);
    printf("Dir de memoria de c: %p\n", &c);
    return &c;
}
int main() {
    int x = 10;
    int y = 20;
    printf("Dir de memoria de x: %p\n", &x);
    int* p = add(&x, &y);
    printf("Suma: %d\n", *p);
    return 0;
}