#include <iostream>
#include "./Points/Points.hpp"



int main(){
    Points pointOne(1, 2);
    Points pointTwo(3, 4);
    
    Points pointThree = pointOne + pointTwo;
    std::cout << "pointOne + pointTwo: ";
    pointThree.display();
    
    Points pointFour = pointOne + 2;
    std::cout << "pointOne + 2: ";
    pointFour.display();
    
    Points pointFive(5, 6);
    
    std::cout << "Prefix increment: ";
    ++pointFive;
    pointFive.display();

    std::cout << "Postfix increment: ";
    Points pointSix = pointFive++;
    std::cout <<"Original state: ";
    pointSix.display();
    std::cout <<"Incremented state: ";
    pointFive.display();
    
    return 0;
}
