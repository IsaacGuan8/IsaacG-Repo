#ifndef getSum_hpp
#define getSum_hpp

#include <memory>

namespace sum{
    int getSum(const std::unique_ptr<int[]>& arr, int count);
}
#endif
