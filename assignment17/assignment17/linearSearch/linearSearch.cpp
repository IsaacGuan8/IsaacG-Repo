

int linearSearch(int arr[], int size, int target){
    int index = 0;
    
    while (index < size){
        if (arr[index] == target){
            return index;
        }
        index++;
    }
    return -1;
}
