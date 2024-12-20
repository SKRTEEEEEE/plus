#include <iostream>

int main(){
    int mes;
    std::cout<<"Ingrese el numero del mes(1-12): ";
    std::cin>>mes;
    switch(mes){
        case 1:
            std::cout<<"Enero";
            break;
        case 2:
            std::cout<<"Febrero";
            break;
        case 3:
            std::cout<<"Marzo";
            break;
        case 4:
            std::cout<<"Abril";
            break;
        case 5:
            std::cout<<"Mayo";
            break;
        case 6:
            std::cout<<"Junio";
            break;
        case 7:
            std::cout<<"Julio";
            break;
        case 8:
            std::cout<<"Agosto";
            break;
        case 9:
            std::cout<<"Septiembre";
            break;
        case 10:
            std::cout<<"Octubre";
            break;
        case 11:
            std::cout<<"Noviembre";
            break;
        case 12:
            std::cout<<"Diciembre";
            break;
        default:
            std::cout<<"Numero de mes invalido";
            //break; No es necesario en el default
    }
    // switch(mes){
    //     case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    //         std::cout<<"El mes tiene 31 dias";
    //         break;
    //     case 4: case 6: case 9: case 11:
    //         std::cout<<"El mes tiene 30 dias";
    //         break;
    //     case 2:
    //         std::cout<<"El mes tiene 28 dias";
    //         break;
    //     default:
    //         std::cout<<"Numero de mes invalido";
    //         break;
    // }
    return 0;
}