#include <iostream>

int main(){
    // int x;
    // x = 10;
    int x = 5;
    int y = 6;
    int suma = x + y;
    // # Enteros
    int edad=24;
    int year=2025;
    //int dias = 24.7; // ❌ Error
    /*
    - # Double o Flotante
    valor con decimales
    - Double -> almacena 15 dígitos - 64 beats
    - Float -> almacena 7 dígitos - 32 beats
    - long double -> almacena 19 dígitos - 128 beats
    */

   double dias = 24.7;
   double precio = 24.99;

   double temperatura = 35.554839893; // 🧠 DEVOVLERA -> 35.5548  

   float precio2 = 24.99; 

   // # Char

   char calificacion = 'A';

   // # Booleano

   bool esVerdadero = true;

   /*
   - # String

   ES OBLIGATORIO USAR DOBLE COMILLA
   */ 

   std::string mensaje = "Hola, mundo!";

    std::cout << temperatura << std::endl;

    return 0;
}