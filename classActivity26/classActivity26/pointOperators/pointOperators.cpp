#include "point.hpp"
#include <ostream>

using std::ostream;

namespace geometry{
    bool operator == (const Point& pointOne, const Point& pointTwo){
        return (pointOne.x == pointTwo.x) && (pointOne.y == pointTwo.y);
    }

    ostream& operator << (ostream& stream, const Point& point){
        stream << "point (" << point.x << ", " << point.y << ")";
        return stream;
    }
}
