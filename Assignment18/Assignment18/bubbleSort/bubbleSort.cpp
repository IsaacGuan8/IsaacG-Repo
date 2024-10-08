//
//  bubbleSort.cpp
//  Assignment18
//
//  Created by Isaac Guan on 10/7/24.
//

#include "bubbleSort.hpp"
#include "printArray.hpp"
#include <iostream>

namespace sort{
    void bubbleSort(int arr[], int size){
        bool swapped;
        int step = 1;
        int n = size;
        do{
            swapped = false;
            for (int i = 0; i < size - 1; i++){
                if(arr[i] > arr[i + 1]){
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    swapped = true;
                }
                std::cout << "Step " << step++ << ": ";
                util::printArray(arr, size);
            }
            n--;
        } while (swapped);
    }
}
