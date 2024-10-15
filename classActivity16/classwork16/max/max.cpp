//
//  max.cpp
//  ClassLecture
//
//  Created by Isaac Guan on 10/2/24.
//
namespace max{
double grade(double grades[], int classSize){
    double max = grades[0];
    for(int i = 0; i < classSize; i++)
    {
        if (max < grades[i]){
            max = grades[i];
        }
    }
    return  max;
    }
}
