#include <iostream>
#include "./customerManager/customerManager.hpp"

using namespace std;

int main() {
    CustomerDataManager::Customer customer;
    
    customerManager::getCustomerInfo(customer);
    cout << endl;
    customerManager::printCustomerInfo(customer);
    
    return 0;
}
