#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"
#include "shape.cpp"
#include "oval.cpp"
#include "circle.cpp"

void draw_shape (Shape * s){
    s->draw();
}

void draw_shape_v1 (Shape & s){
    s.draw();
}

int main(){

    Shape shape1("Shape1");
    //shape1.draw();

    Oval oval1(2.0,3.5,"Oval1");
    //oval1.draw();

    Circle circle1(3.3,"Circle1");
    //circle1.draw();

    //Base pointers
    Shape * shape_ptr = &shape1;
    //shape_ptr->draw();

    shape_ptr = &oval1;
    //shape_ptr->draw(); // Draw an oval

    shape_ptr = &circle1;
    //shape_ptr->draw();


    //Base references
    Shape& shape_ref = oval1;
    shape_ref.draw(); // ! Oval version of the draw function


    //Drawing shapes
    draw_shape(&circle1);
    draw_shape(&oval1);

    draw_shape_v1(circle1);
    draw_shape_v1(oval1);



    //Shapes stored in collections
    Shape * shapes[] = {&shape1,&oval1,&circle1};
    for (Shape * shape : shapes){
        shape->draw();
    }

    
   
    return 0;
}