#include <iostream>

int main(){
    int PCorrecta = 8;
    int PTotal = 10;

    //Si no podemos el double no funciona porque no puede dividir a 0.8
    double puntaje = PCorrecta / (double)PTotal * 100;

    std::cout << puntaje << std::endl;


}
// int main(){
//     double x = (int)3.14;
//     x += 2.178;
//     std::cout << x << std::endl;
// }