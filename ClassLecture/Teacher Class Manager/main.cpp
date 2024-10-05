#include <iostream>
#include "./max/max.hpp"
#include "./min/min.hpp"
#include "./average/average.hpp"
#include "./aboveAverage/aboveAverage.hpp"
#include "./comparison/comparison.hpp"

using namespace std;

int main(){
    int studentNumber;
    string currentStudent;
    int grade;
    
    
    cout<<"How many students are in your class" << endl;
    cin >> studentNumber;
    
    double studentsGrade[studentNumber];
    string studentName[studentNumber];
    
    for(int i = 0; i <= studentNumber; i++){
        cout << "What is the students name:" << endl;
        cin >> currentStudent;
        studentName[i] = currentStudent;
        cout << "What is their grade:" << endl;
        cin >> grade;
        studentsGrade[i] = grade;
    }
    
    return 0;
}
