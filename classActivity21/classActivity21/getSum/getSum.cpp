#include <iostream>
namespace sum{
    int getSum(const std::unique_ptr<int[]>& arr, int count){
        int total = 0;
        for (int i = 0; i < count; i++){
            total += arr[i];
        }
        return total;
    }
}

