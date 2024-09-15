#include <iostream>

int main()
{
    int num1 = 2;
    int num2 = 1;
    int holder;
    
    std :: cout << "Before: "<< num1 << " " << num2;
    
    holder = num2;
    
    num2 = num1;
    
    num1 = holder;
    
    std :: cout << "\nAfter: "<< num1 << " " << num2;
    
    int num3 = 4;
    int num4 = 3;
    
    std :: cout << "\nBefore: "<< num3 << " " << num4;
    
    num3 = num3 + num4;
    num4 = num3 - num4;
    num3 = num3 - num4;
    
    std :: cout << "\nResult: "<< num3 << " " << num4;
    
    return 0;
}
