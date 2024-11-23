#include <iostream>
#include "textbox/textbox.hpp"

int main() {
    TextBox boxOne;
    boxOne.printValue();
    
    TextBox boxTwo("Hello");
    boxTwo.printValue();
    
    boxOne.setValue("New Value");
    boxOne.printValue();
    
    return 0;
}
