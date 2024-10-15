#ifndef resizeArray_hpp
#define resizeArray_hpp

#include <memory>

namespace resize {
    std::unique_ptr<int[]> resizeArray(std::unique_ptr<int[]>& arr, int& size, int count);
}

#endif /* resizeArray_hpp */
