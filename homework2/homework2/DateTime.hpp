#ifndef DateTime_hpp
#define DateTime_hpp

#include "Date.hpp"
#include "Time.hpp"
#include <string>
#include "DateTimeDifference.h"

using std::string;

class DateTime : public Date, public Time{
public:
    DateTime(int year, int month, int day, int hour, int minute, int second);
    
    void addDays(int days);
    void addSeconds(int seconds);
    
    DateTimeDifference difference(const DateTime& other)const;
    
    string format(const string& formatString)const;
    
    void printDiff(const DateTimeDifference& diff)const;
    
    int toTotalSeconds()const;
};



#endif
