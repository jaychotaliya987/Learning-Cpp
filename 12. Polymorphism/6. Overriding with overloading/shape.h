#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <string_view>
#include <iostream>
class Shape
{
public:
    Shape() = default;
    Shape(std::string_view description);
    ~Shape();
/*
* These are two overloads of the draw function. If we have overriding (polymorphism) and also have overloads then this will work and we will be 
* able to call whatever methods for the derived classes. This is overloading with overrides.
*/   
    virtual void draw() const{
        std::cout << "Shape::draw() called. Drawing " << m_description << std::endl;
    }
    
    virtual void draw(int color_depth) const{
        std::cout << "Drawing with color_depth..." << m_description << std::endl;
    }

protected : 
    std::string m_description{""};
};

#endif // SHAPE_H
