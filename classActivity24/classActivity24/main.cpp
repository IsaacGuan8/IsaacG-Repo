#include <iostream>
#include "./customer/customer.hpp"
#include "./getCustomerInfo/getCustomerInfo.hpp"
#include "./printCustomerInfo/printCustomerInfo.hpp"

using namespace std;

int main() {
    Customer customer;
    
    getCustomer::getCustomerInfo(customer.name, customer.email, customer.identifiction);
    
    customerInfo::printCustomerInfo(customer.name, customer.email, customer.identifiction);
    
    return 0;
}
