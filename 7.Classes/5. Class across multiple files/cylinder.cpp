//! This file only have the implementation of the class. 
//! If the user wants to see the implementation of the class they can take a look here.

#ifndef CYLINDER_CPP // * This is a header guard
// ! Header guard is used to avoid the problem of double inclusion when the header file is included in multiple cpp files.
// ! header guard will only protect against files but not functions. The functions in the file should only be declared once with same name.
#define CYLINDER_CPP

#include "cylinder.h"

/*
* The implementation file will have all the implementation of all the classes not just a single class.
* you can use different file but the C++ have files have capabilities to hold all the implementations in the single file.
* The way we do this is by using a resolution operator.
* The resolution operator is ::
!                           RETURN_TYPE CLASS_NAME::FUNCTION_NAME(PARAMETERS)
*/

// * Constructor
cylinder::cylinder(double r, double h){
    radius = r;
    height = h;
}

// * Member Functions / Methods
double cylinder::volume()
    {return PI * radius * radius * height;}

// * Setters and Getters
void cylinder::setRadius(double r){radius = r;}
void cylinder::setHeight(double h){height = h;}
double cylinder::getRadius(){return radius;}
double cylinder::getHeight(){return height;}

#endif