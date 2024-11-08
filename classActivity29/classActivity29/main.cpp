#include <iostream>
#include "./printMovieData/printMovieData.hpp"
#include "./extractFunction/extractFunction.hpp"
#include "./movie/movie.h"

int main(){
    string str = "24 s2,2014";
    Movie movie = extract::stringToStruct(str);
    
    printData::printMovieData(movie);
    
    return 0;
}
