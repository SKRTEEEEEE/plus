#include <iostream>

int main(){

    //fill(inicio, final, valor)
    const int cantidad = 12;
    std::string comidas[cantidad]; // La variable debe ser constante

    // fill(comidas, comidas + cantidad/2, "Pizza");
    // fill(comidas + cantidad/2, comidas + cantidad, "Hamburguesa");

    fill(comidas, comidas + cantidad/3, "Pizza");
    fill(comidas + cantidad/3, comidas + cantidad/3*2, "Hamburguesa");
    fill(comidas + cantidad/3*2, comidas + cantidad, "Hot dog");

    for(std::string comida : comidas){
        std::cout << comida << " - ";
    }
    
    return 0;

}