#include <iostream>
/*
CLASSES SOBRECARGADAS
*/
class Pizza {
    public:
    std::string ingrediente1;
    std::string ingrediente2;   
    Pizza(std::string ingrediente) {
        ingrediente1 = ingrediente;
    }
    Pizza(std::string ingrediente1, std::string ingrediente2) {
        this->ingrediente1 = ingrediente1 ;
        this->ingrediente2 = ingrediente2;
    }
    Pizza(){
        this->ingrediente1 = "Mussarela";
        this->ingrediente2 = "Tomato";
    }
};

int  main()
{

    Pizza pizza1("Mussarela");
    Pizza pizza2("Mushroom", "Peperoni");
    Pizza pizza3;


    std::cout << "La pizza1 tiene 1 ingrediente: " << pizza1.ingrediente1 << std::endl;
    std::cout << "La pizza2 tiene 2 ingredientes: " << pizza2.ingrediente1 << " y " << pizza2.ingrediente2 << std::endl;
    std::cout << "La pizza3 tiene 2 ingredientes: " << pizza3.ingrediente1 << " y " << pizza3.ingrediente2 << std::endl;

    return 0;
}