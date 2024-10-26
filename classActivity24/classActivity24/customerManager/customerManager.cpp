#include <iostream>
#include "customer.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::getline;

namespace customerManager{
    void getCustomerInfo(Customer& customer){
        cout << "Enter customer id:" << endl;
        cin >> customer.identifiction;
        cout << endl;
        std::cin.ignore();
        
        cout << "Enter customer name:" << endl;
        getline(cin, customer.name);
        
        cout << "Enter customer email:" << endl;
        getline(cin, customer.email);
    
    }
}
