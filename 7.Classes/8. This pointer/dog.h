#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string_view>

class Dog{ 
    public :
        //! Constructors
        Dog();
        Dog(std::string_view, std::string_view, int);
        
        //! Destructor
        ~Dog(); 

        //! Setters
        void set_name(std::string_view);
        void set_breed(std::string_view); 
        void set_age(int);

        //! Setters with return pointer
        Dog *set_name_returnptr(std::string_view);
        Dog *set_breed_returnptr(std::string_view);
        Dog *set_age_returnptr(int);

        //! print_info
        void print_info();


    private :
        std::string name = "Unknown";
        std::string breed = "Unknown";
        int *p_age{nullptr};
};

#endif 