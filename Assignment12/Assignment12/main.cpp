#include <iostream>
using namespace std;

int main() {
    int factorial = 1;
    int num;
    
    cout << "What postive number do you want to factorial?: " << endl;
    cin >> num;
    
    while(num < 0){
        cout << "Please enter valid number 0 or greater." << endl;
        cin >> num;
    }
    
    for(int i = 1; i <= num; i++){
        factorial *= i;
    }
    
    cout << "Your number factorial is " << factorial << endl;
    
    return 0;
}
