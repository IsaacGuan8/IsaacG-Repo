#include <iostream>
#include "customer.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::getline;

namespace customerManager{
    void getCustomerInfo(CustomerDataManager::Customer& customer){
        cout << "Enter customer id:" << endl;
        cin >> customer.identifiction;
        std::cin.ignore();
        
        cout << "Enter customer name:" << endl;
        getline(cin, customer.name);
        
        
        cout << "Enter customer email:" << endl;
        getline(cin, customer.email);
        
        cout << "Enter city street name:" <<endl;
        getline(cin, customer.address.streetName);
        
        cout << "Enter city name:" <<endl;
        getline(cin, customer.address.cityName);
        
        cout << "Enter zip code:" << endl;
        cin >> customer.address.zipCode;
    
    }

    void printCustomerInfo(const CustomerDataManager::Customer& customer){
        cout << "The customer's ID is: " << customer.identifiction << endl;
        cout << "The customer's name: " << customer.name << endl;
        cout << "The customer's email is: " << customer.email << endl;
        cout << "The customer's full address is " <<  customer.address.streetName << ", " << customer.address.cityName << ", " << customer.address.zipCode << endl;
    }
}
