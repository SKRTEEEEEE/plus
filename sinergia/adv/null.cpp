#include <iostream>

int main()
{
//Valor Nulo -> un valor especial que significa que no tiene valor
//NULL -> Es un valor especial que significa que no tiene valor

//nullptr -> Esta palabra esta reservada para indicar un puntero nulo

int *puntero = nullptr;
int x = 123;
puntero = &x;

std::cout << "El valor de x es: " << x << std::endl;
std::cout << "La direccion de &x es: " << &x << std::endl;
if(puntero != nullptr) // Es muy buena practica, cuando trabajamos con punteros nulos comprobar siempre que el puntero esta asignado antes de utilizar-lo -> Ya que utilizar punteros nulos trae comportamientos indefinidos
{
std::cout << "El valor de *puntero es: " << *puntero << std::endl;
std::cout << "La direccion de puntero es: " << puntero << std::endl;
}

return 0;

}