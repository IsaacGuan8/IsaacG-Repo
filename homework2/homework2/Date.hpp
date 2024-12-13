#ifndef Date_hpp
#define Date_hpp

class Date{
public:
    Date(int year = 1970, int month = 1, int day = 1);
    
    int getYear()const;
    int getMonth()const;
    int getDay()const;
    
    void setYear(int year);
    void setMonth(int year);
    void setDay(int year);
    
    void addDays(int days);
    void addMonths(int days);
    void addYears(int days);
    
protected:
    int daysSinceEpoch()const;
    
private:
    int year;
    int month;
    int day;
    
    bool isLeapYear(int year) const;
    int daysInMonth(int year, int month) const;
    void normalize();
};

#endif
