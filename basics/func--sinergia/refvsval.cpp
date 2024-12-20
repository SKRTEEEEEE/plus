#include <iostream>
void cambio(std::string &x, std::string &y);
int main()
{
std::string x = "Cafe";
std::string y = "Agua";

cambio(x,y);


std::cout << x << std::endl;
std::cout << y << std::endl;
return 0;

}
/*Esto crea copias nuevas de x, y -> Estamos pasando valor
void cambio(std::string x, std::string y){
std::string temp;
temp = x;

x = y;
y = temp;
}*/
void cambio(std::string &x, std::string &y){
std::string temp;
temp = x;

x = y;
y = temp;
}