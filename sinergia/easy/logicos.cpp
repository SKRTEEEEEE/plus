#include <iostream>

int main(){
    // && = comprueba si dos condiciones son verdaderas
    // || = comprueba si al menos una de las condiciones es verdadera
    // ! = Revierte el valor de una condicion

    int temp;
    std::cout << "Ingrese la temperatura: ";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30){
    std::cout << "La temperatura es mala";
    }else{
    std::cout << "La temperatura es buena";
    }
    // if(temp > 0 && temp < 30){
    //     std::cout << "La temperatura es buena";
    // }else{
    //     std::cout << "La temperatura es mala";
    // }

}