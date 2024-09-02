#include <iostream>

int main()
{
    int num1 = 2;
    int num2 = 1;
    int holder;
    
    std :: cout << "Before:\n"<< num1 << " " << num2;
    
    holder = num2;
    
    num2 = num1;
    
    num1 = holder;
    
    std :: cout << "\nAfter:\n"<< num1 << " " << num2;
    
    int num3 = 4;
    int num4 = 3;
    int difference = abs(num3 - num4);
    
    std :: cout << "\nresult:\n"<< num3 << " " << num4;
    
    num3 = num3 - difference;
    num4 = num4 + difference;
    
    std :: cout << "\nresult:\n"<< num3 << " " << num4;
    
    return 0;
}

//learn command line to push to github repository & swap num1 and num2 with out typing it use token

