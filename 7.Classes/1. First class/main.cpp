#include <iostream>

const double PI {3.14159};

/*
* Member variables are private by default. Member functions are public by default.
* Members can't be references. Because references must be initialised, The power of classes is that you can create members without initialising them.
* All the function and variables inside a class is called members.
* Class functions always have access to all the member variables of the class.
*/

class cylinder
{
public:
    double getVolume()
        {return PI * radius * radius * height;}

public: // ! not an idea setting to set member variable public. You should avoid it as much as you can.
    double radius;
    double height;
};
int main ()
{
    cylinder can;
    can.radius = 2.5; // ! This is constructor outside the class. It's not a good practice. Because you can change the variable outside the class. Maybe we can use CONST to avoid this.
    can.height = 5.0;
    can.getVolume();
    std::cout << "The volume is: " << can.getVolume() << std::endl;
    return 0;
};