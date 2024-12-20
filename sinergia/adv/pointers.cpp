#include <iostream>
/*
# Punteros
- Es una variable (A) que almacena la dirección de memoria de otra variable (B).

- & -> operador de dirección
- * -> operador de referencia o indirección

El puntero debe ser del mismo tipo de la variable a la que apunta!

*/
int main(){

    std::string nombre = "Juan";
    int edad = 20;  
    std::string pizzasGratis [5] = {"Pizza 1", "Pizza 2", "Pizza 3", "Pizza 4", "Pizza 5"}; 

    std::string *pNombre = &nombre;
    int *pEdad = &edad;
    std::string *pPizzasGratis = pizzasGratis; // Recordemos que los arrays devuelven la dirección por defecto

    std::cout << "&nombre: " << &nombre << std::endl;
    std::cout << "pNombre: " << pNombre << std::endl;
    std::cout << "*pNombre: " << *pNombre << std::endl; // Contenido del puntero

    std::cout << "&edad: " << &edad << std::endl;
    std::cout << "pEdad: " << pEdad << std::endl;
    return 0;
}