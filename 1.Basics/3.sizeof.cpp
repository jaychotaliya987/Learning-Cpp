#include <iostream>



int main()
{
    /*sizeof() function gives the size of each type
    of variable that we can use in the c++ on how much 
    space it occupys in the mamory */
    std::cout << sizeof(int) << '\n';
    std::cout << sizeof(short) << std::endl;
    std::cout << sizeof(long) << std::endl;
    std::cout << sizeof(char) << std::endl;
    std::cout << sizeof(float) << std::endl;
    std::cout << sizeof(double) << std::endl;
    std::cout << sizeof(bool) << std::endl;
    
    return 0;
}