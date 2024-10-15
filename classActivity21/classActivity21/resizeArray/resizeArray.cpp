#include "resizeArray.hpp"
using namespace resize;

namespace resize{
    std::unique_ptr<int[]> resizeArray(std::unique_ptr<int[]>& arr, int& size, int count)
    {
        int newSize = size * 2;
        auto resizedArr = std::make_unique<int[]>(newSize);
        
        for(int j = 0; j < size; j++){
            resizedArr[j] = arr[j];
        }
        size = newSize;
        return resizedArr;
    }
}
