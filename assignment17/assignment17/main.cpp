#include <iostream>
#include "./linearSearch/linearSearch.h"
using namespace std;

int main(){
    int nums[] = {1, 7, 3 , 9, 8};
    int arraySize = sizeof(nums)/sizeof(nums[0]);
    int target = 7;
    
    int result = search::linearSearch(nums, arraySize, target);
    
    cout << result << endl;
    
    return 0;
}
