#include <iostream>
int num = 3; // Variable global, se puede utilizar en todas las funciones. Prioriza la local si hay dos iguales.
void mostrarNumero();
int main() {
    int num = 1; // Variable local, solo se puede utilizar dentro de esta función
    // std::cout << num;
    std::cout << ::num << std::endl; // :: es el operador de resolución de ámbito, permite acceder a la variable global aunque haya una local con el mismo nombre
    mostrarNumero();
    return 0;
}   
void mostrarNumero() {
    int num = 2; // Variable local, solo se puede utilizar dentro de esta función
    std::cout << num; // Tampoco tiene acceso a la variable de main, ya que esa es local también
}