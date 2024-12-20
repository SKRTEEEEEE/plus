#include <iostream>

/*
Algoritmo de Luhn

-----------------

1. Duplique cada segundo dígito de derecha a izquierda. Si el num duplicado tiene 2 dígitos, divide.
2. Sume todos los dígitos del paso 1.
3. Sume todos los dígitos impares de derecha a izquierda.
4. Sume los resultados de los pasos 2 y 3.
5. Si el resultado del paso 4 es divisible por 10, el número es válido; de lo contrario, no es válido.
*/
int obtenerDigito(const int numero);
int sumarDigImp(const std::string tarjeta);
int sumarDigPar(const std::string tarjeta);
int main()
{
    // 6011 0009 9013 9424
    // 6 1 0 0 9 1 9 2
    // 1 2 2 0 0 1 8 2 1 8 4 = 29
    // 0 1 0 9 0 3 4 4 = 21
    // 29 + 21 = 50 -> es divisible por 10, es válido
    
    int suma = 0;

    std::string numTarjeta;
    std::cout << "Ingrese el numero de tarjeta: ";
    std::cin >> numTarjeta;

    suma = sumarDigPar(numTarjeta) + sumarDigImp(numTarjeta);
    if(suma % 10 == 0)
    {
        std::cout << "Tarjeta valida" << std::endl;
    }
    else
    {
        std::cout << "Tarjeta invalida" << std::endl;
    }

  return 0;
}
int obtenerDigito(const int numero)
{
    return numero % 10 + (numero / 10 % 10);
}
int sumarDigImp(const std::string tarjeta)
{
    int suma = 0;
    for (int i = tarjeta.size() - 1; i >= 0; i -= 2)
    {
        suma += tarjeta[i] - '0';//Como en el ejemplo de abajo, utilizando el string lo devolvemos como int
    }
    return suma;
}
int sumarDigPar(const std::string tarjeta)
{
    int suma = 0;
    for (int i = tarjeta.size() - 2; i >= 0; i -= 2)
    {
        suma += obtenerDigito((tarjeta[i] - '0') * 2); // (tarjeta[i] - "0") => al pasar, nos da el equivalente al char en la tabla ascii, porque espera un int pero le llega un string o char, p.ej: 9 -> 57(dec) - 48(0 en dec)  = 9
    }
    return suma;
}