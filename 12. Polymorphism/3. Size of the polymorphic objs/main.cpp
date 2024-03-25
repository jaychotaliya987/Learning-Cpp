#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"
#include "shape.cpp"
#include "oval.cpp"
#include "circle.cpp"


int main() {
    
    //! Size
    //* Size of polymorphic objects are much larger than the size of the static classes. Do not use polymorphism if you do not need it. 
    
    std::cout << "Size of Shape: " << sizeof(Shape) << std::endl; // ! Dynamic 40
    std::cout << "Size of Oval: " << sizeof(Oval) << std::endl; // ! Dynamic 56
    std::cout << "Size of Circle: " << sizeof(Circle) << std::endl; // ! Dynamic 56

    //! Slicing
    Circle circle1(5.0, "Circle1");
    Shape shape = circle1;
    shape.draw(); // ! Shape::draw() called. Drawing  with radius : 5

    return 0;
}