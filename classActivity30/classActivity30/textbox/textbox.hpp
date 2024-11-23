#ifndef textbox_hpp
#define textbox_hpp

#include <string>

using std::string;

class TextBox{
public:
    TextBox() = default;
    explicit TextBox(const string& str);
    string getValue();
    void setValue(const string& value);
    void printValue();
private:
    string value;
};

#endif
