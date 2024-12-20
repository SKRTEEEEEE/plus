#include <iostream>

namespace primero{
    int x = 1;
}
namespace segundo{
    int x = 2;
}

// main(){
//     int x = 0;
//     //accedemos a los bloques y a sus parámetros
//     std::cout << "x : "<<primero::x;
//     return 0;
// }

// main(){
//     using namespace primero;
//     // int x = 0; //Si ponemos la variable seguira apareciendo esta
//     //accedemos a los bloques y a sus parámetros
//     std::cout << "x : "<<x;
//     return 0;
// }


main(){
    // using namespace std; //No es recomendable usarlo, ya que importa toda la librería
    using std::cout;
    using std::string;

    string nombre = "Juan";

    cout << "x : "<<primero::x;

    return 0;

}
