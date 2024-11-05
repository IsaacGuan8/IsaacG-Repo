#ifndef book_h
#define book_h

#include <string>

using std::string;

struct ReleaseDate{
    short year;
    short day;
    short month;
};

struct Book {
    string title;
    string author;
    ReleaseDate releaseDate;
    int quanitity;
    
};

#endif
