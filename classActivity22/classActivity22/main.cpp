#include <iostream>
#include "./nameExtractor/nameExtractor.hpp"

using namespace std;

int main() {
    string fullName;
    string firstName;
    string lastName;
    
    cout << "Enter your first and last name(seperate with space): " << endl;
    getline(cin, fullName);
    
    nameExtractor::getFirstLastName(fullName, firstName, lastName);
    
    cout << "first name is:" << endl;
    cout << firstName << endl;
    cout << "last name is:" << endl;
    cout << lastName << endl;
    
    return 0;
}
