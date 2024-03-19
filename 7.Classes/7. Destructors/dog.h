#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string_view>

class Dog{ //* Class Dog only have one variable stored in the heap. that is int age.
    public :
        Dog();
        Dog(std::string_view name_param, std::string_view breed_param, int p_age_param);

        ~Dog(); //* Destructor is called when the object goes out of scope. Destructor will be called automatically by the compiler at the end of the scope.
//*                 Destructor is always without parameters and without return type.
    private :
        std::string name = "Unknown";
        std::string breed = "Unknown";
        int *p_age{nullptr};
};

#endif 