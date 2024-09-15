#include <iostream>

using namespace std;

int main(){
    string street;
    string city;
    string state;
    int zipCode;
    
    cout << "Hello, what is your street name?" <<endl;
    cin >> street;
    
    cout << "What is city do you live in?" <<endl;
    cin >> city;
    
    cout << "What state do you reside in?" <<endl;
    cin >> state;
    
    cout << "What is your zip code" <<endl;
    cin >> zipCode;
    
    cout << endl;
    cout << street <<endl;
    cout << endl;
    cout << city << ", " << state << ", " << zipCode << endl;
    
    return 0;
}
