#include <iostream>

int main(){

    /*
    Utilizamos new, para utilizar memoria dinamica, es esa que se asignara una vez el programa esta compilado, y en ejecución.
    Asignamos memoria en el monticulo en vez de en el stack.

    DEBEMOS->Utilizamos delete, para liberar la memoria dinamica, una vez que ya no la necesitamos. (siempre que usemos new deberiamos usar delete)
    */

   char *pNotas = NULL;
   int tam;
   std::cout << "Cuantas notas vas a ingresar: ";
   std::cin >> tam;
   pNotas = new char[tam];

   for (int i = 0; i < tam; i++){
        std::cout << "Ingresa la nota #" << i+1 << ": ";
        std::cin >> pNotas[i];
   }
   //to create app
   for(int i = 0; i < tam; i++){
        std::cout << "Nota #" << i+1 << ": " << pNotas[i] << std::endl;
   }
   delete[] pNotas;
    return 0;
}