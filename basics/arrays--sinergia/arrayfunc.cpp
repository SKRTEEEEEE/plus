#include <iostream>
/*
#include <iostream>
double obtenerTotal(double precios[]);
int main(){
    double precios[] = {1.99, 2.99, 3.99, 4.99};
    double total = obtenerTotal(precios)
};

double obtenerTotal(double precios[]){
    double total = 0;
    for (int precio : precios){
        total += precio;
    }
    return total;
}
El problema en el código está en cómo se usa el **rango basado en `for`** (el `for-each` en C++). Este tipo de bucles sólo funciona con contenedores como `std::vector`, `std::array` y otros tipos de contenedores de la STL (Standard Template Library). Los arreglos tradicionales en C++ no se pueden utilizar directamente con la sintaxis del `for-each`.

La razón es que cuando pasas un arreglo de tipo `double[]`, no es un contenedor como `std::vector`, sino que es un puntero. C++ no puede inferir la longitud del arreglo en el `for-each` de manera directa.

### Solución alternativa avanzada:
```cpp
#include <iostream>
#include <vector>

double obtenerTotal(const std::vector<double>& precios);

int main(){
    std::vector<double> precios = {1.99, 2.99, 3.99, 4.99};
    double total = obtenerTotal(precios);
    std::cout << "Total: R$" << total << std::endl;
    return 0;
}

double obtenerTotal(const std::vector<double>& precios){
    double total = 0;
    for (double precio : precios){
        total += precio;
    }
    return total;
}
```

### Explicación:
Al usar un `std::vector`, puedes usar directamente el bucle `for-each`, ya que los vectores sí son contenedores con soporte para ese tipo de bucles.
*/
double obtenerTotal(double precios[], int tam);
int main(){
    double precios[] = {1.99, 2.99, 3.99, 4.99};
    int tam = sizeof(precios) / sizeof(double);
    double total = obtenerTotal(precios, tam); //Debemos pasar el tamaño del arreglo, ya que al pasar el arreglo como argumento, se convierte en un puntero y C++ no es capaz de inferir en el tamaño usando sizeOf o forEach
    std::cout << "Total: R$" << total << std::endl;
};

double obtenerTotal(double precios[], int tam){
    double total = 0;
    for (int i = 0; i < tam; i++){
        total += precios[i];
    }
    return total;
}
