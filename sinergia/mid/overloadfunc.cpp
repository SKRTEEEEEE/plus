#include<iostream>
/*
Funciones sobrecargadas -> funciones con el mismo nombre pero con diferentes parametros
*/
void hornearPizza();
void hornearPizza(std::string ingr_uno);
void hornearPizza(std::string ingr_uno,std::string ingr_dos);
int main(){
    hornearPizza();
    hornearPizza("Peperoni");
    hornearPizza("Peperoni","Jamon");
    return 0;
}
void hornearPizza(){
    std::cout<<"Preparando pizza\n";
}
void hornearPizza(std::string ingr_uno){
    std::cout<<"Preparando pizza de "<<ingr_uno<<std::endl;
}
void hornearPizza(std::string ingr_uno, std::string ingr_dos){
    std::cout<<"Preparando pizza de "<<ingr_uno<<" y "<<ingr_dos<<std::endl;
}