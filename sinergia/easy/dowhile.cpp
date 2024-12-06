#include <iostream>

int main(){
    int numero;
    do{
        std::cout << "Dime un numero entero positivo: ";
        std::cin >> numero;
    }while(numero < 0);
}