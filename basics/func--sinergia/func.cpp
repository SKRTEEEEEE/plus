#include<iostream>

void felizCumple(std::string nombre, int edad); // Inicializamos la función - aunque la definimos después, es necesario

int main(){
    int edad;
    std::string name;
    std::cout<<"¿Como te llamas? ";
    std::cin>>name;
    std::cout<<"¿Cuantos cumples? ";
    std::cin>>edad;
    felizCumple(name,edad);
    return 0;
}

void felizCumple(std::string nombre,int edad){ // Definimos la función
    std::cout<<"Feliz cumple "<<nombre<<" num "<<edad<<std::endl;
}