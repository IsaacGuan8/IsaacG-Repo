//
//  average.cpp
//  ClassLecture
//
//  Created by Isaac Guan on 10/2/24.
//

#include "average.hpp"
double grade(double arr[], int classSize)
{
    double average = 0;
    for(int i = 0 ; i <= classSize ;i++){
        average = average + arr[i];
    }
    return average/classSize;
}
