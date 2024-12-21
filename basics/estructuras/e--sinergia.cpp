#include <iostream>

struct estudiante {
    std::string nombre;
    int edad;
    double promedio;
    bool inscrito;
};
int main() {
    estudiante estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;
    estudiante1.inscrito = true;

    std::cout << "Nombre: " << estudiante1.nombre << std::endl;
    std::cout << "Edad: " << estudiante1.edad << std::endl;
    std::cout << "Promedio: " << estudiante1.promedio << std::endl;
    std::cout << "Inscrito: " << estudiante1.inscrito << std::endl;

    estudiante estudiante2;

    estudiante2.nombre = "Maria";
    estudiante2.edad = 22;
    estudiante2.inscrito = false;

    std::cout << "Nombre: " << estudiante2.nombre << std::endl;
    std::cout << "Edad: " << estudiante2.edad << std::endl;
    std::cout << "Promedio: " << estudiante2.promedio << std::endl;
    std::cout << "Inscrito: " << estudiante2.inscrito << std::endl;


    return 0;
}