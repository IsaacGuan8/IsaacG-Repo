#include <iostream>
#include "customer.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::getline;

namespace customerManagerr{
    void getCustomerInfo(Customer& customer){
        cout << "Enter customer id:" << endl;
        cin >> customer.identifiction;
        cout << endl;
        
        cout << "Enter customer name:" << endl;
        getline(cin, customer.name);
        
        cout << "Enter customer email:" << endl;
        getline(cin, customer.email);
    
    }

    void printCustomerInfo(const Customer& customer){
        cout << "The customer identification is:" << customer.identifiction << endl;
        cout << "The customer  name:" << customer.name << endl;
        cout << "The customer email is:" << customer.email << endl;
    }
}
