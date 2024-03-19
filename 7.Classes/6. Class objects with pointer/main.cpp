#include <iostream>
#include "cylinder.cpp"

int main()
{ 
    cylinder can(3.0, 7.0); 
    can.volume();

    cylinder *can_ptr = &can;

    //! -> is a operator that do the dereferencing of the pointer. So that we can avoid using the syntax like (*can_ptr).volume(). 
    //! This operator basically do that for us. It is basically used to apply can_ptr's volume

    std::cout << "Volume: " << can_ptr->volume() << std::endl;

    //! new cylinder in the heap

    cylinder *bucket_ptr = new cylinder(100,13); //! Cylinder object in heap
    
    std::cout << "Volume (bucket): " << bucket_ptr->volume() << std::endl;
    std::cout << "base_rad (bucket):" << bucket_ptr->getRadius() << std::endl;
    return 0;
};