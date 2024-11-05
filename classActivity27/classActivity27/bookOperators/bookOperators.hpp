#ifndef bookOperators_hpp
#define bookOperators_hpp

#include "book.hpp"
#include <ostream>

using std::ostream;

namespace bookstoreManagement{
    ostream& operator<<(ostream& stream, const Book& book);
}
#endif
