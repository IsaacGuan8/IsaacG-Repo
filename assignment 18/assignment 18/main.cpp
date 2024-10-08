
#include <iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    
}

int main() {
    int unsortedList[] = {5, 6, 9, 1, 4};
    int arraySize = sizeof(unsortedList) / sizeof(int);
    
    for(int i = 0; i < arraySize - 1; i++){
        for(int j = 0; j < arraySize - i - 1; i++){
            if(unsortedList[j] > unsortedList[i]){
                int temp = unsortedList[j];
                unsortedList[i] = unsortedList[j];
                
            }
        }
    }
    
    return 0;
}
