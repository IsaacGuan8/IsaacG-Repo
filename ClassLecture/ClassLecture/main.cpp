#include <iostream>

using namespace std;


/*int max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }else{
        return num2;
    }
}*/

double increasePrice(double& price)
{
    return price * 1.2;
}

int main(){
    /*int firstNum = 4;
    int secondNum = 2;
    
    cout << max(firstNum, secondNum) << endl;*/
    double price = 100;
    cout << increasePrice(price);
    cout << price << endl;
    return 0;
    
}
