
#include <iostream>

int main(){
    int number;
    std::cout << "Hello, what is the number you want to convert into binary?" << std::endl;
    do{
        std::cin >> number;
        std::cout << "Please type a valid postive number"<< std::endl;
    } while (number <= 0);
    
    int binaryArray[number*2];
    int i = 0;
    while(number > 0){
        binaryArray[i] = number % 2;
        number = number / 2;
        i++;
    }
    
    std::cout << number << " in binary is: ";
    
    for(int j = i - 1; j >= 0 ;j--){
        std::cout<< binaryArray[j];
    }
    
    std::cout<<std::endl;
    
    return 0;
}

