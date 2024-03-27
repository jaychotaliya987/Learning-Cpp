#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"
#include "shape.cpp"
#include "oval.cpp"
#include "circle.cpp"

/*
* If we want to use the overload of the same function in the base class then the overloads in the downstream classes will be eclipsed.
* If we want to really use the overload then we have to remove the overrides in the downstream classes.
* Or we can copy paste the overloads in the downstream classes and override them as well then it is possible to use everything. and with the call to the
* functions of a type not in the shape class.
*/

int main() {
    
    Shape Shape1("whatever shape");
    Circle *circle1 = new Circle(5.0, "Circle1");
    Circle circle2(10.0, "Circle2");
    Oval oval1(5.0, 10.0, "Oval1");
    Oval oval2(10.0, 15.0, "Oval2");

    circle1 -> draw();
    circle2.draw(44);
    Shape1.draw();
    Shape1.draw(44);

    oval1.draw();
    oval2.draw(44);

    delete circle1;

    return 0;
}