//
//  max.cpp
//  ClassLecture
//
//  Created by Isaac Guan on 10/2/24.
//

#include "max.hpp"

double grade(double arr[], int classSize){
    double max = arr[1];
    for (int i = 0; i < classSize; i++)
        {
            if (max < arr[i]){
                max = arr[i];
            }
        }
    return  max;
}
