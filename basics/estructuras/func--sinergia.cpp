#include <iostream>

struct Auto {
    int id;
    std::string name;
    int price;
    int year;
    std::string country;
};
void printAuto(Auto &a);
void changePrice(Auto &a, int newPice);

int main()
{
    Auto a1 = {1, "BMW", 100000, 2020, "Germany"};
    Auto a2 = {2, "Audi", 240000, 2021, "Germany"};
    Auto a3 = {3, "Mercedes", 30000, 2022, "Germany"};
    Auto a4 = {4, "Volkswagen", 14000, 2023, "Germany"};
    Auto a5 = {5, "Opel", 15000, 2024, "Germany"};
    Auto a6 = {6, "Ford", 26000, 2025, "Germany"};
    Auto a7 = {7, "Toyota", 170000, 2024, "Japan"};
    Auto a8 = {8, "Honda", 80000, 2023, "Japan"};
    Auto a9 = {9, "Mazda", 19000, 2024, "Japan"};
    Auto a10 = {10, "Nissan", 40000, 2025, "Japan"};

    changePrice(a3, 50000);

    std::cout << "&a3: " << &a3 << std::endl;
    printAuto(a3); // Por defecto (ejemplo comentado) -> Se pasa por valor y no por referencia!!
    return 0;
}
void printAuto(Auto &a){
    std::cout << "&a: " << &a << std::endl;
    std::cout << a.id << " " << a.name << " " << a.price << " " << a.year << " " << a.country << std::endl;
}
void changePrice(Auto &a, int newPice){
    a.price = newPice;
}
// void printAuto(Auto a){
//     std::cout << a.id << " " << a.name << " " << a.price << " " << a.year << " " << a.country << std::endl;
//     std::cout << "&a: " << &a << std::endl;
// }