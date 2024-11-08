#include <iostream>
#include "movie.h"

using std::cout, std::endl;

namespace printData{
    void printMovieData(const Movie& movie){
        cout << "Title: " << movie.title << endl;
        cout << "Release Year: " << movie.year << endl;
    }
}
