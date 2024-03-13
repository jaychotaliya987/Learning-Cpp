#include <iostream>
#include <string>

int main()
{
    /*unlike other variables string is not inbuilt and 
    hance you have to call out std everytime you want 
    to assign a variable to string*/

    std::string line = "this is a string";
    std::cout << line << std::endl;
    
    /*there is a position to each character in a string
    you can call it out as you can do in python.*/
    
    std::cout << "the length of this line is: " << line.length() << std::endl;
    std::cout << "the 7th character of this line is: " << line[8] << std::endl;
}