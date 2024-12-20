#include <iostream>

int main(){

    std::string alumns[] = {"Maria", "Jose", "Juan", "Pepe"};

    for(std::string alumn : alumns){
        std::cout << alumn << std::endl;
    } //for each (for each alumn in alumns)

    return 0;
}