
namespace sum{
    int getSum(int* arr, int count){
        int total = 0;
        for (int i = 0; i < count; i++){
            total += arr[i];
        }
        return total;
    }
}
