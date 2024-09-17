#include <iostream>

using namespace std;

int main(){
    /*int num;
    int factorial = 1;
    
    cout << "What number do you want to factorial?: ";
    cin >> num;
    
    for(int i = 1; i <= num; i++){
        factorial = factorial * i;
    }
    
    cout << factorial << endl;
    for(int i = num; i > 0; i--){
        factorial = factorial * i;
    }
    //
    string name = "Isaac Guan";
    
    for(char names: name){
        cout << names << endl;
    }
     //
    int numTemps;
    cout<< "how many temperatures are there?: ";
    cin >> numTemps;
    
    double temps[numTemps];
    
    cout << "what are the temperatures?: " << endl;
    
    for(int i = 0; i < numTemps;i++) {
        cin >> temps[i];
    }
        
    double tempsAdded = 0;
    
    for(int i = 0; i <= sizeof(temps)/sizeof(double);i++) {
        tempsAdded += temps[i];
    }
    
    double avgTemp = tempsAdded/numTemps;
    
    cout<< "The Average Temperature is: " << avgTemp << endl;
    
    return 0;*/
    
    int secret = 4;
    int guess = 0;
    
    while(guess != secret){
        cout << "what is the secret number?: "<< endl;
        cin >> guess;
        if(guess > secret){
            cout << "The guess is too large" << endl;
        } else {
            cout << "The guess is too small" << endl;
        }
    }
    
    cout << "Congrats the number is: " << secret << endl;
    
}


