#include <iostream>

class Humano {
    public:
        std::string nombre;
        std::string trabajo = "desocupado";
        int edad;

        void comer(){
            std::cout << "Un humano come" << std::endl;
        };
        void beber(){
            std::cout << "Un humano bebe" << std::endl;
        }
        void dormir(){
            std::cout << "Un humano duerme" << std::endl;
        }
};

int main(){
    Humano humano1;
    humano1.nombre = "Juan";
    humano1.trabajo = "Programador";
    humano1.edad = 25;

    std::cout << "humano1.nombre: " << humano1.nombre << std::endl;

    humano1.comer();
    humano1.dormir();
    humano1.beber();
    return 0;
}