#include "book.hpp"
#include <ostream>

using std::ostream;

namespace bookstoreManagement{
    ostream& operator<<(ostream& stream, const Book& book){
        stream << "Title: " << book.title << ", Author: " << book.author << ", Quantity: " << book.quanitity << ", Release date: " << book.releaseDate.month << "/" << book.releaseDate.day << "/" << book.releaseDate.year;
        return stream;
    }
}

