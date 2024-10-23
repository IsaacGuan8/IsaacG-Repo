#include <iostream>

using namespace std;

namespace customerInfo{
    void printCustomerInfo(string name, string email, short identification){
        cout << "The customer name is: " << name << endl;
        cout << "The customer email is: " << email << endl;
        cout << "The customer identification is: " << identification << endl;
    }
}
