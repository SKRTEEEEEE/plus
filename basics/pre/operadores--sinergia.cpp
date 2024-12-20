#include <iostream>

int main(){

    int estudiantes = 30;
    // estudiantes = estudiantes + 1;
    // estudiantes += 1;
    // estudiantes ++;
    // estudiantes --;
    // estudiantes -=2;
    // estudiantes *= 2;
    // estudiantes /= 4; //Ojo que no devolverá comas(truncara), porque estamos trabajando con int
    int resto = estudiantes % 3;

    /*
    - Orden de preferencia

    1. ()
    2. * / %
    3. + -
    */


    std::cout << estudiantes << std::endl;

    return 0;
}