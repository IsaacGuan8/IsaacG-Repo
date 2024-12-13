#include "Date.hpp"

Date::Date(int year, int month, int day) : year(year), month(month), day(day){
    normalize();
}

int Date::getYear() const{
    return year;
}

int Date::getMonth() const{
    return month;
}

int Date::getDay() const{
    return day;
}

void Date::setYear(int year){
    this->year = year;
}

void Date::setMonth(int month){
    this->month = month;
}

void Date::setDay(int day){
    this->day = day;
}

bool Date::isLeapYear(int year) const{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int Date::daysInMonth(int year, int month) const{
    static const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return(month == 2 && isLeapYear(year)) ? 29 : daysInMonth[month - 1];
}

void Date::normalize(){
    while(day > daysInMonth(year, month)){
        day -= daysInMonth(year, month);
        month++;
        if(month > 12){
            month = 1;
            year++;
        }
    }
    
    while(day <= 0){
        month--;
        if(month <= 0){
            month = 12;
            year--;
        }
        day += daysInMonth(year, month);
    }
}

void Date::addYears(int years){
    year += years;
}

void Date::addMonths(int months){
    month += months;
    normalize();
}

void Date::addDays(int days){
    day += days;
    normalize();
}

int Date::daysSinceEpoch()const{
    int totalDays = 0;
    for(int y = 1970; y < year; ++y){
        totalDays += isLeapYear(y) ? 366 : 365;
    }
    for(int m = 1; m < month; ++m){
        totalDays += daysInMonth(year, m);
    }
    totalDays += day - 1;
    return totalDays;
}
