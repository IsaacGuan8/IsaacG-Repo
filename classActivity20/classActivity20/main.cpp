#include <iostream>
using namespace std;

int main(){
    int size = 3;
    int* arr = new int[size];
    int* resizedArr = nullptr;
    int total = 0;
    int num;
    
    int count = 0;
    while(true){
        cout <<"what is the number?" << endl;
        cin >> num;
        arr[count] = num;
        if(cin.fail()){
            break;
        }
        count++;
        if(count > size){
            resizedArr = new int[size * 2];
            for(int j = 0; j < count; j++){
                resizedArr[j] = arr[j];
            }
        }
    }
    
    for(int i = 0; i < count; i++){
        total += resizedArr[i];
    }
    
    cout << "The sum of the list is:" << endl;
    cout << total << endl;
    
    delete [] arr;
    arr = nullptr;
    delete [] resizedArr;
    resizedArr = nullptr;
    
    return 0;
}
