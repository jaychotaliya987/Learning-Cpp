#include "circle.h"

Circle::Circle(double radius , std::string_view description) 
    : Oval(radius,radius,description) //! Initializer list with the base class constructor call. as we are initializing circle we have both xrad and yrad set to radius.
    //!  This circle will have 2 radii xrad and yrad but will have same values that we initialize.
{
}

Circle::~Circle()
{
}

