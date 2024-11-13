#ifndef textbox_hpp
#define textbox_hpp

#include <string>

using std::string;

class TextBox{
public:
    string getValue();
    void setValue(string value);
private:
    string value;
};

#endif
