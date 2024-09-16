#include <iostream>

using namespace std;

int main(){
    bool isCitizen;
    bool bachelorDegree;
    int yearsOfExperiance;
    
    cout << "Are you a US citizen? (1 for true, 0 for false): ";
    cin >> isCitizen;
    
    cout << "Do you have a bachelor degree? (1 for true, 0 for false): ";
    cin >> bachelorDegree;
    
    cout << "How many years of experiance for you have?: ";
    cin >> yearsOfExperiance;
    
    if(!isCitizen){
        cout << "Sorry, you aren't eligible, you must be a US citizen." << endl;
    } else if (bachelorDegree || yearsOfExperiance >= 2){
            cout << "Congrats you are elligible for the job!" << endl;
    } else {
        cout << "Sorry, your are not elligible for the job" << endl;
    }
    
    return 0;
}
