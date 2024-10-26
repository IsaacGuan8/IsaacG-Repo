#ifndef customer_hpp
#define customer_hpp

#include <string>
using std::string;
namespace CustomerDataManager{
    struct Address{
        string streetName;
        string cityName;
        short zipCode;
    };

    struct Customer{
        short identifiction;
        string name;
        string email;
        Address address;
    };
}

#endif
