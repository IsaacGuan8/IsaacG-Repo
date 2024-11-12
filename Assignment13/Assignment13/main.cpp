#include <iostream>

using namespace std;

int main() {
    int numTemps;
    cout << "how many temperatures are there?: " << endl;
    cin >> numTemps;
    
    while (numTemps <= 0){
        cout << "Please input a valid postive number" << endl;
        cin >> numTemps;
    }
    
    double temps[numTemps];
    
    cout << "what are the temperatures?: " << endl;
    
    for(int i = 0; i < numTemps;i++) {
        cin >> temps[i];
    }
        
    double tempsAdded = 0;
    
    for(int i = 0; i < numTemps; i++) {
        tempsAdded += temps[i];
    }
    
    double avgTemp = tempsAdded/numTemps;
    
    cout<< "The Average Temperature is: " << avgTemp << endl;
    
    return 0;
}
