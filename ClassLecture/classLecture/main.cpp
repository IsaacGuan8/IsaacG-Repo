
#include <iostream>
using namespace std;

void increasePrice(double* price){
    *price *=1.2;
}
    
int main() {
    double price = 100;
    increasePrice(&price)
    cout << price << endl;
    
    return 0;
}
