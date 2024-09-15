# include <iostream>
# include <cstdlib>
# include <ctime>

using namespace std;

int main(){
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 6;
    
    long timeSeconds = time(0);
    srand(timeSeconds);
    
    int dice1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    int dice2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
    cout<<"Value one: "<< dice1 <<"\n";
    cout<<"Value two: "<< dice2;
    return 0;
}
