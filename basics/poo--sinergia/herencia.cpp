#include <iostream>

class Animal
{
    public:
    bool vivo = true;
    void comer()
    {
        std::cout << "Comiendo.." << std::endl;
    }
};

class Perro : public Animal
{
    public:
    void ladrar()
    {
        std::cout << "Ladrando.." << std::endl;
    }
};
class Gato : public Animal
{
    public:
    void maullar()
    {
        std::cout << "Maullando.." << std::endl;
    }
};

int main()
{
    Perro perro1;
    std::cout << "perro1.ladrar(): ";
    perro1.ladrar(); 
    return 0;
}