#ifndef bookstore_h
#define bookstore_h

#include "book.hpp"
#include <vector>

using std::vector;

struct Bookstore{
    vector<Book> inventory;
};

#endif
