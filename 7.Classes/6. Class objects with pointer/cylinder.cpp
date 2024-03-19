#ifndef CYLINDER_CPP 
#define CYLINDER_CPP

#include "cylinder.h"

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