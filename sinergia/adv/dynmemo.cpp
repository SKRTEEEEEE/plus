#include <iostream>

int main(){

    /*
    Utilizamos new, para utilizar memoria dinamica, es esa que se asignara una vez el programa esta compilado, y en ejecución.
    Asignamos memoria en el monticulo en vez de en el stack.

    DEBEMOS->Utilizamos delete, para liberar la memoria dinamica, una vez que ya no la necesitamos. (siempre que usemos new deberiamos usar delete)
    */

    int *pNumero = NULL;
    pNumero = new int;

    *pNumero = 8;

    std::cout << "Direccion de memoria: " << pNumero << std::endl;
    std::cout << "Valor de memoria: " << *pNumero << std::endl;

    delete pNumero;

    return 0;
}