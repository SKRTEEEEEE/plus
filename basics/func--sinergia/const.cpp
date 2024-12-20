#include <iostream>
void imprimir(const std::string &nombre,const int &edad);
int main(){

    std::string nombre = "Alex";
    int edad = 30;
    imprimir(nombre, edad);
    return 0;
}
void imprimir(const std::string &nombre, const int &edad){
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
}