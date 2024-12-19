#include <iostream>
#include <ctime>

int main(){

int num, adivinar, intentos;

srand(time(NULL));
num = rand() % 100 + 1;
std::cout << "Adivina el numero entre 1 y 100 "<<std::endl;
do{
    std::cout << "Introduce un numero: ";
    std::cin >> adivinar;
    intentos++;

    if(adivinar == num) std::cout << "Has adivinado el numero en "<<intentos<<" intentos - Felicidades"<<std::endl;
    
    if(adivinar > num) std::cout << "El numero es menor - Intenta de nuevo"<<std::endl;
    if(adivinar < num) std::cout << "El numero es mayor - Intenta de nuevo"<<std::endl;
}while(adivinar != num);
}