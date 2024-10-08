#include <iostream>
#include "./linearSearch/linearSearch.hpp"
using namespace std;

/*int linearSearch(int arr[], int size, int target){
    int index = 0;
    
    while (index < size){
        if (arr[index] == target){
            return index;
        }
        index++;
    }
    return -1;
}*/

int main(){
    int nums[] = {1, 7, 3 , 9, 8};
    int arraySize = sizeof(nums)/sizeof(nums[0]);
    int target = 7;
    
    int result = search::linearSearch(nums, arraySize, target);
    
    cout << result << endl;
    
    return 0;
}
