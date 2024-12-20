#include <iostream>
#include <cmath>
/*
# - cmath

libreria para utilizar funciones matematicas
https://cplusplus.com/reference/cmath/

*/
int main() {
    double x = 3;
    double y = 4;
    double z;

    // z = std::max(x, y); //Nos devuelve el mayor
    // z = std::min(x, y); //Nos devuelve el menor
    // z = pow(x, y); // Elevar una base a la potencia
    // z = sqrt(9); // Raíz cuadrada
    // z = abs(-10); // Valor absoluto
    // z = round(3.14); // Redondear para abajo, hasta .4
    // z = ceil(3.14); // Redondear para arriba
    z = floor(3.14); // Redondear hacia abajo

    std::cout << z << std::endl;

    return 0;
}