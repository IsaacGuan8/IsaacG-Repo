#include <iostream>

using namespace std;

namespace getCustomer{
    void getCustomerInfo(string& name, string& email, short& identification){
        cout << "Enter customer name:" << endl;
        cin >> name;
        
        cout << "Enter customer email:" << endl;
        cin >> email;
        
        cout << "Enter customer id:" << endl;
        cin >> identification;
    }
}
