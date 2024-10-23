#include <iostream>
#include "./customerValidator/customerValidator.hpp"

using namespace std;

int main() {
    string customerNumber;
    
    cout << "Enter the customer number: " << endl;
    cin >> customerNumber;
    
    if(customerValidator::isValidNumber(customerNumber)){
        cout << "Customer number is valid" << endl;
    } else {
        cout << "Not valid, must be 2 letter followed by 4 digits" << endl;
    }
    
    return 0;
}

