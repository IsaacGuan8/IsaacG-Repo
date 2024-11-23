#include <iostream>
#include "textbox/textbox.hpp"
using namespace std;

int main() {
    TextBox boxOne;
    boxOne.printValue();
    
    TextBox boxTwo("Hello");
    boxTwo.printValue();
    
    boxOne.setValue("New Value");
    boxOne.printValue();
    
    return 0;
}
