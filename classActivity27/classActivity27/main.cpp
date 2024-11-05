#include <iostream>
#include "./bookstoreFunctions/bookstoreFunctions.hpp"
using namespace std;

int main() {
    Bookstore bookstore;
    
    cout << "Welcome to the Bookstore Manager" << endl;
    
    bookstoreManagement::manageBookStore(bookstore);
    
    cout << "Thank you for using the Bookstore Manager" << endl;
    
    return 0;
}
