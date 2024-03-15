#include <iostream>
#include "cylinder.cpp"

//! Everything results in clean main file with just function calls and constructors.

int main()
{ 
    cylinder can(3.0, 7.0); 
    std::cout << "The volume of can from constructor is : " << can.volume() << std::endl;

    can.setRadius(2.5);
    can.setHeight(7.0);
    std::cout << "The volume of the can from setters is : " << can.volume() << std::endl;

    return 0;
};