#include <iostream>

int main(){
    double numero = 2.5;
    std::string nombre = "Adan";
    char nota = 'F';
    bool valor = true;
    char calificaciones[]={'A','B','C','D','E'};
    std::string estudiantes[]={"Adan","Ana","Juan","Pedro"};

    std::cout << sizeof(numero) << " bytes" << std::endl; //Tamaño en bytes de este parametro
    std::cout << sizeof(nombre) << " bytes" << std::endl; 
    std::cout << sizeof(nota) << " bytes" << std::endl;
    std::cout << sizeof(valor) << " bytes" << std::endl;
    std::cout << sizeof(calificaciones) << " bytes" << std::endl; //char -> 1 bytes, 5char en array -> 5 bytes
    std::cout << sizeof(estudiantes) << " bytes" << std::endl; //string -> 32 bytes, 4string en array -> 128 bytes

    return 0;
}