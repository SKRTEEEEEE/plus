/*
- # typedef

Para evitar utilizar identificadores muy largos, podemos reemplazarlos por otro nombre para referenciar-lo

Se recomienda mas usar using, ya que funciona mejor con plantillas
*/

#include <iostream>
#include <vector>
typedef std::string text_t;

int main() {
    text_t firstName = "Bro";
    std::cout << firstName << '\n';
    return 0;
}
// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// int main() {
//     pairlist_t pairlist;

//     return 0;
// }