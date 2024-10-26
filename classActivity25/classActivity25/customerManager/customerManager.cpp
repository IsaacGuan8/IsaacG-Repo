#include <iostream>
#include "customer.hpp"

using std::cout, std::endl, std::cin, std::getline;

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
}
