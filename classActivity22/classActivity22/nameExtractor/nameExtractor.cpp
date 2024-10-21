#include "nameExtractor.hpp"

namespace nameExtractor{
    void getFirstLastName(const std::string& fullName, std::string& firstName, std::string& lastName){
        int spaceIndex = -1;
        
        for (int i = 0; i < fullName.length(); i ++){
            if (fullName[i] == ' '){
                spaceIndex = i;
                break;
            }
        }
        
        if (spaceIndex != -1){
            firstName = fullName.substr(0, spaceIndex);
            lastName = fullName.substr(spaceIndex + 1);
        } else {
            firstName = fullName;
            lastName = "";
        }
    }
}
