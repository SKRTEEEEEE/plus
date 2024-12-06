#include <iostream>

int main(){
    int calificacion;
    std::cout << "Ingrese su calificacion: \n";
    std::cin >> calificacion;

    calificacion >= 60 ? std::cout << "Aprobado" : std::cout << "Suspendido";

    return 0;
}