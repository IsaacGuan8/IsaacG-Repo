#include <iostream>


using namespace std;

int main() {
    int row;
    
    cout << "How many rows do you want?" << endl;
    cin >> row;
    cout << endl;
    
    for(int x = 1; x <= row; x++)
    {
        for(int y = 1; y <= x; y++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
