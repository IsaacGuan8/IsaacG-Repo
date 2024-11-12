#include <iostream>
#include<string>

using std::cin, std::cout, std::string, std::endl;

namespace comparison{
    void grade (std::string students[], double grades[], int size){
        string student1;
        string student2;
        
        cout << "Enter name of first student to compare" << endl;
        cin >> student1;
        cout << "Enter name of second student to compare" << endl;
        cin >> student2;
        
        double grade1 = -1;
        double grade2 = -1;
        
        for(int i = 0; i < size; i++){
            if(students[i] == student1){
                grade1 = grades[i];
            }
            if(students[i] == student2){
                grade2 = grades[i];
            }
        }
        
        if (grade1 == -1){
            cout << "Student " << student1 << " not found" << std::endl;
        } else if (grade2 == -1){
            cout << "Student " << student2 << " not found" << std::endl;
        } else {
            if(grade1 > grade2){
                cout << "student " << student1 << " has a higher grade of " << grade1 << " than student " << student2 << " grade of " << grade2 << endl;
            } else if (grade1 < grade2){
                cout << "student " << student2 << " has a higher grade of " << grade2 << " than student " << student1 << " grade of " << grade1 << endl;
            } else {
                cout << "both students " << student1 << " and " << student2 << " have the same grade of "  << grade1 << endl;
            }
        }
    }
}
    
    

