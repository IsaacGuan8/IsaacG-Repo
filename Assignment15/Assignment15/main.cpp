#include <iostream>

int main() {
    int row;
    
    std::cout << "How many rows do you want?" << std::endl;
    std::cin >> row;
    std::cout << std::endl;
    
    for(int x = 1; x <= row ;x++)
    {
        for(int y = 1; y <= x; y++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
