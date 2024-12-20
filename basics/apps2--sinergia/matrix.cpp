#include <iostream>

int main(){

    std::string autos[][3] = {
        {"Mustang", "Escape", "F-150"},
        {"Corvette", "Equinox", "Silverado"},
        {"Challenger", "Durango", "Ram 1500"}
    };//Es obligatorio definir las columnas, osea la cantidad de elementos que tiene cada array interior

    int row = sizeof(autos)/sizeof(autos[0]);
    int col = sizeof(autos[0])/sizeof(autos[0][0]);

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cout << autos[i][j] << " ";
        }
        std::cout << '\n';
    }
    return 0;
}

