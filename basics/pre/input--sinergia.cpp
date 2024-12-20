// cout << (operador de inserción)
// cin >> (operador de extracción)

#include <iostream>

// int main()
// {
//     std::string nombre;
//     int edad;
//     std::cout << "Ingrese su nombre completo: \n";
//     std::getline(std::cin, nombre); // Para obtener toda la linea de la terminal, incluido espacios - (<acción>,<variable>)
//     // std::cin >> nombre;
//     std::cout << "Ingrese su edad: \n";
//     std::cin >> edad;
//     std::cout << "Su nombre es: " << nombre << std::endl;
//     std::cout << "Su edad es: " << edad << std::endl;
//     return 0;
// }

/*
El problema del enfoque anterior esque por noseque del buffer no nos permite como terminar
*/  

int main()
{
    std::string nombre;
    int edad;

    std::cout << "Ingrese su edad: \n";
    std::cin >> edad;

    std::cout << "Ingrese su nombre completo: \n";
    std::getline(std::cin>>std::ws, nombre); // para evitar duplicidades de saltos de linea 
    
    std::cout << "Su nombre es: " << nombre << std::endl;
    std::cout << "Su edad es: " << edad << std::endl;
    return 0;
}