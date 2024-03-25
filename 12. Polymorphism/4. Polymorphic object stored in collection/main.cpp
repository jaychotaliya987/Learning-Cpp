#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"
#include "shape.cpp"
#include "oval.cpp"
#include "circle.cpp"


int main() {
    
    Circle circle1(5.0, "Circle1");
    Circle circle2(10.0, "Circle2");
    Circle circle3(15.0, "Circle3");
    Oval oval1(5.0, 10.0, "Oval1");
    Oval oval2(10.0, 15.0, "Oval2");
    Oval oval3(15.0, 20.0, "Oval3");

    Shape shapes1[] = {circle1, oval1, circle2, oval2, circle3, oval3}; //! Slicing of objects, only storing the shape information
    for (Shape &shape : shapes1) {
        shape.draw();
        std::cout << "Size of object: " << sizeof(shape) <<std::endl;
    }

    return 0;
}