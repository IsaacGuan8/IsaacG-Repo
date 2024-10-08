//
//  main.cpp
//  Assignment18
//
//  Created by Isaac Guan on 10/7/24.
//

#include "./bubbleSort/bubbleSort.hpp"
#include "./util/printArray.hpp"
#include <iostream>

using namespace std;

int main() {
    int arr[] = {8, 9, 3, 1, 4};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Inital array: ";
    util::printArray(arr, arrSize);
    
    sort::bubbleSort(arr, arrSize);
    
    cout << "Final sorted array: ";
    util::printArray(arr, arrSize);
    
    return 0;
}
