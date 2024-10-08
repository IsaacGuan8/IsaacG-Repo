
#include <iostream>

using namespace std;

int main() {
    int nums[] = {5, 10, 7, 8, 3};
    int arraySize = sizeof(nums) / sizeof(int);
    int target = 7;
    
    for(int i = 0; i < arraySize; i++){
        if(nums[i] == target){
            cout << "Target at Index: " << i << endl;
        }
        return -1;
    }
    return 0;
}
