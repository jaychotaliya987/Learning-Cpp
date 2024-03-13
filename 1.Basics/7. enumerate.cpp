#include <iostream>

int main()
{
    /*enum = creates a new data type from scretch
    each valuse in the data type is assign to a integer value
    Jay = 0
    Jimi = 1
    Siddharth = 2
    Vivek = 3
    and so on*/

    enum Names {Jay, Jimi, Siddharth, VIVEK};
    Names random;

    /*this part i Didnt get. it says that it creates 
    a variable in the enumerated constants and then 
    we can assign the variable to the Names in the enum.
    In C++ it is coustomary to spacify the data type before
    assigning the variable to a value*/

    random = Jay;
    std::cout << random << std::endl ;


    return 0;


}