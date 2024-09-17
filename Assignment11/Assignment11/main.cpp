#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int larger;
    
    cout << "Please enter two number: " << endl;
    cin >> a >> b;
    
    if (a > b) {
        larger = a;
    } else {
        larger = b;
    }
    
    cout << "The larger number is: " << larger << endl;
    
    int c;
    int d;
    
    cout << "Please enter two more number: " << endl;
    cin >> c >> d;
    
    larger = (c > d) ? c : d;
    
    cout << "The larger number is: " << larger << endl;
    return 0;
}
