#include "conversionFunction.hpp"

#include <string>
#include <sstream>
#include <iomanip>

using std::stringstream, std::setprecision, std::fixed;

namespace conversionFunction{
    string doubleToString(double number){
        stringstream stream;
        stream << fixed << setprecision(2) << number;
        return stream.str();
    }
}

