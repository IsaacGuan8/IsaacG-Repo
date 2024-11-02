#ifndef point_hpp
#define point_hpp

namespace geometry{
    struct Point{
        double x;
        double y;
        
        Point(double xCoordinate = 0.0, double yCoordinate = 0.0) : x(xCoordinate), y(yCoordinate) {}
    };
}

#endif
