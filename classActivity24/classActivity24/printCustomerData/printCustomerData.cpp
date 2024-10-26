#include <iostream>
#include "customer.hpp"

using std::cout;
using std::endl;

namespace printData{
    void printCustomerData(const Customer& customer){
        cout << "The customer identification is: " << customer.identifiction << endl;
        cout << "The customer  name: " << customer.name << endl;
        cout << "The customer email is: " << customer.email << endl;
    }
}
