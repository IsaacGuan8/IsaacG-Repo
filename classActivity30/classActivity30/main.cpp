#include <iostream>
#include "textbox/textbox.hpp"

using namespace std;

int main() {
    TextBox newTextBox;
    
    newTextBox.setValue("hello!");
    
    cout << newTextBox.getValue() << endl;
    return 0;
}
