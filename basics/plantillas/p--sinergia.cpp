#include <iostream>
// 3 Funciones sobrecargadas iguales
// int max(int x, int y) {
//     return x > y ? x : y;
// }
// double max(double x, double y) {
//     return x > y ? x : y;
// }
// char max(char x, char y) {
//     return x > y ? x : y;
// }

template <typename T>
T max(T x, T y) {
    return x > y ? x : y;
}

// template <typename T, typename U>
// auto max(T x, U y) {
//     return x > y ? x : y;
// }

int main(){
    std::cout << max(3.1, 3.3) << std::endl;
    return 0;
}