#include <iostream>
#include <string>

int main()
{
    //getline() takes two arguments one is cin which
    //takes the user input and store it even if there 
    //are spaces in the input. and the 2nd is the 
    //variable name itself.
    std::string userName;
    std::cout << "tell me your nickname? ";
    getline (std::cin, userName);
    std::cout << "Hello " << userName << ".\n";

    return 0;

}