#include<iostream>
// void areaCuadrado(double longitud);
// int main()
// {
//     double data = 0.8;
//     areaCuadrado(data);
//     return 0;
// }
// void areaCuadrado(double longitud)
// {
//     double area = longitud * longitud;
//     std::cout << "El area del cuadrado es: " << area << std::endl;
// }
double areaCuadrado(double longitud);
double volumenCubo(double longitud);
int main()
{
    double data = 0.8;
    double area = areaCuadrado(data);
    double volumen = volumenCubo(data);
    std::cout << "El area del cuadrado es: " << area << std::endl;
    std::cout << "El volumen del cubo es: " << volumen << std::endl;
    return 0;
}
double areaCuadrado(double longitud)
{
    return longitud * longitud;
}
double volumenCubo(double longitud)
{
    return longitud * longitud * longitud;
}