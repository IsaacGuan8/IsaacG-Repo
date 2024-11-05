#ifndef bookstoreFunctions_hpp
#define bookstoreFunctions_hpp

#include "bookstore.hpp"
#include <string>

using std::string;

namespace bookstoreManagement{
    void addBook(Bookstore& bookstore, const Book& newBook);

    void findBook(const Bookstore& bookstore, const string& title);

    void displayInventory(const Bookstore& bookstore);

    void manageBookStore(Bookstore& book);
}

#endif
