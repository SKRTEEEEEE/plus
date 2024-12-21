#include <iostream>
int factorial(int n);
int main(){

    int resultado = factorial(5);
    std::cout << resultado << std::endl;

    return 0;
}
int factorial(int n){
    // int resultado = 1;
    // for (int i = 1; i <= n; i++){
    //     resultado *= i;
    // }
    // return resultado;
    if(n>1){
        return n * factorial(n-1);
    }else{
        return 1;
    }
}

