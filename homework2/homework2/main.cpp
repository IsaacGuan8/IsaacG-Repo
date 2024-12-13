#include "DateTime.hpp"
#include <iostream>

int main(){
    DateTime dateTimeOne{2005, 12, 12, 16, 59, 50};
    dateTimeOne.addDays(20);
    dateTimeOne.addDays(1);
    
    std::cout << "DateTime: " << dateTimeOne.format("YYYY-MM-DD HH:mm:SS") << std::endl;
    
    DateTime dateTimeTwo{2005, 12, 10, 23, 0, 0};
    
    DateTimeDifference diff = dateTimeOne.difference(dateTimeTwo);
    dateTimeOne.printDiff(diff);
    return 0;
}
