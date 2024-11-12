#include <iostream>

using namespace std;

int main() {
    double sales;
    double commissionRate;
    double commission;
    
    cout << "Enter your sales amount: $";
    cin >> sales;
    
    if(sales <= 100000) {
        commissionRate = 0.10;
    } else if (sales <= 150000){
        commissionRate = 0.15;
    } else {
        commissionRate = 0.20;
    }
    
    commission = sales * commissionRate;
    
    cout << "The commision is: $" << commission <<endl;
    return 0;
}
