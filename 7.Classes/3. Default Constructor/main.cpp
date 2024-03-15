#include <iostream>

const double PI {3.14159};


class cylinder
{
public:
    // * Constructors
    cylinder () {}; // ! this is called default constructor and it will use the default variable initialisation. For ex. int is defaulted 0 and double is defaulted to 0.0 in C++.
// !                  We can use another syntax for the same default constructor and that is:
//                                                                                  ** cylinder () = default; **


    cylinder(double r, double h){ // ! This constructor is taking in the parameters and use the parameters to initialise the member variables.
        radius = r;
        height = h;
    }

    //* Member Functions / Methods
    double getVolume()
        {return PI * radius * radius * height;}

private: 
    // * Member Variables = Always make them private unless really necessary. Otherwise people can change the logic of the class.
    double radius=0.0; // ! Default values are set here.
    double height=0.0;
};
int main ()
{
    cylinder can; // ? Compiler encounter this line and use the default constructor and initialise the member variable to it's default variable values in the private member list.
    cylinder jar(5,10);

    std::cout << "The volume of can is : " << can.getVolume() << std::endl;
    std::cout << "The volume of jar is : " << jar.getVolume() << std::endl;

    return 0;
};