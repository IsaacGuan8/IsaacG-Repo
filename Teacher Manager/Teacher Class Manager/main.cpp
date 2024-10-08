#include <iostream>
#include "./max/max.hpp"
#include "./min/min.hpp"
#include "./average/average.hpp"
#include "./aboveAverage/aboveAverage.hpp"
#include "./comparison/comparison.hpp"

using namespace std;

using namespace minimun;
using namespace maximum;
using namespace average;
using namespace aboveAverage;
using namespace comparison;


int main(){
    int classSize;
    string currentStudent;
    int grade;
    
    cout<<"How many students are in your class?" << endl;
    cin >> classSize;
    
    double studentsGrade[classSize];
    string studentsName[classSize];
    
    for(int i = 0; i <= classSize; i++){
        cout << "What is the students name:" << endl;
        cin >> currentStudent;
        studentsName[i] = currentStudent;
        cout << "What is their grade:" << endl;
        cin >> grade;
        studentsGrade[i] = grade;
    }
    
    cout<< "The highest grade is :" << endl;
    cout << maximum::grade(studentsGrade, classSize) << endl;
    
    cout << "The highest grade is :" << endl;
    cout << minimun::grade(studentsGrade, classSize) << endl;
    
    cout << "The class average is:" << endl;
    cout << average::grade(studentsGrade, classSize) << endl;
    
    aboveAverage::grade(studentsName, studentsGrade, average::grade(studentsGrade, classSize), classSize);
    
    comparison::grade(studentsName, studentsGrade, classSize);
    
    return 0;
}
