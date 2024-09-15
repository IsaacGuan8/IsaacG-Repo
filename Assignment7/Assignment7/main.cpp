#include <iostream>


using namespace std;

int main(){
    string names[3];
    
    cout << "Enter first name: ";
    getline(cin, names[0]);
    
    cout << "Enter second name: ";
    getline(cin, names[1]);
    
    cout << "Enter third name: ";
    getline(cin, names[2]);
    
    cout << "The first name is: " << names[0] << endl;
    return 0;
}
