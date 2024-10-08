//
//  lowestValue.cpp
//  assignment16
//
//  Created by Isaac Guan on 10/7/24.
//

#include "lowestValue.hpp"

double grade(double grades[], int classSize){
    double max = grades[0];
    for(int i = 0; i <= classSize; i++)
        {
            if (max < grades[i]){
                max = grades[i];
            }
        }
    return  max;
}
