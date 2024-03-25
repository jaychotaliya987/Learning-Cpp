#ifndef CIRCLE_H
#define CIRCLE_H
#include "oval.h"

class Circle : public Oval //! Public inheritance from Oval class.
{
public:
    Circle() = default;
    Circle(double radius,std::string_view description);
    ~Circle();
    
    void draw() const{ //! drawing function but does nothing but printing.  so we know function is called.
        std::cout << "Circle::draw() called. Drawing " << m_description <<
            " with radius : " << get_x_rad() << std::endl;        
    }

};

#endif // CIRCLE_H
