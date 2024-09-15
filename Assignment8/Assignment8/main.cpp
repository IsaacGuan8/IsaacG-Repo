#include <iostream>

using namespace std;

int main(){
    int x = 10;
    int y = 3;

    double z = x / static_cast<double>(y);
    
    cout << z << endl;
    return 0;
}
