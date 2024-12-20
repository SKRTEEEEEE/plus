#include <iostream>

int main(){

    std::string nombre;
    nombre = "Alex";
    char letra;
    int position;

    nombre.clear(); // Limpia la variable
    nombre.append("is-me"); // Agrega al final de la variable
    letra=nombre.at(0); // Devuelve el caracter en la posicion 0
    nombre.insert(0, "@"); // Inserta en la posicion 0 el caracter @
    position=nombre.find("me"); // La posición de la primera palabra con la que concuerde
    nombre.erase(3, -1); // Eliminar cierta parte de un string
    std::cout << position << std::endl;

    return 0;
}