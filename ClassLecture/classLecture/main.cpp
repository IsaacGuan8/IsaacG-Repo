
#include <iostream>
using namespace std;

  
int main() {
    
    int* numbers = new int[5]; // heap(free storage)
    int entries = 0;
    
    while(true){
        cout << "number:" << endl;
        cin >> numbers[entries];
        if(cin.fail()) //break if its not a number
            break;
        entries++;
        if(entries == 5){
            int* temp; //
        }
    }
    
    cout << entries << endl;
    
    for(int i = 0; i < entries; i++){
        cout << numbers[i] << endl;
    }
    
    numbers = nullptr; // deletes in heap
    delete [] numbers;
    return 0;
}
