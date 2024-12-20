#include <iostream>

int main(){
    std::string comidas[5];
    std::string temp;

    int tam = sizeof(comidas)/sizeof(comidas[0]);

    for(int i = 0; i < tam; i++){
        std::cout<<"Ingresa tu comida favorita # "<<i <<" o ingrese la letra 's' para salir"<<std::endl;
        std::getline(std::cin, temp);
        if(temp == "s" || temp == "S"){
            break;
        }else{
            comidas[i] = temp;
        }
    }

    std::cout<<"Tus comidas favoritas son: "<<std::endl;
    for(int i = 0; !comidas[i].empty(); i++)//.empty() devuelve true si el elemento esta vacio. En el for(), la comparacion se detiene si el elemento devuelve false
    {
        std::cout<<comidas[i]<<std::endl;
    }

    return 0;
}