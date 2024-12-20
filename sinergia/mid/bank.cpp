#include <iostream>
#include <iomanip>
#include <limits> 

void mostrarSaldo(double saldo);
double depositar(double saldo);
double retirar(double saldo);
int main() {
    double saldo = 10.0;
    int opc = 0;

    do{
        std::cout << "\nOPCIONES -> ";
        std::cout << "1. Mostrar saldo | ";
        std::cout << "2. Depositar | ";
        std::cout << "3. Retirar | ";
        std::cout << "4. Salir " <<std::endl;
        std::cout << "Ingrese una opcion:";
        std::cin >> opc;

        //Bloque de codigo para comprobar que el usuario ha introducido un int y evitar el error de bucle infinito
        if(std::cin.fail() || opc < 1 || opc > 4) {
            std::cin.clear(); // Limpiar el estado de error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorar lo que quede en el buffer
            std::cout << "Opcion invalida. Intente de nuevo\n";
            continue;
        }

        switch (opc)
        {
        case 1:
            mostrarSaldo(saldo);
            break;
        case 2:
            saldo = depositar(saldo);
            break;
        case 3:
            saldo = retirar(saldo);
            break;
        case 4:
            std::cout << "\n\n\nSaliendo... \n\nGracias por su visita!\n" << std::endl;
            break;
        default:
            std::cout << "Opcion invalida" << std::endl;
            break;
        }
    }while(opc != 4);

    return 0;
}
void mostrarSaldo(double saldo) {
    std::cout << "\nSaldo actual: R$" << std::setprecision(2) << std::fixed << saldo << std::endl;
};
double depositar(double saldo) {
    double valor;
    std::cout << "\nQue monto vas a ingresar: R$";
    std::cin >> valor;

    if(valor > 0){
        saldo += valor;
        mostrarSaldo(saldo);
        return saldo;
    } else {
        std::cout << "\nValor invalido" << std::endl;
        return saldo;
    }
}
double retirar(double saldo) {
    double valor;
    std::cout << "\nQue monto vas a retirar: R$";
    std::cin >> valor;

    if(valor > 0 && valor <= saldo){
        saldo -= valor;
        mostrarSaldo(saldo);
        return saldo;
    } else {
        std::cout << "\nValor invalido" << std::endl;
        return saldo;
    }
}