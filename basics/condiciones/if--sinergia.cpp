#include <iostream>

int main(){
    int edad;
    std::cout << "Ingrese su edad: ";
    std::cin>>edad;

    if(edad>=18){
        std::cout<<"Eres mayor de edad";
    }else if(edad<0){
        std::cout<<"Edad invalida";
    }
    else{
        std::cout<<"Eres menor de edad";
    }
}