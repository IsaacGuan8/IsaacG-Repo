#ifndef pointOperator_hpp
#define pointOperator_hpp

#include "point.hpp"
#include <ostream>

using std::ostream;

namespace geometry{
    bool operator == (const Point& pointOne, const Point& pointTwo);

    ostream& operator << (ostream& stream, const Point& point);
}

#endif

