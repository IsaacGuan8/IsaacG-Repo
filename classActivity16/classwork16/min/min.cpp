//
//  min.cpp
//  ClassLecture
//
//  Created by Isaac Guan on 10/2/24.
//


namespace min{
double grade(double grades[], int classSize){
    double min = grades[0];
    for(int i = 0; i < classSize; i++)
    {
        if (min > grades[i]){
            min = grades[i];
        }
    }
    return  min;
    }
}
