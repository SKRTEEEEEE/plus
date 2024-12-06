#include <iostream>

int main(){

    double temp;
    char op;

    std::cout << "***** Temperature Conversion *****" << std::endl;
    std::cout << "F = Fahrenheit" << std::endl;
    std::cout << "C = Celsius" << std::endl;
    std::cout << "What unit would you like to convert to: ";
    std::cin >> op;
    if(op == 'F' || op == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature in Fahrenheit: " << temp << std::endl;
    }else if(op == 'C' || op == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature in Celsius: " << temp << std::endl;
    }else{
        std::cout << "Please enter in only C or F" << std::endl;
    }

    return 0;
}