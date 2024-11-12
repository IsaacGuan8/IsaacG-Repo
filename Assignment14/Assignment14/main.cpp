#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess = 0;
    
    while(guess != secret){
        cout << "what is the secret number? (between 1 - 100)"<< endl;
        cin >> guess;
        
        if(guess > secret){
            cout << "The guess is too large" << endl;
        } else if (guess < secret){
            cout << "The guess is too small" << endl;
        } else {
            cout << "Congrats the number is: " << secret << endl;
        }
    }
    return 0;
}
