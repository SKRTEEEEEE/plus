#include <iostream>

int main() {
    char arr[] = "Hola";
    char *ptr = arr;

    // Imprimir el array usando el puntero
    std::cout << "Contenido del array: ";
    for (int i = 0; i < 4; i++) {
        std::cout << *(ptr + i); // usando aritmética de punteros, porque ptr apunta al primer elemento del array y al sumarle i, se accede a los siguientes elementos ya que el tipo de dato DEL PUNTERO es char
        // std::cout << ptr[i]; // usando notación de array
    }
    std::cout << std::endl;

    // Modificar el primer carácter del array
    ptr[0] = 'M';
    std::cout << "Array modificado: " << arr << std::endl;

    return 0;
}
