#include <iostream>
#include "pointOperators.hpp"

using namespace std;

int main() {
    geometry::Point pointOne(1.0, 2.0);
    geometry::Point pointTwo(1.0, 2.0);
    geometry::Point pointThree(3.0, 4.0);
    
    if(pointOne == pointTwo){
        cout << "Point 1 and Point 2 are equal" << endl;
    }
    
    cout << "Point 1 is: " << pointOne << endl;
    cout << "Point 2 is: " << pointTwo << endl;
    cout << "Point 3 is: " << pointThree << endl;

    return 0;
}
