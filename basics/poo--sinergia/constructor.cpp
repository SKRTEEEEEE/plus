#include <iostream>
class Estudiante {
    public:
        std::string nombre = "estudiante";
        int edad = 0;
        double promedio;
    
    Estudiante(std::string nombre, int x, double y){
        std::cout << "Constructor de la clase Estudiante\n";
        this->nombre = nombre;//Solo usamos this cuando haya duda con cual es el nombre(duplicidad)
        edad = x;
        promedio = y;
    }
};

class Auto {
    public:
        std::string marca;
        std::string modelo;
        int anio;
        std::string color;
    // public: -> si ponemos aquí el public no podemos acceder a los atributos desde fuera de la clase (Buena practica para controlar el func)
    Auto(std::string x, std::string y, int z, std::string c){
        marca = x;
        modelo = y;
        anio = z;
        color = c;
    }
};

int main() {
    
    Estudiante estudiante1("Juan", 24, 7.5);

    Auto auto1("Toyota", "Corolla", 2020, "Rojo");
    Auto auto2("Honda", "Civic", 2019, "Azul");

    std::cout << estudiante1.nombre << "\n";
    std::cout << estudiante1.edad << "\n";
    std::cout << estudiante1.promedio << "\n";

    std::cout << "Coche #1 de la marca " << auto1.marca << " y modelo " << auto1.modelo << " del año " << auto1.anio << " de color " << auto1.color << "\n";
    std::cout << "Coche #2 de la marca " << auto2.marca << " y modelo " << auto2.modelo << " del año " << auto2.anio << " de color " << auto2.color << "\n";

    return 0;
}