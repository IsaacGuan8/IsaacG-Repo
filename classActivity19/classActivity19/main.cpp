//
//  main.cpp
//  classActivity19
//
//  Created by Isaac Guan on 10/8/24.
//

#include <iostream>
#include "./pointerSwap/pointerSwap.hpp"

using namespace std;

int main() {
    int x = 10;
    int y = 20;
    
    cout <<"Before swap x is equal to " << x << ", y is equal to " << y << endl;
    swap::pointerSwap(&x, &y);
    
    cout <<"After swap x is equal to " << x << ", y is equal to " << y << endl;
    
    
    return 0;
}
