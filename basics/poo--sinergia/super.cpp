#include <iostream>
class Forma{
    public:
    double area, volumen;
};
class Cubo : public Forma{
    public:
    double lado;
    Cubo(double l){
        lado = l;
        area = l * l * 6;
        volumen = l * l * l;
    }
};
class Esfera : public Forma{
    public:
    double radio;
    Esfera(double r){
        radio = r;
        area = 4 * 3.1416 * r * r;
        volumen = 4 / 3 * 3.1416 * r * r * r;
    }
};
int main()
{
    Cubo cubo1(16);

    Esfera esfera1(5);

    std::cout << "Area cubo1: " << cubo1.area << std::endl;
    std::cout << "Volumen cubo1: " << cubo1.volumen << std::endl;

    std::cout << "Area esfera1: " << esfera1.area << std::endl;
    std::cout << "Volumen esfera1: " << esfera1.volumen << std::endl;

    return 0;
}