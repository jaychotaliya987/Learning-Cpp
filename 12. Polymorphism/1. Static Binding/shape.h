#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <string_view>
#include <iostream>
class Shape
{
public:
    Shape() = default;
    Shape(std::string_view description); //! Constructor will have one single parameter that is description.
    ~Shape();
    
    void draw() const{ //! draw function in shape. drawing shape. 
        std::cout << "Shape::draw() called. Drawing " << m_description << std::endl;
    }
    
protected : 
    std::string m_description{""};
};

#endif // SHAPE_H
