#include <iostream>

int main(){
    std::string nombre;
    while(nombre.empty()){
        std::cout << "Ingresa tu nombre" << std::endl;
        std::getline(std::cin, nombre);
    }
    std::cout << "Hola " << nombre << std::endl;
    
    return 0;
}