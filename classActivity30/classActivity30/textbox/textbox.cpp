#include "textbox.hpp"
#include <iostream>

using std::cout, std:: endl;
string TextBox::getValue(){
    return value;
}

void TextBox::setValue(const string& value){
    this->value = value;
}

void TextBox::printValue(){
    cout << "The value is: " << value << endl;
}

TextBox::TextBox(const std::string& str) : value(str) {}
