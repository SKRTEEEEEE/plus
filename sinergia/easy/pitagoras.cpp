#include <iostream>
#include <cmath>
int main(){
    double a,b,c;

    std::cout << "Ingresa el lado a del cuadrado: ";
    std::cin >> a;

    std::cout << "Ingresa el lado b del cuadrado: ";
    std::cin >> b;

    // a = pow(a,2);
    // b = pow(b,2);
    // c = sqrt(a+b);
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "La hipotenusa del cuadrado es: " << c << std::endl;

    return 0;
}