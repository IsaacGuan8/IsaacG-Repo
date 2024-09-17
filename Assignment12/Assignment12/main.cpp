#include <iostream>
using namespace std;

int main() {
    int factorial = 1;
    int num;
    
    cout << "What number do you want to factorial?: ";
    cin >> num;
    
    for(int i = 1; i <= num; i++){
        factorial = factorial * i;
    }
    
    cout << factorial << endl;
    
    return 0;
}
