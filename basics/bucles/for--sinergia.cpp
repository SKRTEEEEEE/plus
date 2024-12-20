#include<iostream>

// int main(){
//     for(int i=1;i<=10;i+=2){
//         std::cout<<i<<" Hello World"<<std::endl;
//     }
//     return 0;
// }
int main(){
    for(int i=1;i<=10;i++){
        if(i==5){
            // continue; //Salta el numero 5
            break; //Parar en el 5
        }
        std::cout<<i<<" Hello World"<<std::endl;
    }
}