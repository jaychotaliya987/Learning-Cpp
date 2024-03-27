#ifndef OVAL_H
#define OVAL_H
#include "shape.h"
class Oval : public Shape
{
public:
    Oval()= default;
    Oval(double x_radius, double y_radius,
                std::string_view description);
    ~Oval();

//* If we also have overrides in the downstream classes the main overload will be eclipsed and will not be used.
//* We will not be able to call the draw() function with the parameters for the objects of the oval or circle class.

    
    virtual void draw() const override{
        std::cout << "Oval::draw() called. Drawing " << m_description <<
            " with m_x_radius : " << m_x_radius << " and m_y_radius : " << m_y_radius 
                    << std::endl;
    }

    virtual void draw(int color_depth) const override{
        std::cout << "Overloaded Drawing with color_depth..." << m_description << std::endl;
    }

protected:
    double get_x_rad() const{
        return m_x_radius;
    }
    
    double get_y_rad() const{
        return m_y_radius;
    }
 
private : 
    double m_x_radius{0.0};
    double m_y_radius{0.0};
};

#endif // OVAL_H
