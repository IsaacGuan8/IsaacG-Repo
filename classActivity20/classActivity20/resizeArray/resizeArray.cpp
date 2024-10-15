
namespace resize{
int* resizeArray(int* arr, int& size, int count){
    int newSize = size * 2;
    int* resizedArr = new int[newSize];
    
    for(int j = 0; j < size; j++)
    {
        resizedArr[j] = arr[j];
    }
    
    delete [] arr;
    arr = nullptr;
    
    size = newSize;
    return resizedArr;
}
}
