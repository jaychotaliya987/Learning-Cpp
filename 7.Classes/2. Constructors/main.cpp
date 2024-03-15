#include <iostream>

const double PI {3.14159};

class cylinder
{
public:
    // * Constructor = The constructor will initialise the class object with name you give it and set it's member variables with corresponding values.
    // * The compiler will look for the constructor in the class if you call the class without any initialisation.
    // * Constructors are special kind of method which have no return type, must have same name as class name, can have parameters or not.
    // * We can use default constructor. The default constructor and initialise the member variables to 0.

    cylinder(){
        radius = 3.0;
        height = 7.0;
    }

    cylinder(double r, double h){ // ! This constructor is taking in the parameters and use the parameters to initialise the member variables.
        radius = r;
        height = h;
    }
    //* Member Functions / Methods
    double getVolume()
        {return PI * radius * radius * height;}

private: 
    // * Member Variables = Always make them private unless really necessary. Otherwise people can change the logic of the class.
    double radius = 0.0; // ! Default values are set here.
    double height = 0.0;
};


int main ()
{
    cylinder can; // ! Compiler will use the matching constructor without parameters instead of the default values of the member variables. 
//!                    This will construct a class object with name 'can' and set it's member variables to default values.

    cylinder jar(5,10); // ! compiler will use the constructor who takes in the parameters and not the default values or the constructor with no parameters. 
//!                          Compiler is smart enough to choose the right constructor.

    std::cout << "The volume of can is : " << can.getVolume() << std::endl;
    std::cout << "The volume of jar is : " << jar.getVolume() << std::endl;

    return 0;
};