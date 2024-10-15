#include <iostream>
#include "./inputNumbers/inputNumbers.hpp"
#include "./getSum/getSum.hpp"

using namespace std;
using namespace sum;
using namespace input;

int main(){
    int size = 3;
    int* arr = new int[size];
    int count = 0;
    
    inputNumbers(arr, count, size);
    
    int total = getSum(arr, count);
    
    cout << "The sum of the list is:" << endl;
    cout << total << endl;
    
    delete [] arr;
    arr = nullptr;
    
    return 0;
}
