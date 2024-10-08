#include <iostream>
#include "./lowestValue/lowestValue.hpp"

using namespace std;

int main() {
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
    
    cout << "The lowest grade is :" << endl;
    
    cout << lowestValue::grade(studentsGrade, classSize) << endl;
    return 0;
}
