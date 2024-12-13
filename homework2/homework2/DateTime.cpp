#include "DateTime.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cmath>

using std::string, std::ostringstream, std::setw, std::setfill, std::abs, std::cout, std::endl;

DateTime::DateTime(int year, int month, int day, int hour, int minute, int second) : Date(year, month, day), Time(hour, minute, second){};

void DateTime::addDays(int days){
    Date::addDays(days);
}

void DateTime::addSeconds(int seconds){
    int daysToAdd = seconds / 86400;
    seconds %= 86400;
    
    Time::addSeconds(seconds);
    if(Time::getHour() == 0 && Time::getMinute() == 0 && Time::getSecond() < 0){
        daysToAdd--;
    }
    addDays(daysToAdd);
}

int DateTime::toTotalSeconds()const{
    int totalDays = this->daysSinceEpoch();
    int totalSeconds = totalDays * 86400;
    totalSeconds += (getHour() * 3600) + (getMinute() * 60) + getSecond();
    return totalSeconds;
}

DateTimeDifference DateTime::difference(const DateTime& other)const{
    int thisTotalSeconds = this->toTotalSeconds();
    int otherTotalSeconds = other.toTotalSeconds();
    
    int totalSecondDiff = abs(thisTotalSeconds - otherTotalSeconds);
    
    DateTimeDifference diff;
    diff.days = (this->daysSinceEpoch() - other.daysSinceEpoch());
    
    if(totalSecondDiff < 86400){
        diff.days = 0;
    }
    
    int secondsInDays = totalSecondDiff % 86400;
    diff.hours = secondsInDays / 3600;
    secondsInDays %= 3600;
    diff.minutes = secondsInDays / 60;
    diff.seconds = secondsInDays %= 60;
    
    return diff;
}

void DateTime::printDiff(const DateTimeDifference& diff)const{
        std::cout << "Difference: " << diff.days << " days, " << diff.hours << " hours, "
                  << diff.minutes << " minutes, " << diff.seconds << " seconds.\n";
    }

string DateTime::format(const string& formatString)const{
    ostringstream oss;
    for(size_t i = 0; i < formatString.size(); ++i){
        if(formatString[i] == 'Y' && formatString.substr(i, 4) == "YYYY"){
            oss << setw(4) << setfill('0') << getYear();
            i += 3;
        }else if(formatString[i] == 'M' && formatString.substr(i, 2) == "MM"){
            oss << setw(2) << setfill('0') << getMonth();
            i += 1;
        }else if(formatString[i] == 'D' && formatString.substr(i, 2) == "DD"){
            oss << setw(2) << setfill('0') << getDay();
            i += 1;
        }else if(formatString[i] == 'H' && formatString.substr(i, 2) == "HH"){
            oss << setw(2) << setfill('0') << getHour();
            i += 1;
        }else if(formatString[i] == 'm' && formatString.substr(i, 2) == "mm"){
            oss << setw(2) << setfill('0') << getMinute();
            i += 1;
        }else if(formatString[i] == 'S' && formatString.substr(i, 2) == "SS"){
            oss << setw(2) << setfill('0') << getSecond();
            i += 1;
        }else{
            oss << formatString[i];
        }
    }
    return oss.str();
    
}
