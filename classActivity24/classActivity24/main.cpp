#include <iostream>
#include "./customerManager/customerManager.hpp"
#include "./printCustomerData/printCustomerData.hpp"

using namespace std;

int main() {
    Customer customer;
    
    customerManager::getCustomerInfo(customer);
    cout << endl;
    printData::printCustomerData(customer);
    
    return 0;
}
