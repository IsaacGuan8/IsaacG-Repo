
#include<iostream>
#include "./resizeArray/resizeArray.hpp"



namespace input{
void inputNumbers(int*& arr, int& count, int& size){
    int num;
    while(true){
        std::cout << "what is the number?" << std::endl;
        std::cin >> num;
        
        if(std::cin.fail()){
            break;
        }
        
        if(count == size){
            arr = resize::resizeArray(arr, size, count);
        }
        
        arr[count] = num;
        count++;
    }
}
}
