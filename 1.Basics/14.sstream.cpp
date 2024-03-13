#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string L,W;
    float Le, Wi, area;
    Le = 0;
    Wi = 0;
    area = 0;
    std::cout << "what is the length of the house?";
    getline (std::cin , L);
    std::cout << "what is the width of the house?";
    getline (std::cin , W);
    
    std::stringstream(L) >> Le; //stringstream converts string input to floats
    std::stringstream(W) >> Wi; // It requires an include <sstream>

    area = Le * Wi;

    std::cout << area;

    return 0;
}
