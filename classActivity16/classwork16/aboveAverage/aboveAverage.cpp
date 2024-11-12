
#include <iostream>
#include <string>
namespace aboveAverage{
    void grade(std::string students[], double grade[], int average, int classSize){
        std::cout << "students above average:" << std::endl;
        for(int i = 0 ; i < classSize ; i++){
            if(grade[i] > average)
                std::cout << students[i] << " with grade " << grade[i] << std::endl;
        }
    }
}
