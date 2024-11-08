#include "extractFunction.hpp"
#include <string>
#include <sstream>
#include "movie.h"

using std::string, std::stringstream, std::getline;
namespace extract {
    Movie stringToStruct(const string& string){
        Movie movie;
        stringstream str(string);
        std::string year;
        
        getline(str, movie.title, ',');
        
        getline(str, year);
        
        movie.year = std::stoi(year);
        
        return movie;
    }
}
