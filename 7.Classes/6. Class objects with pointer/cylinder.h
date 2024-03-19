#ifndef CYLINDER_H // * This is a header guard
#define CYLINDER_H

#include "constants.h"

class cylinder{
public:
    // * Constructors
    cylinder();
    cylinder(double r, double h);

    // * Setters and Getters
    void setRadius(double r);
    void setHeight(double h);
    double getRadius();
    double getHeight();

    // * Member Functions / Methods
    double volume();

private:
    double radius{1.0};
    double height{1.0};
};

#endif