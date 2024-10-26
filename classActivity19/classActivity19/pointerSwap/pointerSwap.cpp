#include "pointerSwap.hpp"

namespace swap{
    void pointerSwap(int* x, int* y){
        int temp = *x;
        *x = *y;
        *y = temp;
    }
}
