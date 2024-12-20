#include <iostream>
int main()
{
    int row, col;
    char sym;
    std::cout << "Enter the number of rows: ";
    std::cin >> row;
    std::cout << "Enter the number of columns: ";
    std::cin >> col;
    std::cout << "Enter the symbol: ";
    std::cin >> sym;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            std::cout << sym << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}