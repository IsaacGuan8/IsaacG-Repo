#include <iostream>
#include "./conversionFunction/conversionFunction.hpp"

using namespace std;

int main(){
    double number = 33.86;
    string result = conversionFunction::doubleToString(number);
    cout << result << endl;
    return 0;
}
