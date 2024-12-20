#include <iostream>

int main(){
    std::string nombre = "Adan";
    int edad = 18;
    bool student = true;

    /*
    Todas estas variables tienen un espacio en la memoria, para saber que espacio ocupa, C++ utiliza direcciones de memoria.
    Para acceder utilizamos el &<variable>, en valor hexadecimal
    -> Si pasamos estos valores a decimal, nos da el espacio en memoria que ocupa cada variable de una manera legible. Podremos observar entonces como ha ido ocupando cada espacio de la memoria, dejando la cantidad de bytes correspondiente a la variable
    */

    std::cout << &nombre << std::endl;
    std::cout << &edad << std::endl;
    std::cout << &student << std::endl;

    return 0;
}