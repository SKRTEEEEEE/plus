#include <iostream>

int main(){
    int A[] = {2,4,5,7,1};
    int i;
    int* p = A;
    p++; // valid
    // A++; // invalid
    for(int i = 0; i<5;i++){
        std::cout << "Address &A[" <<i<<"]: "<<&A[i]<<std::endl;
        std::cout << "Address A+i: "<<A+i<<std::endl; //Same with memory address
        
    }
    return 0;
}