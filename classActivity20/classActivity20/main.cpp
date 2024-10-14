//
//  main.cpp
//  classActivity20
//
//  Created by Isaac Guan on 10/9/24.
//

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30};
    
    int* end = &numbers[size(numbers) - 1]; // array start in memory address
    while(end >= numbers){ //(108 >= 100)
        cout << *end << " "; //print value
        end--; // end - 4
    }
    
    return 0;
}
