#include <iostream>

enum Dia {lunes, martes, miercoles, jueves, viernes, sabado, domingo};
enum Color {rojo = 'r', azul = 'a', verde = 'v'};
int main(){

    Dia hoy = lunes;

    switch(hoy) // switch solo acepta por defecto numeros (char incluidos)
    {
        case lunes:
            std::cout << "hoy es lunes";
            break;
        case martes:
            std::cout << "hoy es martes";
            break;
        case miercoles:
            std::cout << "hoy es miercoles";
            break;
        case jueves:
            std::cout << "hoy es jueves";
            break;
        case viernes:
            std::cout << "hoy es viernes";
            break;
        case sabado:
            std::cout << "hoy es sabado";
            break;
        case domingo:
            std::cout << "hoy es domingo";
            break;
        default:
            std::cout << "no es un dia de la semana";
            break;
    }

    return 0;
}