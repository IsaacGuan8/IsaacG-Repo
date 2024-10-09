//
//  pointerSwap.cpp
//  classActivity19
//
//  Created by Isaac Guan on 10/8/24.
//

#include "pointerSwap.hpp"

namespace swap{
    void pointerSwap(int* x, int* y){
        int temp = *x;
        *x = *y;
        *y = temp;
    }
}
