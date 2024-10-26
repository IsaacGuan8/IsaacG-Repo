#ifndef customer_hpp
#define customer_hpp

#include <string>
#include "customerAddress.hpp"

using std::string;


namespace CustomerDataManager{
    struct Customer{
        int identifiction;
        string name;
        string email;
        Address address;
    };
}

#endif
