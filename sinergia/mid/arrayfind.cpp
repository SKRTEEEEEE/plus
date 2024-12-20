#include <iostream>

int buscarArreglo(int arreglo[], int tam, int num);

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tam = sizeof(numeros) / sizeof(int);
    int indice, miNum;

    std::cout << "Ingrese un numero a buscar: " << std::endl;
    std::cin >> miNum;

    indice = buscarArreglo(numeros, tam, miNum);
    if (indice == -1) {
        std::cout << "El numero " << miNum << " no se encuentra en el array " << std::endl;
    } else {
        std::cout << "El numero " << miNum << " se encuentra en el array en la posicion " << indice << std::endl;
    }

    return 0;
}

int buscarArreglo(int arreglo[], int tam, int num) {
    for (int i = 0; i < tam; i++) {
        if (arreglo[i] == num) {
            return i;  
        }
    }
    return -1; 
}
