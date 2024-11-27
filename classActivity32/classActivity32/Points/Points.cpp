#include "Points.hpp"
#include <iostream>

using std::cout, std::endl;

Points::Points(int x, int y):xCoordinate(x), yCoordinate(y){}

Points Points::operator + (const Points& other)const{
    return Points(xCoordinate + other.xCoordinate, yCoordinate + other.yCoordinate);
}

Points Points::operator + (int value)const{
    return Points(xCoordinate + value, yCoordinate + value);
}

void Points::display()const{
    cout << "(" << xCoordinate << ", " << yCoordinate << ")" << endl;
}

Points& Points::operator ++ (){
    yCoordinate++;
    xCoordinate++;
    return *this;
}

Points Points::operator ++ (int){
    Points temp = *this;
    yCoordinate++;
    xCoordinate++;
    return temp;
}
