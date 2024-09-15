#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    cout << "Size of short is: " << sizeof(short) << endl;
    cout << "Limit of short max is: " << numeric_limits<short>::max()<<endl;
    cout << "Limit of short min is: " << numeric_limits<short>::min()<<endl;
    
    cout << "Size of double is: " << sizeof(double) << endl;
    cout << "Limit of double max is: " << numeric_limits<double>::max()<<endl;
    cout << "Limit of double min is: " << numeric_limits<double>::min()<<endl;

    return 0;
}
