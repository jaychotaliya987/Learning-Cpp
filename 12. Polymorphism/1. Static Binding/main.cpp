#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"
#include "shape.cpp"
#include "oval.cpp"
#include "circle.cpp"

void draw_circle(const Circle& circle){ //! Function that will make a call to draw function of circle.
    circle.draw();
}

void draw_oval(const Oval& oval){ //! Function that will make a call to draw function of oval.
    oval.draw();
}
//? More functions as you deal with more shape types. 30 ? 70? 100? It's messy.



int main(){

    Shape shape1("Shape1");
    //* shape1.draw(); // This will make a call to draw function of shape.

    Oval oval1(2.0,3.5,"Oval1");
    //* oval1.draw(); // This will make a call to draw function of oval.

    Circle circle1(3.3,"Circle1");
    //* circle1.draw(); // This will make a call to draw function of circle.

    //! Base pointers
    //* Even if we assign a pointer to a different object other than the shape, we will not draw that object.
    //* this is called static binding. We will be drawing the shape because the pointer itself is of type shape. 
    Shape * shape_ptr = &shape1;
    //* shape_ptr->draw(); // Draw a shape

    shape_ptr = &oval1;
    //* shape_ptr->draw(); Draws a oval

    shape_ptr = &circle1;
    //* shape_ptr->draw(); Draws a circle


    //! Base references
    Shape& shape_ref = circle1;
    //* shape_ref.draw();  same thing as pointer nothing changes even if we use the reference.


    //! Drawing shapes
    //* We can use the function specifically taking a particular shape type as an argument. 
    //* Then it is possible to draw a particular shape but if we have 100 shapes then it is not practical.
    draw_circle(circle1);
    draw_oval(oval1);



    //! Shapes stored in collections
     Circle circle_collection[]{circle1,Circle(10.0,"Circle2"),Circle(20.0,"Circle3")};
     Oval oval_collection[]{oval1,Oval(22.3,51.1,"Oval2")};

     //? More arrays as you have more shape types, 100? Messy right?

    
   
    return 0;
}