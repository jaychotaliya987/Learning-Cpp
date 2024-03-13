#include <iostream>
#include <iomanip>

int main()
{

    /*The output text can be formatted with setw and \t at
    the end of the text line in c++. Setw will create a
    space of set width and display a string or integer in 
    that width. tab will include a tab in between.*/
    std::cout << "Output with setw = 15" << std::endl;
    std::cout << "Ints" << std::setw(15);
    std::cout << "Floats" << std::setw(15);
    std::cout << "Doubles" << std::endl;
    std::cout << "" << std::endl;

    std::cout << "Output with tabs" << std::endl;
    std::cout << "Ints\t";
    std::cout << "Floats\t";
    std::cout << "Doubles" << std::endl;

    return 0;


}