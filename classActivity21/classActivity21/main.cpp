//
//  main.cpp
//  classActivity21
//
//  Created by Isaac Guan on 10/14/24.
//

#include <iostream>
#include "./inputNumbers/inputNumbers.hpp"
#include "./getSum/getSum.hpp"

using namespace std;
using namespace input;
using namespace sum;

int main() {
    int size = 3;
    auto arr = make_unique<int[]>(size);
    int count = 0;
    
    inputNumbers(arr, count, size);
    
    int total = getSum(arr, count);
    
    cout << "The sum of the list is: " << endl;
    cout << total << endl;
    
    return 0;
}
