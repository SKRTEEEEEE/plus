#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));

    int randNum = rand() % 5 + 1;
    switch(randNum){
        case 1: std::cout << "You win a car!\n";
        break;
        case 2: std::cout << "You win a truck!\n";
        break;
        case 3: std::cout << "You win a bike!\n";
        break;
        case 4: std::cout << "You win a plane!\n";
        break;
        case 5: std::cout << "You win a boat!\n";
        break;
    }

}