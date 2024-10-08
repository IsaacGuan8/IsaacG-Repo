//
//  average.cpp
//  ClassLecture
//
//  Created by Isaac Guan on 10/2/24.
//

double grade(double grades[], int classSize)
{
    double average = 0;
    for(int i = 0 ; i < classSize ;i++){
        average += grades[i];
    }
    return average / classSize;
}
