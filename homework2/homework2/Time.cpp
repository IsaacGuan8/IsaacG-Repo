#include "Time.hpp"

Time::Time(int hour, int minute, int second) : hour(hour), minute(minute), second(second){
    normalize();
}

int Time::getHour() const{
    return hour;
}

int Time::getMinute() const{
    return minute;
}

int Time::getSecond() const{
    return second;
}

void Time::setHour(int hour){
    this->hour = hour;
}

void Time::setMinute(int minute){
    this->minute = minute;
}

void Time::setSecond(int second){
    this->second = second;
}

void Time::normalize(){
    minute += second / 60;
    second %= 60;
    if(second < 0){
        second += 60;
        minute--;
    }
    
    hour += minute / 60;
    minute %= 60;
    if(minute <0){
        minute += 60;
        hour--;
    }
    
    hour %= 24;
    if(hour < 0){
        hour += 24;
    }
}

void Time::addHours(int hours){
    this->hour += hours;
    normalize();
}

void Time::addMinutes(int minutes){
    this->minute += minutes;
    normalize();
}

void Time::addSeconds(int seconds){
    this->second += seconds;
    normalize();
}
