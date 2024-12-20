#include<iostream>

int main(){
    srand(time(NULL));//Le pasamos una semilla, en este caso la hora actual
    // int numero = rand() % 6;//El modulo es el rango hasta el que podra escojer (del 0 al 5)
    int numero = rand() % 6 + 1;//(del 1 al 6)
    std::cout<<numero<<"\n";
    return 0;
}