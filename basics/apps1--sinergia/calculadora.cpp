#include <iostream>

int main(){


    char op;
    double num1, num2, resultado;

    std::cout << "################ CALCULADORA ################ \n";
    std::cout << "Ingrese el operador (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    switch(op){
        case '+':
            resultado = num1 + num2;
            std::cout << "El resultado es: " << resultado << std::endl;
            break;
        case '-':
            resultado = num1 - num2;
            std::cout << "El resultado es: " << resultado << std::endl;
            break;
        case '*':
            resultado = num1 * num2;
            std::cout << "El resultado es: " << resultado << std::endl;
            break;
        case '/':
            resultado = num1 / num2;
            std::cout << "El resultado es: " << resultado << std::endl;
            break;
        default:
            std::cout << "Operador no valido" << std::endl;
            break;
    }


    return 0;

}