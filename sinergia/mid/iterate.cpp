#include <iostream>

int main(){

    std::string estudiantes[]={"Juan","Pedro","Maria","Ana","Luis","Carlos","Sofia","Laura","Miguel","Elena"};
    int longitud = sizeof(estudiantes)/sizeof(std::string);
    for (int i=0;i<longitud;i++){
        std::cout<<estudiantes[i]<<std::endl;
    }

    return 0;
}