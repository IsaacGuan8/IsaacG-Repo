#ifndef getCustomerInfo_hpp
#define getCustomerInfo_hpp

#include <iostream>
#include "customer.hpp"

using std::string;

namespace customerManager{
    void getCustomerInfo(CustomerDataManager::Customer& customer);
    void printCustomerInfo(const CustomerDataManager::Customer& customer);
}

#endif
