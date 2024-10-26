#include <iostream>
using std::cout;
using std::endl;

namespace util{
    void printArray(int arr[], int size){
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
