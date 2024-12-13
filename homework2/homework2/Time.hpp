#ifndef Time_hpp
#define Time_hpp

class Time{
public:
    Time(int hour = 0, int minute = 0, int second = 0);
    
    int getHour()const;
    int getMinute()const;
    int getSecond()const;
    
    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int hour);
    
    void addHours(int hours);
    void addMinutes(int minutes);
    void addSeconds(int seconds);

private:
    int hour;
    int minute;
    int second;
    
    void normalize();
};

#endif
