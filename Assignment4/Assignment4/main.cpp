#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << left << setw(15) << "Course" << right << setw(10) << "Student" << endl;
    
    cout << left << setw(15) << "C++" << right << setw(10) << 100 << endl;
    
    cout << left << setw(15) << "Javascript" << right << setw(10) << 50 << endl;
    return 0;
}
