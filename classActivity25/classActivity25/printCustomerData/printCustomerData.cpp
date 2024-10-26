#include <iostream>
#include "customer.hpp"

using std::cout, std::endl;

namespace printData{
    void printCustomerData(const CustomerDataManager::Customer& customer){
        cout << "The customer's ID is: " << customer.identifiction << endl;
        cout << "The customer's name: " << customer.name << endl;
        cout << "The customer's email is: " << customer.email << endl;
        cout << "The customer's full address is " <<  customer.address.streetName << ", " << customer.address.cityName << ", " << customer.address.zipCode << endl;
    }
}
