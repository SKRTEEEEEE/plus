#include <iostream>

class Estufa {
    //Por defecto la classe es privada
    int temperatura = 0;
    public:
        int getTemperatura() {
            return temperatura;
        }
        void setTemperatura(int temp) {
            temperatura = temp;
        }
};

int main()
{
    Estufa estufa;
    estufa.setTemperatura(100);
    std::cout << estufa.getTemperatura() << std::endl;
    return 0;
}