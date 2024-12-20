#include<iostream>

int main(){

    // std::string car[] = {"Corvette", "Mustang", "Audi"};

    // car[0] = "Camry";
    // // std::cout << car <<std::endl; //Devuelvo algo como: 0x3b5d9ff9e0, que es su variable de memoria

    // std::cout << car[0] <<std::endl;
    // std::cout << car[1] <<std::endl;
    // std::cout << car[2] <<std::endl;

    std::string cars[3]; //Solo es necesario definir el tamaño cuando no le asignamos valores
    cars[0] = "Camaro";
    cars[1] = "Mustang";
    
    std::cout << cars[0] <<std::endl;
    std::cout << cars[1] <<std::endl;
    std::cout << cars[2] <<std::endl;

    return 0;
}