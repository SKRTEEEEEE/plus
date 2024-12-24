#include <stdio.h>
#include <string.h>

void print(const char* c){
    // c[0] = 'A'; // Si usamos string literal en la declaración no lo podremos modificar tampoco en una función, si usamos const en el parámetro de entrada, tampoco podremos modificarlo y nos avisara el compilador.
    while(*c != '\0'){
        printf("%c", *c);
        c++;
    }
    printf("\n");
}
int main(){
    // char c1[100] = "Hello";
    char* c1 = "Hello"; // Esto es un string literal, no se puede modificar -> Esto ocurre porque el string literal se guarda en la sección de solo lectura de la memoria, similar a -> printf("%s", "Hello");- se guarda como una constante en la memoria de solo lectura de texto?.
    print(c1);
    return 0;
}
