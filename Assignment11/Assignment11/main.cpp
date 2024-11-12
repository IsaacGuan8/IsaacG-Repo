#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int larger;
    
    cout << "Enter first number: " << endl;
    cin >> a;
    
    cout << "Enter second number: " << endl;
    cin >> b;
    
    if (a > b) {
        larger = a;
    } else {
        larger = b;
    }
    
    cout << "The larger number is: " << larger << endl;
    
    int c;
    int d;
    
    cout << "Enter another first number: " << endl;
    cin >> c;
    
    cout << "Enter another second number: " << endl;
    cin >> d;
    
    larger = (c > d) ? c : d;
    
    cout << "The larger number is: " << larger << endl;
    return 0;
}
