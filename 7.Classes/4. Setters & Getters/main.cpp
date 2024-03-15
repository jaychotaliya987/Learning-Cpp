#include <iostream>

const double PI{3.14159};

class cylinder
{
public:
    // * Constructors
    cylinder(double r, double h){ // ! This constructor is taking in the parameters and use the parameters to initialise the member variables.
        radius = r;
        height = h;
    }

    // ! Setters = Setter functions will modify the values of the member variables. We are manipulating the original value. 
    // ! The values set by setters have lifetime of the class object itself or unless destructor is called.
    void setRadius(double r)
    {
        radius = r;
    }
    void setHeight(double h)
    {
        height = h;
    }

    // ! Getters = This getter function will get the value of the member variable but it will return the copy of it. We are not manipulating the original value.
    double getRadius()
    {
        return radius;
    }
    double getHeight()
    {
        return height;
    }

    // * Member Functions / Methods
    double volume()
    {
        return PI * radius * radius * height;
    }

private:
    double radius{1.0};
    double height{1.0};
};

int main()
{
    cylinder can(3.0, 7.0); // ! Compiler will use the constructor who takes in the parameters. This will basically creates a class object with name can and set it's member variables to 3.0 and 7.0.

    std::cout << "The volume of can from constructor is : " << can.volume() << std::endl;

    can.setRadius(2.5);
    can.setHeight(7.0);

    can.volume();

    std::cout << "The volume of the can from setters is : " << can.volume() << std::endl;

    return 0;
};